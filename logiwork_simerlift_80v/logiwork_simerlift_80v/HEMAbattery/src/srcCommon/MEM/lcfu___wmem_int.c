#ifndef LC_PROT_LCFU___WMEM_INT__C
#define LC_PROT_LCFU___WMEM_INT__C

#include <lcfu___wmem_int.h>
#include <LC3CGEdgeDetect.h>

#ifdef BUILDPLATFORM
#include "memOpr.h"
#ifdef TMS_FREERTOS
#include "os_semphr.h"
extern SemaphoreHandle_t flashMutex;
#endif
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)


/*                            FunctionBlocks                   */
void  lcfu___WMEM_INT(LC_TD_FunctionBlock_WMEM_INT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC3_MSI_EDGE( V(R), V(R_M));
    if( V(R)){
        V(PENDING)=1;
    }

    if(  V(PENDING)){
#ifdef TMS_FREERTOS
        if( xSemaphoreTake( flashMutex, pdMS_TO_TICKS(2))==pdPASS){
            V(PENDING)=0;
            V(OK)=memWr_S16( V(ADDR), V(VAL));
            V(RET)=V(ADDR);
            V(NXT)=V(ADDR)+2;
            xSemaphoreGive( flashMutex);
        }
#else
        V(PENDING)=0;
        V(OK)=memWr_S16( V(ADDR), V(VAL));
        V(RET)=V(ADDR);
        V(NXT)=V(ADDR)+2;
#endif
    }
#endif
}

#endif
