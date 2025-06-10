#ifndef LC_PROT_LCFU___RBUF_REAL__C
#define LC_PROT_LCFU___RBUF_REAL__C

#include <lcfu___rbuf_real.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_REAL(LC_TD_FunctionBlock_RBUF_REAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint32_t prm32;
	uint8_t *ptr=V(BUF);
    prm32= (((uint32_t)ptr[0] << 24) |
            ((uint32_t)ptr[1] << 16) |
            ((uint32_t)ptr[2] << 8) |
            ((uint32_t)ptr[3])) & 0xFFFFFFFF;
    V(VAL)=*((float *)&prm32);
	V(RET)=ptr;
	V(NXT)=ptr+4;
}

#endif
