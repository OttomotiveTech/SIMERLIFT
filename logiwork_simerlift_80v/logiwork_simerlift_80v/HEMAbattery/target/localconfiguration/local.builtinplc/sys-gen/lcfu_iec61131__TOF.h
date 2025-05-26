/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block TOF for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__TOF__H
#define LC_PROT_LCFU_IEC61131__TOF__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_TOF
{
  LC_TD_BOOL LC_VD_IN;
  LC_TD_TIME LC_VD_PT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_Q;
  LC_TD_TIME LC_VD_ET;
  LC_TD_BOOL LC_VD_M;
  LC_TD_TIME LC_VD_STARTT;
} LCCG_StructAttrib LC_TD_FunctionBlock_TOF;

/*                            Initialization Macro (cold start) */
#define LC_INIT_FunctionBlock_TOF(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_IN)); \
  LC_INIT_TIME(&((p)->LC_VD_PT)); \
  LC_INIT_BOOL(&((p)->LC_VD_Q)); \
  LC_INIT_TIME(&((p)->LC_VD_ET)); \
  LC_INIT_TIME(&((p)->LC_VD_STARTT)); \
  LC_INIT_BOOL(&((p)->LC_VD_M)); \
}

/*                            Initialization Macro (warm start) */
#define LC_WINIT_FunctionBlock_TOF(p,RF) { if (RF==0) LC_INIT_FunctionBlock_TOF(p) }

#ifdef LC3_CG_GENERATE_RTS2_NAMESERVER
#define LCNS_EL_INI___TOF \
	{ \
		{\
			sizeof(RTTypeNS_ElementNode), \
			"IN", \
			0, \
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_IN), \
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
			"PT", \
			0, \
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_PT), \
			sizeof(LC_TD_TIME), \
			LCOOS_VAREXP_VAR_INPUT, \
			NULL, \
			LCOOS_VAREXP_TIME, \
			"TIME", \
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
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_ENO), \
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
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_Q), \
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
			"ET", \
			0, \
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_ET), \
			sizeof(LC_TD_TIME), \
			LCOOS_VAREXP_VAR_OUTPUT, \
			NULL, \
			LCOOS_VAREXP_TIME, \
			"TIME", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"STARTT", \
			0, \
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_STARTT), \
			sizeof(LC_TD_TIME), \
			LCOOS_VAREXP_VAR, \
			NULL, \
			LCOOS_VAREXP_TIME, \
			"TIME", \
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
			offsetof(LC_TD_FunctionBlock_TOF,LC_VD_M), \
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
#define LCNS_EL_CNT___TOF 7
#endif /* LC3_CG_GENERATE_RTS2_NAMESERVER */

/*                            Prototype                        */
void  lcfu_iec61131__TOF(LC_TD_FunctionBlock_TOF* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
