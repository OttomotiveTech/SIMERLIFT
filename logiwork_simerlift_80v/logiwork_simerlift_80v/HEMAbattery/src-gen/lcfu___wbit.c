#ifndef LC_PROT_LCFU___WBIT__C
#define LC_PROT_LCFU___WBIT__C

#include <lcfu___wbit.h>

/*                            Functions                        */
void  lcfu___WBIT(LC_TD_Function_WBIT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LWORD LC_VD_INBIT, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Temp variables */
  LC_TD_LWORD LC_VD_C__4_SHL;
  LC_TD_INT LC_VD_C__7_ADD;
  LC_TD_INT LC_VD_C__12_SUB;
  LC_TD_LWORD LC_VD_C__15_SHR;
  LC_TD_LWORD LC_VD_C__19_AND;
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
      LC_TD_Function_SHL__LWORD lFunction_SHL;
      LC_INIT_Function_SHL__LWORD(&lFunction_SHL);
      lFunction_SHL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHL__LWORD(&lFunction_SHL, LC_VD_INBIT, LC_VD_START, pEPDB);
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
