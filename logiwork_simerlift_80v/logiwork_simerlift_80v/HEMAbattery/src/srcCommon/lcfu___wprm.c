#ifndef LC_PROT_LCFU___WPRM__C
#define LC_PROT_LCFU___WPRM__C

#include <lcfu___wprm.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WPRM(LC_TD_FunctionBlock_WPRM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint64_t mask;
	uint64_t param=(V(PRM)-V(OFS))/V(RES);
    mask = (0xFFFFFFFFFFFFFFFF<<V(START)) & (0xFFFFFFFFFFFFFFFF>>(64-(V(START)+V(LEN))));
    param<<=V(START);
    V(OUT)=mask&param;
}

#endif
