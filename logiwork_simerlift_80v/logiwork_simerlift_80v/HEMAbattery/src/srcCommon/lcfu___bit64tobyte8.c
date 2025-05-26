#ifndef LC_PROT_LCFU___BIT64TOBYTE8__C
#define LC_PROT_LCFU___BIT64TOBYTE8__C

#include <lcfu___bit64tobyte8.h>
#include "TMS570.h"

#ifdef BUILDPLATFORM
#include "can64_bit_opr.h"
#endif

/*                            FunctionBlocks                   */
void  lcfu___BIT64TOBYTE8(LC_TD_FunctionBlock_BIT64TOBYTE8* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
#ifdef BUILDPLATFORM
	can64toCanBytes( LC_this->LC_VD_BIT64, LC_this->LC_VD_BYTES8);
#endif
}

#endif
