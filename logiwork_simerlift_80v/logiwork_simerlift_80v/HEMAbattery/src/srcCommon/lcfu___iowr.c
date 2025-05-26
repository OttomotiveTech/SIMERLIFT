#ifndef LC_PROT_LCFU___IOWR__C
#define LC_PROT_LCFU___IOWR__C

#include <lcfu___iowr.h>
#include "TMS570.h"

#ifdef BUILDPLATFORM
#ifdef TMS_FREERTOS
#include "FreeRTOS.h"
#include "tmsOsPeripheral.h"
#endif
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___IOWR(LC_TD_FunctionBlock_IOWR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	gioPORT_t *gio=TMS570_GIO_PORT(V(PORT));
	if( !(gio->DIR&(0x1<<V(PIN)))){
	    gio->DIR |=(0x1<<V(PIN));
	}
#ifdef  TMS_FREERTOS
	if( (gio->DOUT&(0x1<<V(PIN)))!=(((uint32_t)V(VAL))<<V(PIN))){
	    if( tmsMutex_take( (void *)V(PORT), 1)==pdPASS){
	        gioSetBit( TMS570_GIO_PORT(V(PORT)), (uint32_t)V(PIN), (uint32_t)V(VAL));
	        tmsMutex_give( (void *)V(PORT));
	    }
	}
#else
	gioSetBit( TMS570_GIO_PORT(V(PORT)), (uint32_t)V(PIN), (uint32_t)V(VAL));
#endif
#endif
}

#endif
