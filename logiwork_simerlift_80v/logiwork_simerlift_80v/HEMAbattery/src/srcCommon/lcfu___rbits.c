#ifndef LC_PROT_LCFU___RBITS__C
#define LC_PROT_LCFU___RBITS__C

#include <lcfu___rbits.h>
#define V(VAR) (LC_this->LC_VD_##VAR)


/*                            FunctionBlocks                   */
void  lcfu___RBITS(LC_TD_FunctionBlock_RBITS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
    uint64_t mask;
    mask = (0xFFFFFFFFFFFFFFFF >> (64 - ( V(LEN))));
    V(OUT) = (V(IN) >> V(START)) & mask;
}

#endif
