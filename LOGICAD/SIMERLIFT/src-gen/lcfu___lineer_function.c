#ifndef LC_PROT_LCFU___LINEER_FUNCTION__C
#define LC_PROT_LCFU___LINEER_FUNCTION__C

#include <lcfu___lineer_function.h>



/*                            FunctionBlocks                   */
void  lcfu___LINEER_FUNCTION(LC_TD_FunctionBlock_LINEER_FUNCTION* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_SUB__LREAL lFunction_SUB;
      LC_INIT_Function_SUB__LREAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_Y2, LC_this->LC_VD_Y1, pEPDB);
      LC_this->LC_VD___58_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_SUB__LREAL lFunction_SUB;
      LC_INIT_Function_SUB__LREAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_X2, LC_this->LC_VD_X1, pEPDB);
      LC_this->LC_VD___59_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_DIV__LREAL lFunction_DIV;
      LC_INIT_Function_DIV__LREAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__LREAL(&lFunction_DIV, LC_this->LC_VD___58_SUB, LC_this->LC_VD___59_SUB, pEPDB);
      LC_this->LC_VD___35_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__LREAL lFunction_MUL;
      LC_INIT_Function_MUL__LREAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_X1, LC_this->LC_VD___35_DIV, pEPDB);
      LC_this->LC_VD___60_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_SUB__LREAL lFunction_SUB;
      LC_INIT_Function_SUB__LREAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_Y1, LC_this->LC_VD___60_MUL, pEPDB);
      LC_this->LC_VD___61_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_MUL__LREAL lFunction_MUL;
      LC_INIT_Function_MUL__LREAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___35_DIV, LC_this->LC_VD_INPUT, pEPDB);
      LC_this->LC_VD___56_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__LREAL lFunction_ADD;
      LC_INIT_Function_ADD__LREAL(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD___61_SUB, LC_this->LC_VD___56_MUL, pEPDB);
      LC_this->LC_VD_OUTPUT = lFunction_ADD.LC_VD_ADD;
      LC_this->LC_VD___62_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_LIMIT__LREAL lFunction_LIMIT;
      LC_INIT_Function_LIMIT__LREAL(&lFunction_LIMIT);
      lFunction_LIMIT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LIMIT__ANY(&lFunction_LIMIT, LC_this->LC_VD_Y1, LC_this->LC_VD___62_ADD, LC_this->LC_VD_Y2, pEPDB);
      LC_this->LC_VD_LIM_OUTPUT = lFunction_LIMIT.LC_VD_LIMIT;
      LC_this->LC_VD___33_LIMIT = lFunction_LIMIT.LC_VD_LIMIT;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_X2, LC_this->LC_VD_X1, pEPDB);
      LC_this->LC_VD_ERROR = lFunction_LE.LC_VD_LE;
      LC_this->LC_VD___57_LE = lFunction_LE.LC_VD_LE;
    }
  }
}

#endif
