#ifndef LC_PROT_LCFU___AVG__C
#define LC_PROT_LCFU___AVG__C

#include <lcfu___avg.h>



/*                            FunctionBlocks                   */
void  lcfu___AVG(LC_TD_FunctionBlock_AVG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_MUL__LREAL lFunction_MUL;
      LC_INIT_Function_MUL__LREAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_IN, (LC_TD_LREAL)0.001, pEPDB);
      LC_this->LC_VD___4_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_MUL__LREAL lFunction_MUL;
      LC_INIT_Function_MUL__LREAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_OUT_BUFF, (LC_TD_LREAL)0.999, pEPDB);
      LC_this->LC_VD___9_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__LREAL lFunction_ADD;
      LC_INIT_Function_ADD__LREAL(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD___4_MUL, LC_this->LC_VD___9_MUL, pEPDB);
      LC_this->LC_VD_OUT = lFunction_ADD.LC_VD_ADD;
      LC_this->LC_VD_OUT_BUFF = lFunction_ADD.LC_VD_ADD;
      LC_this->LC_VD___6_ADD = lFunction_ADD.LC_VD_ADD;
    }
  }
}

#endif
