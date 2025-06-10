/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: non-inlined C implementation of function MUL_TIME for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__MUL_TIME__H
#define LC_PROT_LCFU_IEC61131__MUL_TIME__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_MUL_TIME
{
	LC_TD_BOOL LC_VD_ENO;
	LC_TD_TIME LC_VD_MUL_TIME;
} LCCG_StructAttrib LC_TD_Function_MUL_TIME;

/*                            Initialization Macro             */
#define LC_INIT_Function_MUL_TIME(p) \
{ \
	LC_INIT_TIME(&((p)->LC_VD_MUL_TIME)); \
}

/*  Impl Helper */
#define LC_MF_MUL_TIME_FIX(IN1,IN2) ((LC_TD_TIME)(((IN1)) * (IN2)))
#define LC_MF_MUL_TIME_FLT(IN1,IN2) ((LC_TD_TIME)(((IN1)) * ((double)(IN2))))

/*  Prototype */
#define lcfu_iec61131__MUL_TIME__SINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__INT(LC_this, IN1, IN2, pEPDB)   (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__DINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__LINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)

#define lcfu_iec61131__MUL_TIME__USINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__UINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__UDINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__ULINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FIX(IN1,IN2)

#define lcfu_iec61131__MUL_TIME__REAL(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FLT(IN1,IN2)
#define lcfu_iec61131__MUL_TIME__LREAL(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_MUL_TIME = LC_MF_MUL_TIME_FLT(IN1,IN2)

#endif
