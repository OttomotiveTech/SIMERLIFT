/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block RS for RTS compatible Systems.
*/

#ifndef LC_PROT_IEC61131__RS__H
#define LC_PROT_IEC61131__RS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_RS
{
  LC_TD_BOOL LC_VD_R1;
  LC_TD_BOOL LC_VD_S;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_Q1;
} LCCG_StructAttrib LC_TD_FunctionBlock_RS;

/*                            Initialization Macro (cold start) */
#define LC_INIT_FunctionBlock_RS(p) \
{                                   \
  LC_INIT_BOOL(&((p)->LC_VD_S));    \
  LC_INIT_BOOL(&((p)->LC_VD_R1));   \
  LC_INIT_BOOL(&((p)->LC_VD_Q1));   \
}

/*                            Initialization Macro (warm start) */
#define LC_WINIT_FunctionBlock_RS(p,RF) { if (RF==0) LC_INIT_FunctionBlock_RS(p) }

/*                            Impl (not inlined)               */
#define lcfu_iec61131__RS(LC_this, pEPDB) \
        (LC_this)->LC_VD_Q1 = (!(LC_this)->LC_VD_R1) && ((LC_this)->LC_VD_S || (LC_this)->LC_VD_Q1)

/*                            Nameserver definitions           */
#ifdef LC3_CG_GENERATE_RTS2_NAMESERVER
#define LCNS_EL_INI___RS \
	{\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"S", \
			0, \
			offsetof(LC_TD_FunctionBlock_RS,LC_VD_S), \
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
			"R1", \
			0, \
			offsetof(LC_TD_FunctionBlock_RS,LC_VD_R1), \
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
			offsetof(LC_TD_FunctionBlock_RS,LC_VD_ENO), \
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
			"Q1", \
			0, \
			offsetof(LC_TD_FunctionBlock_RS,LC_VD_Q1), \
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
	}
#define LCNS_EL_CNT___RS 4
#endif /* LC3_CG_GENERATE_RTS2_NAMESERVER */

#endif
