/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block CTU for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__CTU__H
#define LC_PROT_LCFU_IEC61131__CTU__H

#include <LC3CGBase.h>
#include <LC3CGCounterImpl.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CTU
{
  _typedef_FunctionBlock_CTU_ANY(INT)
} LCCG_StructAttrib LC_TD_FunctionBlock_CTU;

/*                            Initialization Macro (cold start) */
#define LC_INIT_FunctionBlock_CTU(p) _INIT_FunctionBlock_CTU_ANY(INT,p)

/*                            Initialization Macro (warm start) */
#define LC_WINIT_FunctionBlock_CTU(p,RF) { if (RF==0) LC_INIT_FunctionBlock_CTU(p) }

/*                            Nameserver definition            */
#ifdef LC3_CG_GENERATE_RTS2_NAMESERVER
#define LCNS_EL_INI___CTU _EL_INI___CTU(INT)
#define LCNS_EL_CNT___CTU 7
#endif /* LC3_CG_GENERATE_RTS2_NAMESERVER */

/*                            Prototype                        */
void  lcfu_iec61131__CTU(LC_TD_FunctionBlock_CTU* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
