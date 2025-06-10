#ifndef LC_PROT_LCFU___WBITS__C
#define LC_PROT_LCFU___WBITS__C

#include <lcfu___wbits.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBITS(LC_TD_FunctionBlock_WBITS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
    uint64_t mask;
    mask = (0xFFFFFFFFFFFFFFFF<<V(START)) & (0xFFFFFFFFFFFFFFFF>>(64-(V(START)+V(LEN))));
    V(PRM)<<=V(START);
    V(OUT)=mask&V(PRM);
}

#endif
