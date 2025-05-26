/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function NE for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__NE__H
#define LC_PROT_LCFU_IEC61131__NE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_NE
{
	LC_TD_BOOL LC_VD_ENO;
	LC_TD_BOOL LC_VD_NE;
} LCCG_StructAttrib LC_TD_Function_NE;

/*                            Initialization Macro             */
#define LC_INIT_Function_NE(p) \
{ \
	LC_INIT_BOOL(&((p)->LC_VD_NE)); \
}

/*                            Impl (not inlined)                     */
#define lcfu_iec61131__NE__ANY(LC_this, IN1, IN2, pEPDB) \
	(LC_this)->LC_VD_NE = ((LC_TD_BOOL)((IN1)!=(IN2)))
#define lcfu_iec61131__NE__CHAR(LC_this, IN1, IN2, pEPDB) \
	(LC_this)->LC_VD_NE = ((LC_TD_BOOL)(LC_STRING_NE(IN1,IN2,LC_STR_CMP_MODE_CHAR)))
#define lcfu_iec61131__NE__STRING(LC_this, IN1, IN2, pEPDB) \
	(LC_this)->LC_VD_NE = ((LC_TD_BOOL)(LC_STRING_NE(LC_GET_STRING_PTR(IN1),LC_GET_STRING_PTR(IN2),LC_STR_CMP_MODE_STRING)))

/*                            Impl (inlined)                     */
#define lcfu_iec61131__NE__ANY__INL(IN1, IN2) ((LC_TD_BOOL)((IN1)!=(IN2)))

#endif
