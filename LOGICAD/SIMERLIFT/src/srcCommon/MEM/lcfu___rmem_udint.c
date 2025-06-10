#ifndef LC_PROT_LCFU___RMEM_UDINT__C
#define LC_PROT_LCFU___RMEM_UDINT__C

#include <lcfu___rmem_udint.h>
#include <LC3CGEdgeDetect.h>
#include "TMSboard.h"

#ifdef BUILDPLATFORM
#include "memOpr.h"
#ifdef TMS_FREERTOS
#include "os_semphr.h"
extern SemaphoreHandle_t flashMutex;
#endif
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)


/*                            FunctionBlocks                   */
void  lcfu___RMEM_UDINT(LC_TD_FunctionBlock_RMEM_UDINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM

    LC3_MSI_EDGE( V(R), V(R_M));

    if( V(R)){
        V(PENDING)=1;
    }

	if( V(PENDING)){
#ifdef TMS_FREERTOS
	    if( xSemaphoreTake( flashMutex, pdMS_TO_TICKS(2))==pdPASS){
	        V(PENDING)=0;
	        V(VAL)=memRd_U32(V(ADDR));
	        V(NXT)=V(ADDR)+4;
	        xSemaphoreGive( flashMutex);
	    }
#else
	    V(PENDING)=0;
        V(VAL)=memRd_U32(V(ADDR));
        V(NXT)=V(ADDR)+4;
#endif
	}
#endif
}

#endif
