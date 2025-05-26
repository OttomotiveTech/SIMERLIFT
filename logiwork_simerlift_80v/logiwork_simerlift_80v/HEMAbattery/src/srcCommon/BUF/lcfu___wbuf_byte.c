#ifndef LC_PROT_LCFU___WBUF_BYTE__C
#define LC_PROT_LCFU___WBUF_BYTE__C

#include <lcfu___wbuf_byte.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_BYTE(LC_TD_FunctionBlock_WBUF_BYTE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	if( V(BUF)){
		V(BUF)[0]=V(PRM);
	    V(RET)=V(BUF);
	    V(NXT)=V(BUF)+1;
	}
}

#endif
