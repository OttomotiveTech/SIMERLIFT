#ifndef LC_PROT_LCFU___WBUF_UINT__C
#define LC_PROT_LCFU___WBUF_UINT__C

#include <lcfu___wbuf_uint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_UINT(LC_TD_FunctionBlock_WBUF_UINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	if( V(BUF)){
		V(BUF)[0]=V(PRM)>>8;
		V(BUF)[1]=V(PRM);
	    V(RET)=V(BUF);
	    V(NXT)=V(BUF)+2;
	}
}

#endif
