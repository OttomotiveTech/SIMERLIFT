#ifndef LC_PROT_LCFU___RBUF_UDINT__C
#define LC_PROT_LCFU___RBUF_UDINT__C

#include <lcfu___rbuf_udint.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_UDINT(LC_TD_FunctionBlock_RBUF_UDINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr=V(BUF);
	V(VAL)=(((uint32_t)ptr[0] << 24) |
            ((uint32_t)ptr[1] << 16) |
            ((uint32_t)ptr[2] << 8) |
            ((uint32_t)ptr[3])) & 0xFFFFFFFF;
	V(RET)=ptr;
	V(NXT)=ptr+4;
}

#endif
