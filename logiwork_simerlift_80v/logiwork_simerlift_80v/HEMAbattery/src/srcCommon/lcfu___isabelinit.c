#ifndef LC_PROT_LCFU___ISABELINIT__C
#define LC_PROT_LCFU___ISABELINIT__C

#include <lcfu___isabelinit.h>
#include <RTAPITimer.h>
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "isabellaCan.h"

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif

#ifndef USE_CAN_HALC
#include "canbus.h"
#endif

#endif

#define INIT_MAX_COUNT 5

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___ISABELINIT(LC_TD_FunctionBlock_ISABELINIT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM

    if( V(ENB)){
        if( V(TRY)<INIT_MAX_COUNT){
#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(CH), 2)!=pdPASS){
                V(ERR)=1;
            }
            else
#endif
            {
                V(ERR)=isabelConfig( (canBASE_t *)V(CH));
                V(TRY)+=V(ERR)?1:100;
#ifdef TMS_FREERTOS
                tmsMutex_give( (void *)V(CH));
#endif
            }
        }
    }
    else{
        V(TRY)=0;
    }

#endif

}

#endif
