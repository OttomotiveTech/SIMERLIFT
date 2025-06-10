#ifndef LC_PROT_LCFU___GUICFG_REAL__C
#define LC_PROT_LCFU___GUICFG_REAL__C

#include <lcfu___guicfg_real.h>
#include "TMS570.h"
#ifdef BUILDPLATFORM
#include <LC3CGEdgeDetect.h>
#include "ConfigRead.h"
#include "config.h"

#define V(VAR) (LC_this->LC_VD_##VAR)
#endif
/*                            FunctionBlocks                   */
void  lcfu___GUICFG_REAL(LC_TD_FunctionBlock_GUICFG_REAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	LC3_MSI_EDGE( LC_this->LC_VD_R, LC_this->LC_VD_R_M);

	if( LC_this->LC_VD_R){
		ConfigRead( LC_this->LC_VD_CODE, CFGfloat, &LC_this->LC_VD_VAL, (char *)CONFIGURATION_FLASH_BASE_ADDRESS, 0);
	}
#endif
}

#endif
