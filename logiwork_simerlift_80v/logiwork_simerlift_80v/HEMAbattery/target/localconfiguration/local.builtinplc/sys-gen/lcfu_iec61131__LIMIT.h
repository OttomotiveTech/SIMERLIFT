/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function LIMIT for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__LIMIT__H
#define LC_PROT_LCFU_IEC61131__LIMIT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_LIMIT(type) \
typedef struct _LC_TD_Function_LIMIT__##type \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	LC_TD_##type LC_VD_LIMIT; \
} LCCG_StructAttrib LC_TD_Function_LIMIT__##type;

DEF_LC_TD_Function_LIMIT(BOOL)
DEF_LC_TD_Function_LIMIT(SINT)
DEF_LC_TD_Function_LIMIT(INT)
DEF_LC_TD_Function_LIMIT(DINT)
DEF_LC_TD_Function_LIMIT(LINT)
DEF_LC_TD_Function_LIMIT(USINT)
DEF_LC_TD_Function_LIMIT(UINT)
DEF_LC_TD_Function_LIMIT(UDINT)
DEF_LC_TD_Function_LIMIT(ULINT)
DEF_LC_TD_Function_LIMIT(BYTE)
DEF_LC_TD_Function_LIMIT(WORD)
DEF_LC_TD_Function_LIMIT(DWORD)
DEF_LC_TD_Function_LIMIT(LWORD)
DEF_LC_TD_Function_LIMIT(REAL)
DEF_LC_TD_Function_LIMIT(LREAL)
DEF_LC_TD_Function_LIMIT(TIME)
DEF_LC_TD_Function_LIMIT(DATE)
DEF_LC_TD_Function_LIMIT(TOD)
DEF_LC_TD_Function_LIMIT(DT)

/*                            Initialization Macro             */
#define LC_INIT_Function_LIMIT(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_LIMIT)); \
}

#define LC_INIT_Function_LIMIT__BOOL(p)  LC_INIT_Function_LIMIT(p,BOOL)
#define LC_INIT_Function_LIMIT__SINT(p)  LC_INIT_Function_LIMIT(p,SINT)
#define LC_INIT_Function_LIMIT__INT(p)   LC_INIT_Function_LIMIT(p,INT)
#define LC_INIT_Function_LIMIT__DINT(p)  LC_INIT_Function_LIMIT(p,DINT)
#define LC_INIT_Function_LIMIT__LINT(p)  LC_INIT_Function_LIMIT(p,LINT)
#define LC_INIT_Function_LIMIT__USINT(p) LC_INIT_Function_LIMIT(p,USINT)
#define LC_INIT_Function_LIMIT__UINT(p)  LC_INIT_Function_LIMIT(p,UINT)
#define LC_INIT_Function_LIMIT__UDINT(p) LC_INIT_Function_LIMIT(p,UDINT)
#define LC_INIT_Function_LIMIT__ULINT(p) LC_INIT_Function_LIMIT(p,ULINT)
#define LC_INIT_Function_LIMIT__BYTE(p)  LC_INIT_Function_LIMIT(p,BYTE)
#define LC_INIT_Function_LIMIT__WORD(p)  LC_INIT_Function_LIMIT(p,WORD)
#define LC_INIT_Function_LIMIT__DWORD(p) LC_INIT_Function_LIMIT(p,DWORD)
#define LC_INIT_Function_LIMIT__LWORD(p) LC_INIT_Function_LIMIT(p,LWORD)
#define LC_INIT_Function_LIMIT__REAL(p)  LC_INIT_Function_LIMIT(p,REAL)
#define LC_INIT_Function_LIMIT__LREAL(p) LC_INIT_Function_LIMIT(p,LREAL)
#define LC_INIT_Function_LIMIT__TIME(p)  LC_INIT_Function_LIMIT(p,TIME)
#define LC_INIT_Function_LIMIT__DATE(p)  LC_INIT_Function_LIMIT(p,DATE)
#define LC_INIT_Function_LIMIT__TOD(p)   LC_INIT_Function_LIMIT(p,TOD)
#define LC_INIT_Function_LIMIT__DT(p)    LC_INIT_Function_LIMIT(p,DT)

/*                            Impl (not inlined)               */
#define  lcfu_iec61131__LIMIT__ANY(LC_this, MN, IN, MX, pEPDB) \
 (LC_this)->LC_VD_LIMIT = (MX)<=(MN)?(MX):(IN)>(MN)?((IN)<(MX)?(IN):(MX)):(MN)

#endif
