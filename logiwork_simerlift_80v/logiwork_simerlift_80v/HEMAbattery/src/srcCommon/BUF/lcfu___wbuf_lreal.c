#ifndef LC_PROT_LCFU___WBUF_LREAL__C
#define LC_PROT_LCFU___WBUF_LREAL__C

#include <lcfu___wbuf_lreal.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_LREAL(LC_TD_FunctionBlock_WBUF_LREAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	if( V(BUF)){
	    uint8_t *ptr=V(BUF);
	    uint64_t prm64=*((uint64_t *)&V(PRM));
	    ptr[0]=prm64>>56;
	    ptr[1]=prm64>>48;
	    ptr[2]=prm64>>40;
	    ptr[3]=prm64>>32;
	    ptr[4]=prm64>>24;
	    ptr[5]=prm64>>16;
	    ptr[6]=prm64>>8;
	    ptr[7]=prm64;
	    V(NXT)=ptr+8;
	    V(RET)=ptr;
	}
}

#endif
