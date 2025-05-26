#ifndef LC_PROT_LCFU___DISCHARGEMAX__C
#define LC_PROT_LCFU___DISCHARGEMAX__C

#include <lcfu___dischargemax.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___DISCHARGEMAX(LC_TD_FunctionBlock_DISCHARGEMAX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	LC_this->LC_VD_A=dischargeMaxCurrent( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
