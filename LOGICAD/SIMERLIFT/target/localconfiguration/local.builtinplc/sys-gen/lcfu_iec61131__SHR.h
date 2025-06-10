/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function SHR for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__SHR__H
#define LC_PROT_LCFU_IEC61131__SHR__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_SHR_ANY(type) \
typedef struct _LC_TD_Function_SHR__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_SHR;              \
} LCCG_StructAttrib LC_TD_Function_SHR__##type;

DEF_LC_TD_Function_SHR_ANY(BOOL)
DEF_LC_TD_Function_SHR_ANY(BYTE)
DEF_LC_TD_Function_SHR_ANY(WORD)
DEF_LC_TD_Function_SHR_ANY(DWORD)
DEF_LC_TD_Function_SHR_ANY(LWORD)

DEF_LC_TD_Function_SHR_ANY(SINT)
DEF_LC_TD_Function_SHR_ANY(USINT)
DEF_LC_TD_Function_SHR_ANY(INT)
DEF_LC_TD_Function_SHR_ANY(UINT)
DEF_LC_TD_Function_SHR_ANY(DINT)
DEF_LC_TD_Function_SHR_ANY(UDINT)
DEF_LC_TD_Function_SHR_ANY(LINT)
DEF_LC_TD_Function_SHR_ANY(ULINT)

/*                            Initialization Macro             */
#define LC_INIT_Function_SHR_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_SHR)); \
}

#define LC_INIT_Function_SHR__BOOL(p)   LC_INIT_Function_SHR_ANY(p,BOOL)
#define LC_INIT_Function_SHR__BYTE(p)   LC_INIT_Function_SHR_ANY(p,BYTE)
#define LC_INIT_Function_SHR__WORD(p)   LC_INIT_Function_SHR_ANY(p,WORD)
#define LC_INIT_Function_SHR__DWORD(p)  LC_INIT_Function_SHR_ANY(p,DWORD)
#define LC_INIT_Function_SHR__LWORD(p)  LC_INIT_Function_SHR_ANY(p,LWORD)

#define LC_INIT_Function_SHR__SINT(p)  LC_INIT_Function_SHR_ANY(p,SINT)
#define LC_INIT_Function_SHR__USINT(p) LC_INIT_Function_SHR_ANY(p,USINT)
#define LC_INIT_Function_SHR__INT(p)   LC_INIT_Function_SHR_ANY(p,INT)
#define LC_INIT_Function_SHR__UINT(p)  LC_INIT_Function_SHR_ANY(p,UINT)
#define LC_INIT_Function_SHR__DINT(p)  LC_INIT_Function_SHR_ANY(p,DINT)
#define LC_INIT_Function_SHR__UDINT(p) LC_INIT_Function_SHR_ANY(p,UDINT)
#define LC_INIT_Function_SHR__LINT(p)  LC_INIT_Function_SHR_ANY(p,LINT)
#define LC_INIT_Function_SHR__ULINT(p) LC_INIT_Function_SHR_ANY(p,ULINT)

/*                            Shifting operation               */
#define LC_MF_SHR_BOOL(IN,N)                      ((N) != 0 ? LC_EL_false : (IN))
#define LC_MF_SHR_WITH_RANGE_CHECK(stype,IN,N,op) ((LC_TD_size_t)(N) >= (LC_TD_size_t)(sizeof(stype)*8)) ? 0 : (((stype)(IN)) op (N))
#define LC_MF_SHR_ANY(type,stype,IN,N)            (LC_TD_##type)((N) >= 0 ? LC_MF_SHR_WITH_RANGE_CHECK(stype,IN,(N),>>) : LC_MF_SHR_WITH_RANGE_CHECK(stype,IN,-(N),<<))

/*                            Impl (not inlined)               */
#define  lcfu_iec61131__SHR__BOOL(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_BOOL(IN,N)
#define  lcfu_iec61131__SHR__BYTE(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(BYTE,uint8_t,IN,N)
#define  lcfu_iec61131__SHR__WORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(WORD,uint16_t,IN,N)
#define  lcfu_iec61131__SHR__DWORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(DWORD,uint32_t,IN,N)
#define  lcfu_iec61131__SHR__LWORD(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(LWORD,uint64_t,IN,N)

#define lcfu_iec61131__SHR__SINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(SINT,uint8_t,IN,N)
#define lcfu_iec61131__SHR__USINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(USINT,uint8_t,IN,N)
#define lcfu_iec61131__SHR__INT(LC_this, IN, N, pEPDB)   (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(INT,uint16_t,IN,N)
#define lcfu_iec61131__SHR__UINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(UINT,uint16_t,IN,N)
#define lcfu_iec61131__SHR__DINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(DINT,uint32_t,IN,N)
#define lcfu_iec61131__SHR__UDINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(UDINT,uint32_t,IN,N)
#define lcfu_iec61131__SHR__LINT(LC_this, IN, N, pEPDB)  (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(LINT,uint64_t,IN,N)
#define lcfu_iec61131__SHR__ULINT(LC_this, IN, N, pEPDB) (LC_this)->LC_VD_SHR = LC_MF_SHR_ANY(ULINT,uint64_t,IN,N)

/*                            Impl (inlined)                   */
#define  lcfu_iec61131__SHR__BOOL__INL(IN, N)  LC_MF_SHR_BOOL(IN,N)
#define  lcfu_iec61131__SHR__BYTE__INL(IN, N)  LC_MF_SHR_ANY(BYTE,uint8_t,IN,N)
#define  lcfu_iec61131__SHR__WORD__INL(IN, N)  LC_MF_SHR_ANY(WORD,uint16_t,IN,N)
#define  lcfu_iec61131__SHR__DWORD__INL(IN, N) LC_MF_SHR_ANY(DWORD,uint32_t,IN,N)
#define  lcfu_iec61131__SHR__LWORD__INL(IN, N) LC_MF_SHR_ANY(LWORD,uint64_t,IN,N)

#endif
