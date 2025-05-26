/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block TP for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__TP__C
#define LC_PROT_LCFU_IEC61131__TP__C

#include <lcfu_iec61131__TP.h>
#include <RTAPITimer.h>

/*                            FunctionBlocks                   */
void  lcfu_iec61131__TP(LC_TD_FunctionBlock_TP* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* If timer is running */
  if (LC_this->LC_VD_Q)
  {
    /* Calc Time */
    LC_this->LC_VD_ET = LC_MF_SUB_TIME(LC_MF_CURRENT_TIME_API, LC_this->LC_VD_STARTT);
    /* Check if Timer has reached it's limit */
    if (LC_MF_GE_TIME(LC_this->LC_VD_ET,LC_this->LC_VD_PT))
    {
      /* Reset Outputs */
      LC_this->LC_VD_Q=LC_EL_false;
      LC_this->LC_VD_ET=LC_this->LC_VD_PT;
    }
  }
  if (LC_this->LC_VD_IN)
  {
    /* Detect rising trigger */
    if (!(LC_this->LC_VD_M))
    {
      LC_this->LC_VD_M=LC_EL_true;
      /* Start Timer if not running (no retriggering!)*/
      if (!(LC_this->LC_VD_Q))
      {
        LC_this->LC_VD_STARTT=LC_MF_CURRENT_TIME_API;
        LC_this->LC_VD_Q=LC_EL_true;
        LC_MF_RESET_TIME(LC_this->LC_VD_ET);
      }
    }
  }
  else
  {
    LC_this->LC_VD_M=LC_EL_false;
    if (!(LC_this->LC_VD_Q))
       {
        LC_MF_RESET_TIME(LC_this->LC_VD_ET);
       }
  }
}

#endif
