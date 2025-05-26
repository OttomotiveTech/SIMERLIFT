#ifndef LC_PROT_LCFU___MOSFET_BTT60302__C
#define LC_PROT_LCFU___MOSFET_BTT60302__C

#include <lcfu___mosfet_btt60302.h>



/*                            FunctionBlocks                   */
void  lcfu___MOSFET_BTT60302(LC_TD_FunctionBlock_MOSFET_BTT60302* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    LC_this->LC_VD_OUT1 = LC_this->LC_VD_IN1;
  }
  /* Network 2 */
  {
    LC_this->LC_VD_OUT2 = LC_this->LC_VD_IN2;
  }
  /* Network 3 */
  {
    LC_this->LC_VD_DEN = LC_EL_true;
  }
  /* Network 4 */
  {
    {
      LC_this->LC_VD_FLASH1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH1.LC_VD_IN = LC_EL_true;
      LC_this->LC_VD_FLASH1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(20000000));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH1), pEPDB);
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_ISENS, (LC_TD_REAL)2240, pEPDB);
      LC_this->LC_VD___18_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__REAL(&lFunction_TO_UINT, LC_this->LC_VD___18_MUL, pEPDB);
      LC_this->LC_VD___29_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_CTU1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CTU1.LC_VD_CU = LC_this->LC_VD_FLASH1.LC_VD_OUT;
      LC_this->LC_VD_CTU1.LC_VD_R = LC_this->LC_VD_CTU1.LC_VD_Q;
      LC_this->LC_VD_CTU1.LC_VD_PV = (LC_TD_INT)4;
      lcfu_iec61131__CTU(&(LC_this->LC_VD_CTU1), pEPDB);
    }
    {
      LC_TD_Function_IAND__INT lFunction_IAND;
      LC_INIT_Function_IAND__INT(&lFunction_IAND);
      lFunction_IAND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__IAND__ANY__2(&lFunction_IAND, LC_this->LC_VD_CTU1.LC_VD_CV, (LC_TD_INT)1, pEPDB);
      LC_this->LC_VD___106_IAND = lFunction_IAND.LC_VD_IAND;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__INT(&lFunction_TO_BOOL, LC_this->LC_VD___106_IAND, pEPDB);
      LC_this->LC_VD___92_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_this->LC_VD_R_TRIG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG1.LC_VD_CLK = LC_this->LC_VD___92_TO_BOOL;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG1), pEPDB);
    }
    {
      LC_TD_Function_XOR__BOOL lFunction_XOR;
      LC_INIT_Function_XOR__BOOL(&lFunction_XOR);
      lFunction_XOR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__XOR__BOOL__2(&lFunction_XOR, LC_this->LC_VD_R_TRIG1.LC_VD_Q, LC_this->LC_VD_DSEL, pEPDB);
      LC_this->LC_VD_DSEL = lFunction_XOR.LC_VD_XOR;
      LC_this->LC_VD___10_XOR = lFunction_XOR.LC_VD_XOR;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_CTU1.LC_VD_CV, (LC_TD_INT)0, pEPDB);
      LC_this->LC_VD___19_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_SEL__UINT lFunction_SEL;
      LC_INIT_Function_SEL__UINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__UINT(&lFunction_SEL, LC_this->LC_VD___19_EQ, LC_this->LC_VD_IOUT1, LC_this->LC_VD___29_TO_UINT, pEPDB);
      LC_this->LC_VD_IOUT1 = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___13_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_CTU1.LC_VD_CV, (LC_TD_INT)2, pEPDB);
      LC_this->LC_VD___25_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_SEL__UINT lFunction_SEL;
      LC_INIT_Function_SEL__UINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__UINT(&lFunction_SEL, LC_this->LC_VD___25_EQ, LC_this->LC_VD_IOUT2, LC_this->LC_VD___29_TO_UINT, pEPDB);
      LC_this->LC_VD_IOUT2 = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___26_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 5 */
  {
    {
      LC_this->LC_VD_BTTDIAG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BTTDIAG1.LC_VD_IN = LC_this->LC_VD_IN1;
      LC_this->LC_VD_BTTDIAG1.LC_VD_IOUT = LC_this->LC_VD_IOUT1;
      LC_this->LC_VD_BTTDIAG1.LC_VD_IMIN = LC_this->LC_VD_IMIN1;
      LC_this->LC_VD_BTTDIAG1.LC_VD_IMAX = LC_this->LC_VD_IMAX1;
      lcfu___BTTDIAG(&(LC_this->LC_VD_BTTDIAG1), pEPDB);
      LC_this->LC_VD_OUT1_DIAG = LC_this->LC_VD_BTTDIAG1.LC_VD_DIAG;
    }
  }
  /* Network 6 */
  {
    {
      LC_this->LC_VD_BTTDIAG2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BTTDIAG2.LC_VD_IN = LC_this->LC_VD_IN2;
      LC_this->LC_VD_BTTDIAG2.LC_VD_IOUT = LC_this->LC_VD_IOUT2;
      LC_this->LC_VD_BTTDIAG2.LC_VD_IMIN = LC_this->LC_VD_IMIN2;
      LC_this->LC_VD_BTTDIAG2.LC_VD_IMAX = LC_this->LC_VD_IMAX2;
      lcfu___BTTDIAG(&(LC_this->LC_VD_BTTDIAG2), pEPDB);
      LC_this->LC_VD_OUT2_DIAG = LC_this->LC_VD_BTTDIAG2.LC_VD_DIAG;
    }
  }
}

#endif
