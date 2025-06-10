#ifndef LC_PROT_LCFU___WFLT__C
#define LC_PROT_LCFU___WFLT__C

#include <lcfu___wflt.h>

/*                            Functions                        */
void  lcfu___WFLT(LC_TD_Function_WFLT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LREAL LC_VD_PRM, LC_TD_LREAL LC_VD_OFS, LC_TD_LREAL LC_VD_RES, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Temp variables */
  LC_TD_LWORD LC_VD_C__4_SHL;
  LC_TD_INT LC_VD_C__7_ADD;
  LC_TD_INT LC_VD_C__12_SUB;
  LC_TD_LWORD LC_VD_C__15_SHR;
  LC_TD_LWORD LC_VD_C__19_AND;
  LC_TD_LREAL LC_VD_C__29_SUB;
  LC_TD_LREAL LC_VD_C__32_DIV;
  LC_TD_LWORD LC_VD_C__36_TO_LWORD;
  LC_TD_LWORD LC_VD_C__23_SHL;

  /* Network 1 */
  {
    {
      LC_TD_Function_SHL__LWORD lFunction_SHL;
      LC_INIT_Function_SHL__LWORD(&lFunction_SHL);
      lFunction_SHL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHL__LWORD(&lFunction_SHL, (LC_TD_LWORD)RT_CC_CONST_ULL(18446744073709551615), LC_VD_START, pEPDB);
      LC_VD_C__4_SHL = lFunction_SHL.LC_VD_SHL;
    }
    {
      LC_TD_Function_ADD__INT lFunction_ADD;
      LC_INIT_Function_ADD__INT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_VD_START, LC_VD_LEN, pEPDB);
      LC_VD_C__7_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_SUB__INT lFunction_SUB;
      LC_INIT_Function_SUB__INT(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, (LC_TD_INT)64, LC_VD_C__7_ADD, pEPDB);
      LC_VD_C__12_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_SHR__LWORD lFunction_SHR;
      LC_INIT_Function_SHR__LWORD(&lFunction_SHR);
      lFunction_SHR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHR__LWORD(&lFunction_SHR, (LC_TD_LWORD)RT_CC_CONST_ULL(18446744073709551615), LC_VD_C__12_SUB, pEPDB);
      LC_VD_C__15_SHR = lFunction_SHR.LC_VD_SHR;
    }
    {
      LC_TD_Function_AND__LWORD lFunction_AND;
      LC_INIT_Function_AND__LWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_VD_C__4_SHL, LC_VD_C__15_SHR, pEPDB);
      LC_VD_C__19_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_SUB__LREAL lFunction_SUB;
      LC_INIT_Function_SUB__LREAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_VD_PRM, LC_VD_OFS, pEPDB);
      LC_VD_C__29_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_DIV__LREAL lFunction_DIV;
      LC_INIT_Function_DIV__LREAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__LREAL(&lFunction_DIV, LC_VD_C__29_SUB, LC_VD_RES, pEPDB);
      LC_VD_C__32_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__LREAL(&lFunction_TO_LWORD, LC_VD_C__32_DIV, pEPDB);
      LC_VD_C__36_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_SHL__LWORD lFunction_SHL;
      LC_INIT_Function_SHL__LWORD(&lFunction_SHL);
      lFunction_SHL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHL__LWORD(&lFunction_SHL, LC_VD_C__36_TO_LWORD, LC_VD_START, pEPDB);
      LC_VD_C__23_SHL = lFunction_SHL.LC_VD_SHL;
    }
    {
      LC_TD_Function_AND__LWORD lFunction_AND;
      LC_INIT_Function_AND__LWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_VD_C__19_AND, LC_VD_C__23_SHL, pEPDB);
      LC_this->LC_VD_OUTBIT = lFunction_AND.LC_VD_AND;
    }
  }
}

#endif
