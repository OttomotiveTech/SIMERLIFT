#ifndef LC_PROT_LCFU___WBUF_UDINT__C
#define LC_PROT_LCFU___WBUF_UDINT__C

#include <lcfu___wbuf_udint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_UDINT(LC_TD_FunctionBlock_WBUF_UDINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr;
	if( V(BUF)){
		ptr=V(BUF);
	    ptr[0]=V(PRM)>>24;
	    ptr[1]=V(PRM)>>16;
	    ptr[2]=V(PRM)>>8;
	    ptr[3]=V(PRM);
	    V(RET)=ptr;
	    V(NXT)=ptr+4;
	}
}

#endif
