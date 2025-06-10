#ifndef LC_PROT_LCFU___RPRM__C
#define LC_PROT_LCFU___RPRM__C

#include <lcfu___rprm.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RPRM(LC_TD_FunctionBlock_RPRM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	double val;
    uint64_t mask;
    mask = (0xFFFFFFFFFFFFFFFF >> (64 - ( V(LEN))));
    val = (double) ((V(IN) >> V(START)) & mask);
	V(OUT)=val*V(RES)+V(OFS);
}

#endif
