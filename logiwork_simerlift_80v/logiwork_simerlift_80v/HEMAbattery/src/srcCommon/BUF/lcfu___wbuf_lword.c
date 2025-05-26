#ifndef LC_PROT_LCFU___WBUF_LWORD__C
#define LC_PROT_LCFU___WBUF_LWORD__C

#include <lcfu___wbuf_lword.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_LWORD(LC_TD_FunctionBlock_WBUF_LWORD* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr;
	if( V(BUF)){
		ptr=V(BUF);
	    ptr[0]=V(PRM)>>56;
	    ptr[1]=V(PRM)>>48;
	    ptr[2]=V(PRM)>>40;
	    ptr[3]=V(PRM)>>32;
		ptr[4]=V(PRM)>>24;
		ptr[5]=V(PRM)>>16;
		ptr[6]=V(PRM)>>8;
		ptr[7]=V(PRM);
	    V(RET)=ptr;
	    V(NXT)=ptr+8;
	}
}

#endif
