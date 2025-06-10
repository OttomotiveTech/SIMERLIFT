#ifndef LC_PROT_LCFU___INPUT_LS__C
#define LC_PROT_LCFU___INPUT_LS__C

#include <lcfu___input_ls.h>



/*                            FunctionBlocks                   */
void  lcfu___INPUT_LS(LC_TD_FunctionBlock_INPUT_LS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_ANLG1.LC_VD_VAL, (LC_TD_UINT)2230, pEPDB);
      LC_this->LC_VD_O = lFunction_LE.LC_VD_LE;
      LC_this->LC_VD___6_LE = lFunction_LE.LC_VD_LE;
    }
  }
}

#endif
