#ifndef LC_PROT_LCFU___INPUT_HS__C
#define LC_PROT_LCFU___INPUT_HS__C

#include <lcfu___input_hs.h>



/*                            FunctionBlocks                   */
void  lcfu___INPUT_HS(LC_TD_FunctionBlock_INPUT_HS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_ANLG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG1.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG1.LC_VD_GRP = LC_ED__TMSADCGRP__G2;
      LC_this->LC_VD_ANLG1.LC_VD_CH = LC_this->LC_VD_CH;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG1), pEPDB);
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_ANLG1.LC_VD_VAL, (LC_TD_UINT)3000, pEPDB);
      LC_this->LC_VD_O = lFunction_GE.LC_VD_GE;
      LC_this->LC_VD___5_GE = lFunction_GE.LC_VD_GE;
    }
  }
}

#endif
