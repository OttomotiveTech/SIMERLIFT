#ifndef LC_PROT_LCFU___TIMER__C
#define LC_PROT_LCFU___TIMER__C

#include <lcfu___timer.h>



/*                            FunctionBlocks                   */
void  lcfu___TIMER(LC_TD_FunctionBlock_TIMER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_DIV_TIME lFunction_DIV_TIME;
      LC_INIT_Function_DIV_TIME(&lFunction_DIV_TIME);
      lFunction_DIV_TIME.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV_TIME__USINT(&lFunction_DIV_TIME, LC_this->LC_VD_PULSE, (LC_TD_USINT)2, pEPDB);
      LC_this->LC_VD___64_DIV_TIME = lFunction_DIV_TIME.LC_VD_DIV_TIME;
    }
    {
      LC_this->LC_VD_TON4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON4.LC_VD_IN = LC_this->LC_VD_TON3.LC_VD_Q;
      LC_this->LC_VD_TON4.LC_VD_PT = LC_this->LC_VD_T_H;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON4), pEPDB);
    }
    {
      LC_TD_Function_NOT__BOOL lFunction_NOT;
      LC_INIT_Function_NOT__BOOL(&lFunction_NOT);
      lFunction_NOT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NOT__BOOL(&lFunction_NOT, LC_this->LC_VD_TON4.LC_VD_Q, pEPDB);
      LC_this->LC_VD___33_NOT = lFunction_NOT.LC_VD_NOT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_ENABLE, LC_this->LC_VD___33_NOT, pEPDB);
      LC_this->LC_VD___34_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON3.LC_VD_IN = LC_this->LC_VD___34_AND;
      LC_this->LC_VD_TON3.LC_VD_PT = LC_this->LC_VD_T_L;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON3), pEPDB);
      LC_this->LC_VD_T_Q = LC_this->LC_VD_TON3.LC_VD_Q;
    }
    {
      LC_this->LC_VD_TON6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON6.LC_VD_IN = LC_this->LC_VD_TON5.LC_VD_Q;
      LC_this->LC_VD_TON6.LC_VD_PT = LC_this->LC_VD___64_DIV_TIME;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON6), pEPDB);
    }
    {
      LC_TD_Function_NOT__BOOL lFunction_NOT;
      LC_INIT_Function_NOT__BOOL(&lFunction_NOT);
      lFunction_NOT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NOT__BOOL(&lFunction_NOT, LC_this->LC_VD_TON6.LC_VD_Q, pEPDB);
      LC_this->LC_VD___62_NOT = lFunction_NOT.LC_VD_NOT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_ENABLE, LC_this->LC_VD___62_NOT, pEPDB);
      LC_this->LC_VD___63_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON5.LC_VD_IN = LC_this->LC_VD___63_AND;
      LC_this->LC_VD_TON5.LC_VD_PT = LC_this->LC_VD___64_DIV_TIME;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON5), pEPDB);
      LC_this->LC_VD_P_Q = LC_this->LC_VD_TON5.LC_VD_Q;
    }
  }
}

#endif
