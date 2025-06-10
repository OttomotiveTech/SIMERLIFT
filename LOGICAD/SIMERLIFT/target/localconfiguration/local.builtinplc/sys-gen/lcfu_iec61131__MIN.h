/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function MIN for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__MIN__H
#define LC_PROT_LCFU_IEC61131__MIN__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_MIN_ANY(type) \
typedef struct _LC_TD_Function_MIN__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_MIN;              \
} LCCG_StructAttrib LC_TD_Function_MIN__##type;

DEF_LC_TD_Function_MIN_ANY(BOOL)
DEF_LC_TD_Function_MIN_ANY(BYTE)
DEF_LC_TD_Function_MIN_ANY(WORD)
DEF_LC_TD_Function_MIN_ANY(DWORD)
DEF_LC_TD_Function_MIN_ANY(LWORD)
DEF_LC_TD_Function_MIN_ANY(SINT)
DEF_LC_TD_Function_MIN_ANY(INT)
DEF_LC_TD_Function_MIN_ANY(DINT)
DEF_LC_TD_Function_MIN_ANY(LINT)
DEF_LC_TD_Function_MIN_ANY(USINT)
DEF_LC_TD_Function_MIN_ANY(UINT)
DEF_LC_TD_Function_MIN_ANY(UDINT)
DEF_LC_TD_Function_MIN_ANY(ULINT)
DEF_LC_TD_Function_MIN_ANY(REAL)
DEF_LC_TD_Function_MIN_ANY(LREAL)
DEF_LC_TD_Function_MIN_ANY(TIME)
DEF_LC_TD_Function_MIN_ANY(DATE)
DEF_LC_TD_Function_MIN_ANY(TOD)
DEF_LC_TD_Function_MIN_ANY(DT)


/*                            Initialization Macro             */
#define LC_INIT_Function_MIN_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_MIN)); \
}

#define LC_INIT_Function_MIN__BOOL(p)   LC_INIT_Function_MIN_ANY(p,BOOL)
#define LC_INIT_Function_MIN__SINT(p)   LC_INIT_Function_MIN_ANY(p,SINT)
#define LC_INIT_Function_MIN__INT(p)    LC_INIT_Function_MIN_ANY(p,INT)
#define LC_INIT_Function_MIN__DINT(p)   LC_INIT_Function_MIN_ANY(p,DINT)
#define LC_INIT_Function_MIN__LINT(p)   LC_INIT_Function_MIN_ANY(p,LINT)
#define LC_INIT_Function_MIN__USINT(p)  LC_INIT_Function_MIN_ANY(p,USINT)
#define LC_INIT_Function_MIN__UINT(p)   LC_INIT_Function_MIN_ANY(p,UINT)
#define LC_INIT_Function_MIN__UDINT(p)  LC_INIT_Function_MIN_ANY(p,UDINT)
#define LC_INIT_Function_MIN__ULINT(p)  LC_INIT_Function_MIN_ANY(p,ULINT)
#define LC_INIT_Function_MIN__BYTE(p)   LC_INIT_Function_MIN_ANY(p,BYTE)
#define LC_INIT_Function_MIN__WORD(p)   LC_INIT_Function_MIN_ANY(p,WORD)
#define LC_INIT_Function_MIN__DWORD(p)  LC_INIT_Function_MIN_ANY(p,DWORD)
#define LC_INIT_Function_MIN__LWORD(p)  LC_INIT_Function_MIN_ANY(p,LWORD)
#define LC_INIT_Function_MIN__REAL(p)   LC_INIT_Function_MIN_ANY(p,REAL)
#define LC_INIT_Function_MIN__LREAL(p)  LC_INIT_Function_MIN_ANY(p,LREAL)
#define LC_INIT_Function_MIN__TIME(p)   LC_INIT_Function_MIN_ANY(p,TIME)
#define LC_INIT_Function_MIN__DATE(p)   LC_INIT_Function_MIN_ANY(p,DATE)
#define LC_INIT_Function_MIN__TOD(p)    LC_INIT_Function_MIN_ANY(p,TOD)
#define LC_INIT_Function_MIN__DT(p)     LC_INIT_Function_MIN_ANY(p,DT)

/*                            Implementation                         */
#define lcfu_iec61131__MIN__ANY__2(LC_this,IN1,IN2,pEPDB) \
   (LC_this)->LC_VD_MIN = (IN1); \
   if ((IN2) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN2)

#define lcfu_iec61131__MIN__ANY__3(LC_this,IN1,IN2,IN3,pEPDB) \
   lcfu_iec61131__MIN__ANY__2(LC_this,IN1,IN2, pEPDB); \
   if ((IN3) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN3)

#define lcfu_iec61131__MIN__ANY__4(LC_this,IN1,IN2,IN3,IN4,pEPDB) \
   lcfu_iec61131__MIN__ANY__3(LC_this,IN1,IN2,IN3,pEPDB); \
   if ((IN4) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN4)

#define lcfu_iec61131__MIN__ANY__5(LC_this,IN1,IN2,IN3,IN4,IN5,pEPDB) \
   lcfu_iec61131__MIN__ANY__4(LC_this,IN1,IN2,IN3,IN4,pEPDB); \
   if ((IN5) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN5)

#define lcfu_iec61131__MIN__ANY__6(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,pEPDB) \
   lcfu_iec61131__MIN__ANY__5(LC_this,IN1,IN2,IN3,IN4,IN5,pEPDB); \
   if ((IN6) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN6)

#define lcfu_iec61131__MIN__ANY__7(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,pEPDB) \
   lcfu_iec61131__MIN__ANY__6(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,pEPDB); \
   if ((IN7) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN7)

#define lcfu_iec61131__MIN__ANY__8(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,pEPDB) \
   lcfu_iec61131__MIN__ANY__7(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,pEPDB); \
   if ((IN8) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN8)

#define lcfu_iec61131__MIN__ANY__9(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB) \
   lcfu_iec61131__MIN__ANY__8(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,pEPDB); \
   if ((IN9) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN9)

#define lcfu_iec61131__MIN__ANY__10(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB) \
   lcfu_iec61131__MIN__ANY__9(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB); \
   if ((IN10) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN10)

#define lcfu_iec61131__MIN__ANY__11(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB) \
   lcfu_iec61131__MIN__ANY__10(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB); \
   if ((IN11) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN11)

#define lcfu_iec61131__MIN__ANY__12(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB) \
   lcfu_iec61131__MIN__ANY__11(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB); \
   if ((IN12) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN12)

#define lcfu_iec61131__MIN__ANY__13(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB) \
   lcfu_iec61131__MIN__ANY__12(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB); \
   if ((IN13) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN13)

#define lcfu_iec61131__MIN__ANY__14(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB) \
   lcfu_iec61131__MIN__ANY__13(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB); \
   if ((IN14) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN14)

#define lcfu_iec61131__MIN__ANY__15(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB) \
   lcfu_iec61131__MIN__ANY__14(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB); \
   if ((IN15) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN15)

#define lcfu_iec61131__MIN__ANY__16(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16,pEPDB) \
   lcfu_iec61131__MIN__ANY__15(LC_this,IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB); \
   if ((IN16) < (LC_this)->LC_VD_MIN) (LC_this)->LC_VD_MIN = (IN16)

#endif
