#ifndef LC_PROT_LCFU___DISCHARGEMAX30S__C
#define LC_PROT_LCFU___DISCHARGEMAX30S__C

#include <lcfu___dischargemax30s.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___DISCHARGEMAX30S(LC_TD_FunctionBlock_DISCHARGEMAX30S* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC_this->LC_VD_A=dischargeMaxCurrent30s( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
