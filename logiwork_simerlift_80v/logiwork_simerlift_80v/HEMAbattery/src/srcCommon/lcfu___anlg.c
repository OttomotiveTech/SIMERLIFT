#ifndef LC_PROT_LCFU___ANLG__C
#define LC_PROT_LCFU___ANLG__C

#include <lcfu___anlg.h>
#include "LC3CGEdgeDetect.h"
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "adc_tms.h"

#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "os_task.h"
#include "tmsOsPeripheral.h"
#endif
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___ANLG(LC_TD_FunctionBlock_ANLG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM

#ifdef TMS_FREERTOS
            if( tmsMutex_take( (void *)V(ADC), 1)==pdPASS){
                V(VAL)=adcGroupGetData( ((adcBASE_t *)V(ADC)), V(GRP), V(CH), 0);
                tmsMutex_give( (void *)V(ADC));
            }
#else
            V(VAL)=adcGroupGetData( ((adcBASE_t *)V(ADC)), V(GRP), V(CH), 0);
#endif

#endif
}

#endif
