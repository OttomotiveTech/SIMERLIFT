#ifndef LC_PROT_LCFU___DGTIN__C
#define LC_PROT_LCFU___DGTIN__C

#include <lcfu___dgtin.h>



/*                            FunctionBlocks                   */
void  lcfu___DGTIN(LC_TD_FunctionBlock_DGTIN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_ANLG4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG4.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG4.LC_VD_GRP = LC_ED__TMSADCGRP__G2;
      LC_this->LC_VD_ANLG4.LC_VD_CH = LC_this->LC_VD_CH;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG4), pEPDB);
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_ANLG4.LC_VD_VAL, (LC_TD_UINT)3000, pEPDB);
      LC_this->LC_VD___3_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_ANLG4.LC_VD_VAL, (LC_TD_UINT)2200, pEPDB);
      LC_this->LC_VD___13_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_ANLG4.LC_VD_VAL, (LC_TD_UINT)2300, pEPDB);
      LC_this->LC_VD___25_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_ANLG4.LC_VD_VAL, (LC_TD_UINT)2400, pEPDB);
      LC_this->LC_VD___28_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___25_GT, LC_this->LC_VD___28_LT, pEPDB);
      LC_this->LC_VD___31_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD___31_AND, (LC_TD_USINT)3, (LC_TD_USINT)2, pEPDB);
      LC_this->LC_VD___34_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD___13_LE, LC_this->LC_VD___34_SEL, (LC_TD_USINT)0, pEPDB);
      LC_this->LC_VD___11_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD___3_GE, LC_this->LC_VD___11_SEL, (LC_TD_USINT)1, pEPDB);
      LC_this->LC_VD_INSTANTSTATE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___7_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 2 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_INSTANTSTATE, LC_this->LC_VD_CURRENTSTATE, pEPDB);
      LC_this->LC_VD___44_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_this->LC_VD___44_NE;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD_TON1.LC_VD_Q, LC_this->LC_VD_CURRENTSTATE, LC_this->LC_VD_INSTANTSTATE, pEPDB);
      LC_this->LC_VD_CURRENTSTATE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___49_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 3 */
  {
    LC_this->LC_VD_STAT = LC_this->LC_VD_CURRENTSTATE;
  }
}

#endif
