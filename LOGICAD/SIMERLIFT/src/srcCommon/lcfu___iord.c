#ifndef LC_PROT_LCFU___IORD__C
#define LC_PROT_LCFU___IORD__C

#include <lcfu___iord.h>
#include "TMS570.h"

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___IORD(LC_TD_FunctionBlock_IORD* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	gioPORT_t *gio=TMS570_GIO_PORT(V(PORT));
	if( gio->DIR&(0x1<<V(PIN))){
		gio->DIR&=~(0x1<<V(PIN));
	}
	V(OUT)=gioGetBit( TMS570_GIO_PORT(V(PORT)), (uint32_t)V(PIN));
#endif
}

#endif
