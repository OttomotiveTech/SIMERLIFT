/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block CTU for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__CTU__C
#define LC_PROT_LCFU_IEC61131__CTU__C

#include <lcfu_iec61131__CTU.h>

/*                            FunctionBlocks                   */
void lcfu_iec61131__CTU(LC_TD_FunctionBlock_CTU* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  _lcfu_iec61131__CTU_ANY(LC_this, INT, LC_IDP_PVmax_INT)
}
#endif
