#ifndef LC_PROT_LCFU___GUICFG_HEXARR__C
#define LC_PROT_LCFU___GUICFG_HEXARR__C

#include <lcfu___guicfg_hexarr.h>
#include <LC3CGEdgeDetect.h>
#include "ConfigRead.h"
#include "config.h"



/*                            FunctionBlocks                   */
void  lcfu___GUICFG_HEXARR(LC_TD_FunctionBlock_GUICFG_HEXARR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	LC3_MSI_EDGE( LC_this->LC_VD_R, LC_this->LC_VD_R_M);

	if( LC_this->LC_VD_R){

		uint32_t len=0;

		if( LC_this->LC_VD_BUF){
			len=ConfigRead( LC_this->LC_VD_CODE, CFGhexArr, (void *)LC_this->LC_VD_BUF, (char *)CONFIGURATION_FLASH_BASE_ADDRESS, LC_this->LC_VD_MAX);
		}

		LC_this->LC_VD_ARR=LC_this->LC_VD_BUF;
		LC_this->LC_VD_LEN=len;
	}
}

#endif
