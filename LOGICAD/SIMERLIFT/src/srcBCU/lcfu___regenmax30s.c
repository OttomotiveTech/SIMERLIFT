#ifndef LC_PROT_LCFU___REGENMAX30S__C
#define LC_PROT_LCFU___REGENMAX30S__C

#include <lcfu___regenmax30s.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___REGENMAX30S(LC_TD_FunctionBlock_REGENMAX30S* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC_this->LC_VD_A=regenMaxCurrent30s( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
