#ifndef LC_PROT_LCFU___BMUINFO__C
#define LC_PROT_LCFU___BMUINFO__C

#include <lcfu___bmuinfo.h>
#include <LC3CGEdgeDetect.h>
#include "TMSboard.h"

#ifdef BUILDPLATFORM

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "os_semphr.h"
#include "plStack.h"
#endif
extern SemaphoreHandle_t battStackMutex;
#define V(VAR) (LC_this->LC_VD_##VAR)
#endif


/*                            FunctionBlocks                   */
void  lcfu___BMUINFO(LC_TD_FunctionBlock_BMUINFO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC3_MSI_EDGE( V(R), V(R_M));

    if( V(R)){
        V(PENDING)=1;
    }

    V(R_OUT)=0;

	if( V(PENDING)){

		if( xSemaphoreTake( battStackMutex, pdMS_TO_TICKS(1))==pdPASS){

		    V(PENDING)=0;
		    V(R_OUT)=1;

		    int i;
		    uint8_t aux;
            uint8_t nBoardCells=PLstack_boardCellNum( V(BRD));
            uint32_t tableSize=sizeof(LC_this->LC_VD_CELLVOLT)/sizeof(LC_this->LC_VD_CELLVOLT[0]);
            if( nBoardCells>tableSize){
                nBoardCells=tableSize;
            }
            for( i=0; i<nBoardCells; i++){
                LC_this->LC_VD_CELLVOLT[i]=PLstack_cellV( V(BRD), i);
                aux=PLstack_cell2AuxTab( V(BRD), i, V(T_CELLS), tableSize);
                LC_this->LC_VD_CELLTEMP[i]=(int8_t)PLstack_tempAux( V(BRD), aux, V(NTCBETA), V(NTCNOMT_KLV), V(NTCNOMR_OHM));
            }

            xSemaphoreGive( battStackMutex);
		}

	}

#endif
}

#endif
