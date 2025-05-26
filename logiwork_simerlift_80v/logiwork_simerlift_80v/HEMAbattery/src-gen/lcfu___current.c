#ifndef LC_PROT_LCFU___CURRENT__C
#define LC_PROT_LCFU___CURRENT__C

#include <lcfu___current.h>



/*                            FunctionBlocks                   */
void  lcfu___CURRENT(LC_TD_FunctionBlock_CURRENT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CURRENT, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD___2_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD___2_DIV, (LC_TD_REAL)0, pEPDB);
      LC_this->LC_VD___11_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_SEL_REAL lFunction_SEL_REAL;
      LC_INIT_Function_SEL_REAL(&lFunction_SEL_REAL);
      lFunction_SEL_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_REAL(&lFunction_SEL_REAL, LC_this->LC_VD___11_GE, (LC_TD_REAL)0, LC_this->LC_VD___2_DIV, pEPDB);
      LC_this->LC_VD___19_SEL_REAL = lFunction_SEL_REAL.LC_VD_SEL_REAL;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__REAL(&lFunction_TO_UINT, LC_this->LC_VD___19_SEL_REAL, pEPDB);
      LC_this->LC_VD_DISCHARGE_CURRENT = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___24_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD___2_DIV, (LC_TD_REAL)0, pEPDB);
      LC_this->LC_VD___15_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___2_DIV, (LC_TD_REAL)-1, pEPDB);
      LC_this->LC_VD___34_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_SEL_REAL lFunction_SEL_REAL;
      LC_INIT_Function_SEL_REAL(&lFunction_SEL_REAL);
      lFunction_SEL_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_REAL(&lFunction_SEL_REAL, LC_this->LC_VD___15_LT, (LC_TD_REAL)0, LC_this->LC_VD___34_MUL, pEPDB);
      LC_this->LC_VD___27_SEL_REAL = lFunction_SEL_REAL.LC_VD_SEL_REAL;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__REAL(&lFunction_TO_UINT, LC_this->LC_VD___27_SEL_REAL, pEPDB);
      LC_this->LC_VD_CHARGE_CURRENT = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___31_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
}

#endif
