#ifndef LC_PROT_LCFU___WBUF_REAL__C
#define LC_PROT_LCFU___WBUF_REAL__C

#include <lcfu___wbuf_real.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___WBUF_REAL(LC_TD_FunctionBlock_WBUF_REAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	if( V(BUF)){
	    uint8_t *ptr=V(BUF);
	    uint32_t prm32=*((uint32_t *)&V(PRM));
	    ptr[0]=prm32>>24;
	    ptr[1]=prm32>>16;
	    ptr[2]=prm32>>8;
	    ptr[3]=prm32;
	    V(NXT)=ptr+4;
	    V(RET)=ptr;
	}
}

#endif
