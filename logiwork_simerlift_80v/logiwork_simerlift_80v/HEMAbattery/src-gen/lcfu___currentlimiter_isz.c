#ifndef LC_PROT_LCFU___CURRENTLIMITER_ISZ__C
#define LC_PROT_LCFU___CURRENTLIMITER_ISZ__C

#include <lcfu___currentlimiter_isz.h>



/*                            FunctionBlocks                   */
void  lcfu___CURRENTLIMITER_ISZ(LC_TD_FunctionBlock_CURRENTLIMITER_ISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_CURRENT, LC_this->LC_VD_LIM30S, pEPDB);
      LC_this->LC_VD_OVERCURRENT30SEC = lFunction_GT.LC_VD_GT;
      LC_this->LC_VD___19_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_CURRENT, LC_this->LC_VD_LIMCONT, pEPDB);
      LC_this->LC_VD_OVERCURRENTCONT = lFunction_GT.LC_VD_GT;
      LC_this->LC_VD___20_GT = lFunction_GT.LC_VD_GT;
    }
  }
  /* Network 2 */
  {
    {
      LC_this->LC_VD_COUNTIMR1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_COUNTIMR1.LC_VD_CU = LC_this->LC_VD_OVERCURRENTCONT;
      LC_this->LC_VD_COUNTIMR1.LC_VD_ACCPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      LC_this->LC_VD_COUNTIMR1.LC_VD_DECPER = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COUNTIMR1.LC_VD_CD = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_OVERCURRENTCONT));
      LC_this->LC_VD_COUNTIMR1.LC_VD_PV = (LC_TD_INT)25;
      lcfu___COUNTIMR(&(LC_this->LC_VD_COUNTIMR1), pEPDB);
      LC_this->LC_VD_EXCEED30S = LC_this->LC_VD_COUNTIMR1.LC_VD_QU;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_COUNTIMR1.LC_VD_CV, (LC_TD_INT)30, pEPDB);
      LC_this->LC_VD___18_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_SR1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SR1.LC_VD_S1 = LC_this->LC_VD___18_GE;
      LC_this->LC_VD_SR1.LC_VD_R = LC_this->LC_VD_COUNTIMR1.LC_VD_QD;
      lcfu_iec61131__SR(&(LC_this->LC_VD_SR1), pEPDB);
      LC_this->LC_VD_DERATINGTOCONT = LC_this->LC_VD_SR1.LC_VD_Q1;
    }
  }
  /* Network 3 */
  {
    {
      LC_TD_Function_SEL__INT lFunction_SEL;
      LC_INIT_Function_SEL__INT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__INT(&lFunction_SEL, LC_this->LC_VD_DERATINGTOCONT, LC_this->LC_VD_LIM30S, LC_this->LC_VD_LIMCONT, pEPDB);
      LC_this->LC_VD_MAXCURRENT = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___79_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 4 */
  {
    {
      LC_this->LC_VD_RS2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RS2.LC_VD_S = LC_this->LC_VD_EXCEED30S;
      LC_this->LC_VD_RS2.LC_VD_R1 = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_OVERCURRENTCONT));
      lcfu_iec61131__RS(&(LC_this->LC_VD_RS2), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_OVERCURRENT30SEC, LC_this->LC_VD_RS2.LC_VD_Q1, pEPDB);
      LC_this->LC_VD_OVERCURRENT = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___31_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 5 */
  {
    {
      LC_TD_Function_TO_INT lFunction_TO_INT;
      LC_INIT_Function_TO_INT(&lFunction_TO_INT);
      lFunction_TO_INT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_INT__INT(&lFunction_TO_INT, LC_this->LC_VD_MAXCURRENT, pEPDB);
      LC_this->LC_VD___173_TO_INT = lFunction_TO_INT.LC_VD_TO_INT;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_MAXCURRENT, LC_this->LC_VD_LIM, pEPDB);
      LC_this->LC_VD___95_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_this->LC_VD_FLASH5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH5.LC_VD_IN = LC_this->LC_VD___95_GT;
      LC_this->LC_VD_FLASH5.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(5000000));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH5), pEPDB);
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_MAXCURRENT, LC_this->LC_VD_LIM, pEPDB);
      LC_this->LC_VD___98_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_this->LC_VD_FLASH6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH6.LC_VD_IN = LC_this->LC_VD___98_LT;
      LC_this->LC_VD_FLASH6.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(5000000));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH6), pEPDB);
    }
    {
      LC_this->LC_VD_CTUD2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CTUD2.LC_VD_CU = LC_this->LC_VD_FLASH5.LC_VD_OUT;
      LC_this->LC_VD_CTUD2.LC_VD_CD = LC_this->LC_VD_FLASH6.LC_VD_OUT;
      LC_this->LC_VD_CTUD2.LC_VD_PV = LC_this->LC_VD___173_TO_INT;
      lcfu_iec61131__CTUD(&(LC_this->LC_VD_CTUD2), pEPDB);
      LC_this->LC_VD_LIM = LC_this->LC_VD_CTUD2.LC_VD_CV;
    }
  }
}

#endif
