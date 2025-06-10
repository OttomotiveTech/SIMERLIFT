#ifndef LC_PROT_LCFU___REGENMAX__C
#define LC_PROT_LCFU___REGENMAX__C

#include <lcfu___regenmax.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___REGENMAX(LC_TD_FunctionBlock_REGENMAX* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC_this->LC_VD_A=regenMaxCurrent( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
