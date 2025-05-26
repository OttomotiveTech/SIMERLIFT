/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function SHL for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__SHL__H
#define LC_PROT_LCFU_IEC61131__SHL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_SHL_ANY(type) \
typedef struct _LC_TD_Function_SHL__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_SHL;              \
} LCCG_StructAttrib LC_TD_Function_SHL__##type;

DEF_LC_TD_Function_SHL_ANY(BOOL)
DEF_LC_TD_Function_SHL_ANY(BYTE)
DEF_LC_TD_Function_SHL_ANY(WORD)
DEF_LC_TD_Function_SHL_ANY(DWORD)
DEF_LC_TD_Function_SHL_ANY(LWORD)

DEF_LC_TD_Function_SHL_ANY(SINT)
DEF_LC_TD_Function_SHL_ANY(USINT)
DEF_LC_TD_Function_SHL_ANY(INT)
DEF_LC_TD_Function_SHL_ANY(UINT)
DEF_LC_TD_Function_SHL_ANY(DINT)
DEF_LC_TD_Function_SHL_ANY(UDINT)
DEF_LC_TD_Function_SHL_ANY(LINT)
DEF_LC_TD_Function_SHL_ANY(ULINT)

/*                            Initialization Macro             */
#define LC_INIT_Function_SHL_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_SHL)); \
}

#define LC_INIT_Function_SHL__BOOL(p)   LC_INIT_Function_SHL_ANY(p,BOOL)
#define LC_INIT_Function_SHL__BYTE(p)   LC_INIT_Function_SHL_ANY(p,BYTE)
#define LC_INIT_Function_SHL__WORD(p)   LC_INIT_Function_SHL_ANY(p,WORD)
#define LC_INIT_Function_SHL__DWORD(p)  LC_INIT_Function_SHL_ANY(p,DWORD)
#define LC_INIT_Function_SHL__LWORD(p)  LC_INIT_Function_SHL_ANY(p,LWORD)

#define LC_INIT_Function_SHL__SINT(p)  LC_INIT_Function_SHL_ANY(p,SINT)
#define LC_INIT_Function_SHL__USINT(p) LC_INIT_Function_SHL_ANY(p,USINT)
#define LC_INIT_Function_SHL__INT(p)   LC_INIT_Function_SHL_ANY(p,INT)
#define LC_INIT_Function_SHL__UINT(p)  LC_INIT_Function_SHL_ANY(p,UINT)
#define LC_INIT_Function_SHL__DINT(p)  LC_INIT_Function_SHL_ANY(p,DINT)
#define LC_INIT_Function_SHL__UDINT(p) LC_INIT_Function_SHL_ANY(p,UDINT)
#define LC_INIT_Function_SHL__LINT(p)  LC_INIT_Function_SHL_ANY(p,LINT)
#define LC_INIT_Function_SHL__ULINT(p) LC_INIT_Function_SHL_ANY(p,ULINT)

/*                            Shifting operation               */

#define LC_MF_SHL_BOOL(IN,N)                      ((N) != 0 ? LC_EL_false : (IN))
#define LC_MF_SHL_WITH_RANGE_CHECK(stype,IN,N,op) ((LC_TD_size_t)(N) >= (LC_TD_size_t)(sizeof(stype)*8)) ? 0 : (((stype)(IN)) op (N))
#define LC_MF_SHL_ANY(type,stype,IN,N)            (LC_TD_##type)((N) >= 0 ? LC_MF_SHL_WITH_RANGE_CHECK(stype,IN,(N),<<) : LC_MF_SHL_WITH_RANGE_CHECK(stype,IN,-(N),>>))

/*                            Impl (not inlined)               */
#define  lcfu_iec61131__SHL__BOOL(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_BOOL(IN,N)
#define  lcfu_iec61131__SHL__BYTE(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(BYTE,uint8_t,IN,N)
#define  lcfu_iec61131__SHL__WORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(WORD,uint16_t,IN,N)
#define  lcfu_iec61131__SHL__DWORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(DWORD,uint32_t,IN,N)
#define  lcfu_iec61131__SHL__LWORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(LWORD,uint64_t,IN,N)

#define lcfu_iec61131__SHL__SINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(SINT,uint8_t,IN,N)
#define lcfu_iec61131__SHL__USINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(USINT,uint8_t,IN,N)
#define lcfu_iec61131__SHL__INT(LC_this, IN, N, pEPDB)   (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(INT,uint16_t,IN,N)
#define lcfu_iec61131__SHL__UINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(UINT,uint16_t,IN,N)
#define lcfu_iec61131__SHL__DINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(DINT,uint32_t,IN,N)
#define lcfu_iec61131__SHL__UDINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(UDINT,uint32_t,IN,N)
#define lcfu_iec61131__SHL__LINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(LINT,uint64_t,IN,N)
#define lcfu_iec61131__SHL__ULINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHL = LC_MF_SHL_ANY(ULINT,uint64_t,IN,N)

/*                            Impl (inlined)                   */
#define  lcfu_iec61131__SHL__BOOL__INL(IN, N)  LC_MF_SHL_BOOL(IN,N)
#define  lcfu_iec61131__SHL__BYTE__INL(IN, N)  LC_MF_SHL_ANY(BYTE,uint8_t,IN,N)
#define  lcfu_iec61131__SHL__WORD__INL(IN, N)  LC_MF_SHL_ANY(WORD,uint16_t,IN,N)
#define  lcfu_iec61131__SHL__DWORD__INL(IN, N) LC_MF_SHL_ANY(DWORD,uint32_t,IN,N)
#define  lcfu_iec61131__SHL__LWORD__INL(IN, N) LC_MF_SHL_ANY(LWORD,uint64_t,IN,N)

#endif
