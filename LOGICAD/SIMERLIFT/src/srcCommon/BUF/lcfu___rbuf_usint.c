#ifndef LC_PROT_LCFU___RBUF_USINT__C
#define LC_PROT_LCFU___RBUF_USINT__C

#include <lcfu___rbuf_usint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_USINT(LC_TD_FunctionBlock_RBUF_USINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	V(VAL)=V(BUF)[0];
	V(RET)=V(BUF);
	V(NXT)=V(BUF)+1;
}

#endif
