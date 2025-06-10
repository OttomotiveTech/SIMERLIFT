#ifndef LC_PROT_LCFU___BALANCE_ISZ__C
#define LC_PROT_LCFU___BALANCE_ISZ__C

#include <lcfu___balance_isz.h>



/*                            FunctionBlocks                   */
void  lcfu___BALANCE_ISZ(LC_TD_FunctionBlock_BALANCE_ISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD_AVARAGE_CELL_VOLTAGE, (LC_TD_UDINT)1UL, pEPDB);
      LC_this->LC_VD___4_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD___4_ADD, LC_this->LC_VD_BALANCE_THRESHOLD, pEPDB);
      LC_this->LC_VD___29_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_SEL__UDINT lFunction_SEL;
      LC_INIT_Function_SEL__UDINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__UDINT(&lFunction_SEL, LC_this->LC_VD___29_GE, LC_this->LC_VD_BALANCE_THRESHOLD, LC_this->LC_VD___4_ADD, pEPDB);
      LC_this->LC_VD_BALLANCE_VOLTAGE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___33_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 2 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_MAX_CELL_VOLTAGE, LC_this->LC_VD_BALANCE_THRESHOLD, pEPDB);
      LC_this->LC_VD___41_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_SUB__UDINT lFunction_SUB;
      LC_INIT_Function_SUB__UDINT(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_MAX_CELL_VOLTAGE, LC_this->LC_VD_MIN_CELL_VOLTAGE, pEPDB);
      LC_this->LC_VD___20_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD___20_SUB, LC_this->LC_VD_DIFFERENCE_TOLERANCE, pEPDB);
      LC_this->LC_VD___45_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___41_GE, LC_this->LC_VD___45_GT, pEPDB);
      LC_this->LC_VD_BALLANCE_PENDING = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___8_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 3 */
  {
    {
      LC_TD_Function_MUL_TIME lFunction_MUL_TIME;
      LC_INIT_Function_MUL_TIME(&lFunction_MUL_TIME);
      lFunction_MUL_TIME.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL_TIME__USINT(&lFunction_MUL_TIME, LC_this->LC_VD_MEAS_PERIOD, (LC_TD_USINT)20, pEPDB);
      LC_this->LC_VD___50_MUL_TIME = lFunction_MUL_TIME.LC_VD_MUL_TIME;
    }
    {
      LC_TD_Function_ADD__TIME lFunction_ADD;
      LC_INIT_Function_ADD__TIME(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD___50_MUL_TIME, LC_this->LC_VD_BALLANCE_INTERVAL, pEPDB);
      LC_this->LC_VD___54_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_this->LC_VD_TP3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TP3.LC_VD_IN = LC_this->LC_VD_RS3.LC_VD_Q1;
      LC_this->LC_VD_TP3.LC_VD_PT = LC_this->LC_VD_BALLANCE_INTERVAL;
      lcfu_iec61131__TP(&(LC_this->LC_VD_TP3), pEPDB);
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_CHARGE_STATUS, LC_this->LC_VD_TP3.LC_VD_Q, pEPDB);
      LC_this->LC_VD_BALANCE_ENABLE = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___11_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_FLASH1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH1.LC_VD_IN = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD___11_AND));
      LC_this->LC_VD_FLASH1.LC_VD_PER = LC_this->LC_VD_MEAS_PERIOD;
      lcfu___FLASH(&(LC_this->LC_VD_FLASH1), pEPDB);
      LC_this->LC_VD_MEASURE_ALL = LC_this->LC_VD_FLASH1.LC_VD_OUT;
    }
    {
      LC_this->LC_VD_TON4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON4.LC_VD_IN = LC_this->LC_VD_RS3.LC_VD_Q1;
      LC_this->LC_VD_TON4.LC_VD_PT = LC_this->LC_VD___54_ADD;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON4), pEPDB);
    }
    {
      LC_this->LC_VD_R_TRIG5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG5.LC_VD_CLK = LC_this->LC_VD_TON4.LC_VD_Q;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG5), pEPDB);
    }
    {
      LC_this->LC_VD_RS3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RS3.LC_VD_S = LC_this->LC_VD_BALLANCE_PENDING;
      LC_this->LC_VD_RS3.LC_VD_R1 = LC_this->LC_VD_R_TRIG5.LC_VD_Q;
      lcfu_iec61131__RS(&(LC_this->LC_VD_RS3), pEPDB);
    }
    {
      LC_this->LC_VD_FLASH2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH2.LC_VD_IN = LC_this->LC_VD___11_AND;
      LC_this->LC_VD_FLASH2.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH2), pEPDB);
      LC_this->LC_VD_MEASURE_AUX = LC_this->LC_VD_FLASH2.LC_VD_OUT;
    }
  }
}

#endif
