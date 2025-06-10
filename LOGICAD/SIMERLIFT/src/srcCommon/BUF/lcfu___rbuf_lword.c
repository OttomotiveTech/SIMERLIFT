#ifndef LC_PROT_LCFU___RBUF_LWORD__C
#define LC_PROT_LCFU___RBUF_LWORD__C

#include <lcfu___rbuf_lword.h>

#define V(VAR) (LC_this->LC_VD_##VAR)

/*                            FunctionBlocks                   */
void  lcfu___RBUF_LWORD(LC_TD_FunctionBlock_RBUF_LWORD* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
/* Vendor Code */
	uint8_t *ptr=V(BUF);
	V(VAL)=(((uint64_t)ptr[0] << 56) |
            ((uint64_t)ptr[1] << 48) |
            ((uint64_t)ptr[2] << 40) |
            ((uint64_t)ptr[3] << 32) |
            ((uint64_t)ptr[4] << 24) |
            ((uint64_t)ptr[5] << 16) |
            ((uint64_t)ptr[6] << 8) |
            ((uint64_t)ptr[7])) & 0xFFFFFFFFFFFFFFFF;
	V(RET)=ptr;
	V(NXT)=ptr+8;
}

#endif
