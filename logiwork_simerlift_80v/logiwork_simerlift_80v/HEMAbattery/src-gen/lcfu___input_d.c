#ifndef LC_PROT_LCFU___INPUT_D__C
#define LC_PROT_LCFU___INPUT_D__C

#include <lcfu___input_d.h>



/*                            FunctionBlocks                   */
void  lcfu___INPUT_D(LC_TD_FunctionBlock_INPUT_D* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_ANLG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG1.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG1.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG1.LC_VD_CH = LC_this->LC_VD_CH;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG1), pEPDB);
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_ANLG1.LC_VD_VAL, (LC_TD_UINT)3000, pEPDB);
      LC_this->LC_VD___5_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_ANLG1.LC_VD_VAL, (LC_TD_UINT)2100, pEPDB);
      LC_this->LC_VD___6_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD___5_GE)), (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD___6_LE)), pEPDB);
      LC_this->LC_VD___24_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_ANLG1.LC_VD_VAL, (LC_TD_UINT)5000, pEPDB);
      LC_this->LC_VD___34_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_SELECT_41.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SELECT_41.LC_VD_IN0 = (LC_TD_WORD)0;
      LC_this->LC_VD_SELECT_41.LC_VD_IN1 = (LC_TD_WORD)1;
      LC_this->LC_VD_SELECT_41.LC_VD_IN2 = (LC_TD_WORD)2;
      LC_this->LC_VD_SELECT_41.LC_VD_IN3 = (LC_TD_WORD)3;
      LC_this->LC_VD_SELECT_41.LC_VD_S0 = LC_this->LC_VD___24_AND;
      LC_this->LC_VD_SELECT_41.LC_VD_S1 = LC_this->LC_VD___5_GE;
      LC_this->LC_VD_SELECT_41.LC_VD_S2 = LC_this->LC_VD___6_LE;
      LC_this->LC_VD_SELECT_41.LC_VD_S3 = LC_this->LC_VD___34_GE;
      LC_this->LC_VD_SELECT_41.LC_VD_I = (LC_TD_WORD)0;
      lcfu___SELECT_4(&(LC_this->LC_VD_SELECT_41), pEPDB);
    }
    {
      LC_TD_Function_TO_BYTE lFunction_TO_BYTE;
      LC_INIT_Function_TO_BYTE(&lFunction_TO_BYTE);
      lFunction_TO_BYTE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BYTE__WORD(&lFunction_TO_BYTE, LC_this->LC_VD_SELECT_41.LC_VD_Q, pEPDB);
      LC_this->LC_VD_O = lFunction_TO_BYTE.LC_VD_TO_BYTE;
      LC_this->LC_VD___28_TO_BYTE = lFunction_TO_BYTE.LC_VD_TO_BYTE;
    }
  }
}

#endif
