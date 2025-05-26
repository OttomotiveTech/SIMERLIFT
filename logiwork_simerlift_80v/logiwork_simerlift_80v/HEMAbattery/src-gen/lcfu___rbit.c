#ifndef LC_PROT_LCFU___RBIT__C
#define LC_PROT_LCFU___RBIT__C

#include <lcfu___rbit.h>

/*                            Functions                        */
void  lcfu___RBIT(LC_TD_Function_RBIT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LWORD LC_VD_INBIT, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Temp variables */
  LC_TD_LWORD LC_VD_C__12_SHR;
  LC_TD_INT LC_VD_C__2_SUB;
  LC_TD_LWORD LC_VD_C__6_SHR;

  /* Network 1 */
  {
    {
      LC_TD_Function_SHR__LWORD lFunction_SHR;
      LC_INIT_Function_SHR__LWORD(&lFunction_SHR);
      lFunction_SHR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHR__LWORD(&lFunction_SHR, LC_VD_INBIT, LC_VD_START, pEPDB);
      LC_VD_C__12_SHR = lFunction_SHR.LC_VD_SHR;
    }
    {
      LC_TD_Function_SUB__INT lFunction_SUB;
      LC_INIT_Function_SUB__INT(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, (LC_TD_INT)64, LC_VD_LEN, pEPDB);
      LC_VD_C__2_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_SHR__LWORD lFunction_SHR;
      LC_INIT_Function_SHR__LWORD(&lFunction_SHR);
      lFunction_SHR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHR__LWORD(&lFunction_SHR, (LC_TD_LWORD)RT_CC_CONST_ULL(18446744073709551615), LC_VD_C__2_SUB, pEPDB);
      LC_VD_C__6_SHR = lFunction_SHR.LC_VD_SHR;
    }
    {
      LC_TD_Function_AND__LWORD lFunction_AND;
      LC_INIT_Function_AND__LWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_VD_C__12_SHR, LC_VD_C__6_SHR, pEPDB);
      LC_this->LC_VD_OUTBIT = lFunction_AND.LC_VD_AND;
    }
  }
}

#endif
