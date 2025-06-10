#ifndef LC_PROT_LCFU___BYTE8TOBIT64__C
#define LC_PROT_LCFU___BYTE8TOBIT64__C

#include <lcfu___byte8tobit64.h>
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "can64_bit_opr.h"
#endif
/*                            FunctionBlocks                   */
void  lcfu___BYTE8TOBIT64(LC_TD_FunctionBlock_BYTE8TOBIT64* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	canBytesToCan64( LC_this->LC_VD_BYTES8, &LC_this->LC_VD_BIT64);
#endif
}

#endif
