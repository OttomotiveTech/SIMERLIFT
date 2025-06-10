#ifndef LC_PROT_LCFU___GUICFG_INT__C
#define LC_PROT_LCFU___GUICFG_INT__C


#include <lcfu___guicfg_int.h>
#include "TMS570.h"
#ifdef BUILDPLATFORM
#include <LC3CGEdgeDetect.h>
#include "ConfigRead.h"
#include "config.h"
#endif

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___GUICFG_INT(LC_TD_FunctionBlock_GUICFG_INT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	LC3_MSI_EDGE( V(R), V(R_M));

	if( V(R)){
		ConfigRead( V(CODE), CFGint32, &V(VAL), (char *)CONFIGURATION_FLASH_BASE_ADDRESS, 0);
	}
#endif
}

#endif
