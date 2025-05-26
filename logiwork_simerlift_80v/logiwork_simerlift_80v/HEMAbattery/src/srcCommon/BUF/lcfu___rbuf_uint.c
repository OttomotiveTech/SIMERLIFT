#ifndef LC_PROT_LCFU___RBUF_UINT__C
#define LC_PROT_LCFU___RBUF_UINT__C

#include <lcfu___rbuf_uint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_UINT(LC_TD_FunctionBlock_RBUF_UINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr=V(BUF);
	V(VAL)=(((uint16_t)ptr[0] << 8) |
            ((uint16_t)ptr[1])) & 0xFFFF;
	V(RET)=ptr;
	V(NXT)=ptr+2;
}

#endif
