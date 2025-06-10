#ifndef LC_PROT_LCFU___BATTSTACKINFO__C
#define LC_PROT_LCFU___BATTSTACKINFO__C

#include <lcfu___battstackinfo.h>
#include <LC3CGEdgeDetect.h>
#include "TMSboard.h"

#ifdef BUILDPLATFORM

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "os_semphr.h"
#include "plStack.h"
#endif
#define DATA0PACKLEN  33
extern SemaphoreHandle_t battStackMutex;

#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___BATTSTACKINFO(LC_TD_FunctionBlock_BATTSTACKINFO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
#ifdef BUILDPLATFORM
/* Vendor Code */
    LC3_MSI_EDGE( V(R), V(R_M));

    if( V(R)){
        V(PENDING)=1;
    }

    V(R_OUT)=0;

	if( V(PENDING)){

	    if( xSemaphoreTake( battStackMutex, pdMS_TO_TICKS(1))==pdPASS){

	        V(PENDING)=0;

	        V(R_OUT)=1;

	        V(DATA)=V(BUF);
	        V(LEN)=0;

	        uint8_t *ptr=V(BUF);
	        uint32_t max=sizeof(V(BUF));
	        uint8_t nBoardCells=PLstack_boardCellNum( V(BRD));
	        uint32_t tableSize=sizeof(LC_this->LC_VD_T_CELLS)/sizeof(LC_this->LC_VD_T_CELLS[0]);
	        uint8_t aux=0;

	        if( V(INFO)==0 && max>=DATA0PACKLEN){

                uint32_t nCells=PLstack_totalCellNum();
                uint8_t nBoards=PLstack_numofBoards();
                uint16_t val;
                uint8_t brd=0, cell=0;

                ptr[0]=nBoards;
                ptr[1]=nCells;

                val=(uint16_t)(V(VOLT)*10);
                ptr[2]=val>>8;
                ptr[3]=val;

                val=(uint16_t)(V(AMP)*10);
                ptr[4]=val>>8;
                ptr[5]=val;

                ptr[6]=(uint8_t)((int8_t)V(TEMP));
                ptr[7]=(uint8_t)V(HUM);
                val=PLstack_avCellV();
                ptr[8]=val>>8;
                ptr[9]=val;

                val=PLstack_maxCellV( &brd, &cell);
                ptr[10]=val>>8;
                ptr[11]=val;
                ptr[12]=brd; //((brd<<4)&0xF0) | (cell&0x0F);
                ptr[13]=cell;

                val=PLstack_minCellV( &brd, &cell);
                ptr[14]=val>>8;
                ptr[15]=val;
                ptr[16]=brd; //((brd<<4)&0xF0) | (cell&0x0F);
                ptr[17]=cell;

                ptr[18]= (uint8_t)((int8_t)PLstack_maxTempAux( &brd, &aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM)));
                cell= PLstack_aux2CellTab(  brd, aux, V(T_CELLS), tableSize);
                ptr[19]=brd; //((brd<<4)&0xF0) | (cell&0x0F);
                ptr[20]=cell;

                ptr[21]= (uint8_t)((int8_t)PLstack_minTempAux( &brd, &aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM)));
                cell= PLstack_aux2CellTab(  brd, aux, V(T_CELLS), tableSize);
                ptr[22]=brd; //((brd<<4)&0xF0) | (cell&0x0F);
                ptr[23]=cell;

                ptr[24]=V(FAULT)>>24;
                ptr[25]=V(FAULT)>>16;
                ptr[26]=V(FAULT)>>8;
                ptr[27]=V(FAULT);
                ptr[28]=V(SOC);
                ptr[29]=V(SOH);
                ptr[30]=V(CYCLE)>>8;
                ptr[31]=V(CYCLE);
                ptr[32]=V(STATE);

                V(LEN)=DATA0PACKLEN;
	        }
	        else if( (V(INFO)==1 && (max>=nBoardCells*2+4)) || (V(INFO)==2 && (max>=nBoardCells+4))){

	            int i;
                uint32_t cellV;
                uint16_t fault=PLstack_boardFault( V(BRD));
                uint16_t balReg=PLstack_boardBalReg( V(BRD));

                ptr[0]=fault>>8;
                ptr[1]=fault;
                ptr[2]=balReg>>8;
                ptr[3]=balReg;

                ptr+=4;

                if( V(INFO)==1){
                    for( i=0; i<nBoardCells; i++){
                        cellV=PLstack_cellV( V(BRD), i);
                        *ptr++=cellV>>8;
                        *ptr++=cellV;
                    }
                    V(LEN)=nBoardCells*2+4;
                }
                else{
                    for( i=0; i<nBoardCells; i++){
                        aux=PLstack_cell2AuxTab( V(BRD), i, V(T_CELLS), tableSize);
                        *ptr++=(uint8_t) ((int8_t)PLstack_tempAux( V(BRD), aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM)));
                    }
                    V(LEN)=nBoardCells+4;
                }
	        }

	        xSemaphoreGive( battStackMutex);
	    }
	    else{
	        V(LEN)=0;
	        V(DATA)=0;
	    }
	}
#endif
}

#endif
