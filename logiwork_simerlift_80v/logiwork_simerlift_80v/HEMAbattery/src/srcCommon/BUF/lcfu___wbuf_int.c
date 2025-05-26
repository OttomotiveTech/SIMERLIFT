#ifndef LC_PROT_LCFU___WBUF_INT__C
#define LC_PROT_LCFU___WBUF_INT__C

#include <lcfu___wbuf_int.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_INT(LC_TD_FunctionBlock_WBUF_INT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
