/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: non-inlined C implementation of function DIV_TIME for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__DIV_TIME__H
#define LC_PROT_LCFU_IEC61131__DIV_TIME__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_DIV_TIME
{
	LC_TD_BOOL LC_VD_ENO;
	LC_TD_TIME LC_VD_DIV_TIME;
} LCCG_StructAttrib LC_TD_Function_DIV_TIME;

/*                            Initialization Macro             */
#define LC_INIT_Function_DIV_TIME(p) \
{ \
	LC_INIT_TIME(&((p)->LC_VD_DIV_TIME)); \
}

/*  Impl Helper */
#define LC_MF_DIV_TIME_FIX(IN1,IN2,eno)   ((LC_TD_TIME)((IN2)==0?eno=LC_EL_false,LC_MCI_DEF_TIME:(((IN1)) / (IN2))))
#define LC_MF_DIV_TIME_FLT(IN1,IN2,eno)   ((LC_TD_TIME)((IN2)==0.0?eno=LC_EL_false,LC_MCI_DEF_TIME:(((IN1)) / (double)(IN2))))
/* special handling because LL / ULL cannot be calculated; but we can cast to LL because if IN2>maxLL then T is always 0 */
/* a problem occurs when a negative Time Value is divided by "large" unsigned values (e.g. ULL(-1)" - in this case the time is casted to a ull*/
#define LC_MF_DIV_TIME_ULINT_IN2_LESS_LINTMAX(IN1,IN2,eno) ((LC_TD_TIME)((IN2)==0?eno=LC_EL_false,LC_MCI_DEF_TIME:(((IN1)) / (LC_TD_LINT)(IN2))))
#define LC_MF_DIV_TIME_ULINT_IS_LARGER_LINTMAX(IN)   (((LC_TD_LINT)(IN))<0)
#define LC_MF_DIV_TIME_ULINT(IN1,IN2,eno) ((LC_TD_TIME)(LC_MF_DIV_TIME_ULINT_IS_LARGER_LINTMAX(IN2)?0:LC_MF_DIV_TIME_ULINT_IN2_LESS_LINTMAX(IN1,IN2,eno)))

/*  Prototype */
#define lcfu_iec61131__DIV_TIME__SINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__INT(LC_this, IN1, IN2, pEPDB)   (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__DINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__LINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)

#define lcfu_iec61131__DIV_TIME__USINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__UINT(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__UDINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FIX(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__ULINT(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_ULINT(IN1,IN2,(LC_this)->LC_VD_ENO)

#define lcfu_iec61131__DIV_TIME__REAL(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FLT(IN1,IN2,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__DIV_TIME__LREAL(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_DIV_TIME = LC_MF_DIV_TIME_FLT(IN1,IN2,(LC_this)->LC_VD_ENO)

#endif
