#ifndef LC_PROT_LCFU___REGENMAX10S__C
#define LC_PROT_LCFU___REGENMAX10S__C

#include <lcfu___regenmax10s.h>
#include "TMSboard.h"
#ifdef BUILDPLATFORM
#include "currentTable.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___REGENMAX10S(LC_TD_FunctionBlock_REGENMAX10S* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
    LC_this->LC_VD_A=regenMaxCurrent10s( LC_this->LC_VD_TEMP, LC_this->LC_VD_SOC);
#endif
}

#endif
