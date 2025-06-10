#ifndef LC_PROT_LCFU___CHARGEMAX__C
#define LC_PROT_LCFU___CHARGEMAX__C

#include <lcfu___chargemax.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___CHARGEMAX(LC_TD_FunctionBlock_CHARGEMAX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	LC_this->LC_VD_A=chargeMaxCurrent( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
