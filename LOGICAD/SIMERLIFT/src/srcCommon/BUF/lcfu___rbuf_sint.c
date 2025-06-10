#ifndef LC_PROT_LCFU___RBUF_SINT__C
#define LC_PROT_LCFU___RBUF_SINT__C

#include <lcfu___rbuf_sint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_SINT(LC_TD_FunctionBlock_RBUF_SINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	V(VAL)=V(BUF)[0];
	V(RET)=V(BUF);
	V(NXT)=V(BUF)+1;
}

#endif
