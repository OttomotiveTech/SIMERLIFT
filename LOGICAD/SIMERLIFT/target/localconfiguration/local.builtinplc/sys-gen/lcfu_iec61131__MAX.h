/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function MAX for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__MAX__H
#define LC_PROT_LCFU_IEC61131__MAX__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_MAX_ANY(type) \
typedef struct _LC_TD_Function_MAX__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_MAX;              \
} LCCG_StructAttrib LC_TD_Function_MAX__##type;

DEF_LC_TD_Function_MAX_ANY(BOOL)
DEF_LC_TD_Function_MAX_ANY(BYTE)
DEF_LC_TD_Function_MAX_ANY(WORD)
DEF_LC_TD_Function_MAX_ANY(DWORD)
DEF_LC_TD_Function_MAX_ANY(LWORD)
DEF_LC_TD_Function_MAX_ANY(SINT)
DEF_LC_TD_Function_MAX_ANY(INT)
DEF_LC_TD_Function_MAX_ANY(DINT)
DEF_LC_TD_Function_MAX_ANY(LINT)
DEF_LC_TD_Function_MAX_ANY(USINT)
DEF_LC_TD_Function_MAX_ANY(UINT)
DEF_LC_TD_Function_MAX_ANY(UDINT)
DEF_LC_TD_Function_MAX_ANY(ULINT)
DEF_LC_TD_Function_MAX_ANY(REAL)
DEF_LC_TD_Function_MAX_ANY(LREAL)
DEF_LC_TD_Function_MAX_ANY(TIME)
DEF_LC_TD_Function_MAX_ANY(DATE)
DEF_LC_TD_Function_MAX_ANY(TOD)
DEF_LC_TD_Function_MAX_ANY(DT)


/*                            Initialization Macro             */
#define LC_INIT_Function_MAX_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_MAX)); \
}

#define LC_INIT_Function_MAX__BOOL(p)   LC_INIT_Function_MAX_ANY(p,BOOL)
#define LC_INIT_Function_MAX__SINT(p)   LC_INIT_Function_MAX_ANY(p,SINT)
#define LC_INIT_Function_MAX__INT(p)    LC_INIT_Function_MAX_ANY(p,INT)
#define LC_INIT_Function_MAX__DINT(p)   LC_INIT_Function_MAX_ANY(p,DINT)
#define LC_INIT_Function_MAX__LINT(p)   LC_INIT_Function_MAX_ANY(p,LINT)
#define LC_INIT_Function_MAX__USINT(p)  LC_INIT_Function_MAX_ANY(p,USINT)
#define LC_INIT_Function_MAX__UINT(p)   LC_INIT_Function_MAX_ANY(p,UINT)
#define LC_INIT_Function_MAX__UDINT(p)  LC_INIT_Function_MAX_ANY(p,UDINT)
#define LC_INIT_Function_MAX__ULINT(p)  LC_INIT_Function_MAX_ANY(p,ULINT)
#define LC_INIT_Function_MAX__BYTE(p)   LC_INIT_Function_MAX_ANY(p,BYTE)
#define LC_INIT_Function_MAX__WORD(p)   LC_INIT_Function_MAX_ANY(p,WORD)
#define LC_INIT_Function_MAX__DWORD(p)  LC_INIT_Function_MAX_ANY(p,DWORD)
#define LC_INIT_Function_MAX__LWORD(p)  LC_INIT_Function_MAX_ANY(p,LWORD)
#define LC_INIT_Function_MAX__REAL(p)   LC_INIT_Function_MAX_ANY(p,REAL)
#define LC_INIT_Function_MAX__LREAL(p)  LC_INIT_Function_MAX_ANY(p,LREAL)
#define LC_INIT_Function_MAX__TIME(p)   LC_INIT_Function_MAX_ANY(p,TIME)
#define LC_INIT_Function_MAX__DATE(p)   LC_INIT_Function_MAX_ANY(p,DATE)
#define LC_INIT_Function_MAX__TOD(p)    LC_INIT_Function_MAX_ANY(p,TOD)
#define LC_INIT_Function_MAX__DT(p)     LC_INIT_Function_MAX_ANY(p,DT)

/*                            Implementation                         */
#define lcfu_iec61131__MAX__ANY__2(LC_this,IN1,IN2,pEPDB) \
   (LC_this)->LC_VD_MAX = (IN1); \
   if ((IN2) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN2)

#define lcfu_iec61131__MAX__ANY__3(LC_this,IN1,IN2,IN3,pEPDB) \
   lcfu_iec61131__MAX__ANY__2(LC_this,IN1,IN2, pEPDB); \
   if ((IN3) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN3)

#define lcfu_iec61131__MAX__ANY__4(LC_this,IN1,IN2,IN3,IN4,pEPDB) \
   lcfu_iec61131__MAX__ANY__3(LC_this,IN1,IN2,IN3,pEPDB); \
   if ((IN4) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN4)

#define lcfu_iec61131__MAX__ANY__5(LC_this,IN1,IN2,IN3,IN4,IN5,pEPDB) \
   lcfu_iec61131__MAX__ANY__4(LC_this,IN1,IN2,IN3,IN4,pEPDB); \
   if ((IN5) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN5)

#define lcfu_iec61131__MAX__ANY__6(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,pEPDB) \
   lcfu_iec61131__MAX__ANY__5(LC_this,IN1,IN2,IN3,IN4,IN5,pEPDB); \
   if ((IN6) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN6)

#define lcfu_iec61131__MAX__ANY__7(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,pEPDB) \
   lcfu_iec61131__MAX__ANY__6(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,pEPDB); \
   if ((IN7) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN7)

#define lcfu_iec61131__MAX__ANY__8(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,pEPDB) \
   lcfu_iec61131__MAX__ANY__7(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,pEPDB); \
   if ((IN8) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN8)

#define lcfu_iec61131__MAX__ANY__9(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB) \
   lcfu_iec61131__MAX__ANY__8(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,pEPDB); \
   if ((IN9) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN9)

#define lcfu_iec61131__MAX__ANY__10(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB) \
   lcfu_iec61131__MAX__ANY__9(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB); \
   if ((IN10) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN10)

#define lcfu_iec61131__MAX__ANY__11(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB) \
   lcfu_iec61131__MAX__ANY__10(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB); \
   if ((IN11) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN11)

#define lcfu_iec61131__MAX__ANY__12(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB) \
   lcfu_iec61131__MAX__ANY__11(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB); \
   if ((IN12) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN12)

#define lcfu_iec61131__MAX__ANY__13(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB) \
   lcfu_iec61131__MAX__ANY__12(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB); \
   if ((IN13) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN13)

#define lcfu_iec61131__MAX__ANY__14(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB) \
   lcfu_iec61131__MAX__ANY__13(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB); \
   if ((IN14) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN14)

#define lcfu_iec61131__MAX__ANY__15(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB) \
   lcfu_iec61131__MAX__ANY__14(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB); \
   if ((IN15) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN15)

#define lcfu_iec61131__MAX__ANY__16(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16,pEPDB) \
   lcfu_iec61131__MAX__ANY__15(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB); \
   if ((IN16) > (LC_this)->LC_VD_MAX) (LC_this)->LC_VD_MAX = (IN16)

#endif
