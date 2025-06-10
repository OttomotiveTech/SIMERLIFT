#ifndef LC_PROT_LCFU___RBUF_INT__C
#define LC_PROT_LCFU___RBUF_INT__C

#include <lcfu___rbuf_int.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_INT(LC_TD_FunctionBlock_RBUF_INT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr=V(BUF);
	V(VAL)=(((uint16_t)ptr[0] << 8) |
            ((uint16_t)ptr[1])) & 0xFFFF;
	V(RET)=ptr;
	V(NXT)=ptr+2;
}

#endif
