#ifndef LC_PROT_LCFU___BATTSTACK__C
#define LC_PROT_LCFU___BATTSTACK__C

#include <lcfu___battstack.h>
#include <RTAPITimer.h>
#include <LC3CGEdgeDetect.h>

#include "lcdt___battstackerr.h"
#include "lcdt___battstackfault.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "os_semphr.h"
#include "battStackOsPort.h"
#include "plStack.h"
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

#define elapsed(current, start) (((current)>=(start)) ? ((current)-(start)) : (0xFFFFFFFF-((start)-(current))))


extern SemaphoreHandle_t battStackMutex;

batteryStackIn_t toBattStack;
batteryStackOut_t fromBattStack;
#endif

/*                            FunctionBlocks                   */
void  lcfu___BATTSTACK(LC_TD_FunctionBlock_BATTSTACK* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
#ifdef BUILDPLATFORM

#ifndef TMS_FREERTOS
	static uint8_t faultMem=0;
/* Vendor Code */
	switch( V(STATE))
	{
	case 0: //shutdown mode
		if( LC_this->LC_VD_ENB){
			uint8_t owd=0;
			if( PLstack_init( V(BAUD), V(OVTHRES), V(UVTHRES), V(N_CELLS), V(CHSEL), &owd)==0){
				if( owd){
					V(FAULT)|=LC_ED__BATTSTACKFAULT__OWD;
				}
				else{
					V(FAULT)&=~LC_ED__BATTSTACKFAULT__OWD;
				}
	            //delayMs(10);
				V(LASTFAULTCHECK)=LC_MF_CURRENT_TIME_API;
				V(N_BRD)=PLstack_numofBoards();
				V(ERR)=LC_ED__BATTSTACKERR__NOERR;
				V(STATE)=1;
			}
	        else{
	            //put a delay
	        	V(ERR)|=LC_ED__BATTSTACKERR__INIT;
	        	V(STATE)=2;
	            V(STARTT)=LC_MF_CURRENT_TIME_API;
	        }
		}

		break;

	case 1: //active mode

		if( !LC_this->LC_VD_ENB){
			if( PLstack_shutdown()!=0){
				// TODO put error code
			}
			V(BALENB_M)=0;
			V(STATE)=2;
			V(STARTT)=LC_MF_CURRENT_TIME_API;
		}
		else if( /*V(BALENB)==0 && */ elapsed( LC_MF_CURRENT_TIME_API, V(STARTT))>=V(MPER)){
			int mResult=PLstack_measurement();
			if( mResult==0){
				uint8_t brd=0xFF, cell=0xFF;
				V(ERR)&=~(LC_ED__BATTSTACKERR__NORESP|LC_ED__BATTSTACKERR__CONFIG);
				V(VCH)=PLstack_channelV( V(BRD), V(CH));
				V(VCELL)=PLstack_cellV( V(BRD), V(CELL));
				V(VAV)=PLstack_avCellV();
				V(VMAXCELL)=PLstack_maxCellV( &brd, &cell);
				V(MAXCELLBRD)=brd;
				V(MAXCELLNUM)=cell;
				V(VMINCELL)=PLstack_minCellV( &brd, &cell);
				V(MINCELLBRD)=brd;
				V(MINCELLNUM)=cell;
				V(VSTACK)=PLstack_totalCellV();

				//V(TEMPCELL)=PLstack_tempAux( V(BRD), V(CELL)>>1, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
				V(TEMPCELL)=PLstack_tempAux( V(BRD), V(T_CELLS)[V(CELL)], V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
				V(MAXTEMP)=PLstack_maxTempAux( &brd, &cell, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
				V(MAXTEMPBRD)=brd;
				V(MAXTEMPCELL)=aux2cell( cell, V(T_CELLS), 16);
				V(MINTEMP)=PLstack_minTempAux(&brd, &cell, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
				V(MINTEMPBRD)=brd;
				V(MINTEMPCELL)=aux2cell( cell, V(T_CELLS), 16);

				V(ERR)=LC_ED__BATTSTACKERR__NOERR;
			}
			else if( mResult==-1){
				V(ERR)|=LC_ED__BATTSTACKERR__NORESP;
			}
			else if( mResult==-2){
				V(ERR)|=LC_ED__BATTSTACKERR__CONFIG;
			}
			else{
				// TODO put unknown error
			}
			V(STARTT)=LC_MF_CURRENT_TIME_API;
		}

		if( !PLstack_fault() && LC_this->LC_VD_ENB && ( V(BALENB_M) != V(BALENB) || V(BALVTHRES_M)!=V(BALVTHRES))){
			int bResult;
			if( V(BALENB)){
				bResult=PLstack_setBalThres(V(BALVTHRES));
			}
			else{
				bResult=PLstack_clrBalThres();
			}

			if( bResult==0){
				V(ERR)&=~(LC_ED__BATTSTACKERR__SQZACTIVE|LC_ED__BATTSTACKERR__NORESP);
				V(BALENB_M)=V(BALENB);
				V(BALVTHRES_M)=V(BALVTHRES);
				if( PLstack_getBalReg( V(BRD), &V(BALREG))){
					V(ERR)|=LC_ED__BATTSTACKERR__NORESP;
				}
			}
			else if(bResult==-100){
				// squeeze test active, balance can not be performed
				V(ERR)|=LC_ED__BATTSTACKERR__SQZACTIVE;
			}
			else if( bResult==-1){
				V(ERR)|=LC_ED__BATTSTACKERR__NORESP;
			}

		}
		if( V(ERR)&LC_ED__BATTSTACKERR__NORESP){
			V(BALENB_M)=0;
			V(STATE)=2;
			V(STARTT)=LC_MF_CURRENT_TIME_API;
		}
		break;


	case 2: //delay
		if( elapsed( LC_MF_CURRENT_TIME_API, V(STARTT))>=50){
			V(STATE)=0;
		}
		break;


	default:
		break;

	}

	//20hz fault check
	if( V(STATE)!=2){
		if(  elapsed( LC_MF_CURRENT_TIME_API, V(LASTFAULTCHECK))>=50){
			V(LASTFAULTCHECK)=LC_MF_CURRENT_TIME_API;
			if( PLstack_fault()){
				PLstack_getFault( &V(FAULT));
				faultMem=1;
			}

			if( faultMem && !PLstack_fault()){
				PLstack_getFault( &V(FAULT));
				faultMem=0;
			}
		}
	}

#else
	uint8_t rtosError=0;
	//freeRTOS mail communication to the battery stack task
	toBattStack.BALENB=V(BALENB);
	toBattStack.BALV=V(BALV);
	toBattStack.BAUD=V(BAUD);
	toBattStack.nBoards=V(NBOARDS);
	toBattStack.ENB=V(ENB);
	//toBattStack.MPER=V(MPER);
	toBattStack.OVTHRES=V(OVTHRES);
	toBattStack.UVTHRES=V(UVTHRES);
    memcpy( toBattStack.CHSEL, V(CHSEL), sizeof(toBattStack.CHSEL) );
    memcpy( toBattStack.N_CELLS, V(N_CELLS), sizeof(toBattStack.N_CELLS) );
    LC3_MSI_EDGE( V(M_ALL_R), V(M_ALL_R_M));
    LC3_MSI_EDGE( V(M_AUX_R), V(M_AUX_R_M));
    V(ALLTRIGCOUNT)+=V(M_ALL_R);
    V(AUXTRIGCOUNT)+=V(M_AUX_R);
    toBattStack.allTrigCount=V(ALLTRIGCOUNT);
    toBattStack.auxTrigCount=V(AUXTRIGCOUNT);
    toBattStack.TIMESTAMP=xTaskGetTickCount();

	battStackPort_sendMail( BcuNode, (void *)&toBattStack);

    if( xSemaphoreTake( battStackMutex, pdMS_TO_TICKS(1))==pdPASS){

        uint8_t brd, cell, aux;
        uint32_t tableSize=sizeof(LC_this->LC_VD_T_CELLS)/sizeof(LC_this->LC_VD_T_CELLS[0]);

        V(N_BRD)=PLstack_numofBoards();
        V(VCH)=PLstack_channelV( V(BRD), V(CH));
        V(VCELL)=PLstack_cellV( V(BRD), V(CELL));
        V(VAV)=PLstack_avCellV();
        V(VMAXCELL)=PLstack_maxCellV( &brd, &cell);
        V(MAXCELLBRD)=brd;
        V(MAXCELLNUM)=cell;
        V(VMINCELL)=PLstack_minCellV( &brd, &cell);
        V(MINCELLBRD)=brd;
        V(MINCELLNUM)=cell;
        V(VSTACK)=PLstack_totalCellV();

        aux=PLstack_cell2AuxTab( V(BRD), V(CELL), V(T_CELLS), tableSize);
        V(TEMPCELL)=PLstack_tempAux( V(BRD), aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));

        V(MAXTEMP)=PLstack_maxTempAux( &brd, &aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
        cell=PLstack_aux2CellTab( brd, aux, V(T_CELLS), tableSize);
        V(MAXTEMPBRD)=brd;
        V(MAXTEMPCELL)=cell;

        V(MINTEMP)=PLstack_minTempAux( &brd, &aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
        cell=PLstack_aux2CellTab( brd, aux, V(T_CELLS), tableSize);
        V(MINTEMPBRD)=brd;
        V(MINTEMPCELL)=cell;

        V(BALREG)=PLstack_boardBalReg( V(BRD));

        xSemaphoreGive( battStackMutex);
    }
    else{
        //rtosError=1;
        __nop();
    }

    if( battStackPort_readMail( BattNode, (void *)&fromBattStack)!=pdPASS){
        rtosError=1;
    }
    else if( elapsed(xTaskGetTickCount(), fromBattStack.TIMESTAMP)>pdMS_TO_TICKS(1000)){ //TODO extend
        rtosError=1;
    }
    else{
        V(ERR)=fromBattStack.ERR;
        V(FAULT)=fromBattStack.FAULT;
    }

    if( rtosError){
        V(ERR)|=LC_ED__BATTSTACKERR__RTOSERR;
    }

#endif

#endif
}

#endif



