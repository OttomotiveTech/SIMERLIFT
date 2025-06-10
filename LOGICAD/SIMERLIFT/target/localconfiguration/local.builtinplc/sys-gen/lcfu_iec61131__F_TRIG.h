/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block F_TRIG for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__F_TRIG__H
#define LC_PROT_LCFU_IEC61131__F_TRIG__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_F_TRIG
{
	LC_TD_BOOL LC_VD_CLK;
	LC_TD_BOOL LC_VD_ENO;
	LC_TD_BOOL LC_VD_Q;
	LC_TD_BOOL LC_VD_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_F_TRIG;

/*                            Initialization Macro (cold start) */

/* According to IEC61131-3 1st revision and to Techical Report 2: M:=TRUE; - this is NOT what the 2nd and 3rd Rev says */
#define LC_INIT_FunctionBlock_F_TRIG(p) \
{ \
	LC_INIT_BOOL(&((p)->LC_VD_CLK)); \
	LC_INIT_BOOL(&((p)->LC_VD_Q)); \
        (p)->LC_VD_M=LC_EL_true; \
}

/*                            Initialization Macro (warm start) */
#define LC_WINIT_FunctionBlock_F_TRIG(p,RF) { if (RF==0) LC_INIT_FunctionBlock_F_TRIG(p) }

/*                            Impl (not inlined)               */
#define lcfu_iec61131__F_TRIG(LC_this, pEPDB) \
        (LC_this)->LC_VD_Q = (!((LC_this)->LC_VD_CLK)) && !((LC_this)->LC_VD_M); \
        (LC_this)->LC_VD_M = !((LC_this)->LC_VD_CLK)

/*                            Nameserver definitions           */
#ifdef LC3_CG_GENERATE_RTS2_NAMESERVER
#define LCNS_EL_INI___F_TRIG \
	{\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"CLK", \
			0, \
			offsetof(LC_TD_FunctionBlock_F_TRIG,LC_VD_CLK), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_INPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"ENO", \
			0, \
			offsetof(LC_TD_FunctionBlock_F_TRIG,LC_VD_ENO), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_OUTPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"Q", \
			0, \
			offsetof(LC_TD_FunctionBlock_F_TRIG,LC_VD_Q), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_OUTPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"M", \
			0, \
			offsetof(LC_TD_FunctionBlock_F_TRIG,LC_VD_M), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
	}
#define LCNS_EL_CNT___F_TRIG 4
#endif /* LC3_CG_GENERATE_RTS2_NAMESERVER */

#endif
