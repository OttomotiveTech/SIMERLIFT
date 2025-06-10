#ifndef LC_PROT_LCFU___RFLT__C
#define LC_PROT_LCFU___RFLT__C

#include <lcfu___rflt.h>

/*                            Functions                        */
void  lcfu___RFLT(LC_TD_Function_RFLT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LREAL LC_VD_OFS, LC_TD_LREAL LC_VD_RES, LC_TD_LWORD LC_VD_INBITS, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Temp variables */
  LC_TD_LWORD LC_VD_C__16_SHR;
  LC_TD_INT LC_VD_C__7_SUB;
  LC_TD_LWORD LC_VD_C__10_SHR;
  LC_TD_LWORD LC_VD_C__14_AND;
  LC_TD_LREAL LC_VD_C__22_TO_LREAL;
  LC_TD_LREAL LC_VD_C__21_MUL;

  /* Network 1 */
  {
    {
      LC_TD_Function_SHR__LWORD lFunction_SHR;
      LC_INIT_Function_SHR__LWORD(&lFunction_SHR);
      lFunction_SHR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHR__LWORD(&lFunction_SHR, LC_VD_INBITS, LC_VD_START, pEPDB);
      LC_VD_C__16_SHR = lFunction_SHR.LC_VD_SHR;
    }
    {
      LC_TD_Function_SUB__INT lFunction_SUB;
      LC_INIT_Function_SUB__INT(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, (LC_TD_INT)64, LC_VD_LEN, pEPDB);
      LC_VD_C__7_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_SHR__LWORD lFunction_SHR;
      LC_INIT_Function_SHR__LWORD(&lFunction_SHR);
      lFunction_SHR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SHR__LWORD(&lFunction_SHR, (LC_TD_LWORD)RT_CC_CONST_ULL(18446744073709551615), LC_VD_C__7_SUB, pEPDB);
      LC_VD_C__10_SHR = lFunction_SHR.LC_VD_SHR;
    }
    {
      LC_TD_Function_AND__LWORD lFunction_AND;
      LC_INIT_Function_AND__LWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_VD_C__16_SHR, LC_VD_C__10_SHR, pEPDB);
      LC_VD_C__14_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_TO_LREAL lFunction_TO_LREAL;
      LC_INIT_Function_TO_LREAL(&lFunction_TO_LREAL);
      lFunction_TO_LREAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LREAL__LWORD(&lFunction_TO_LREAL, LC_VD_C__14_AND, pEPDB);
      LC_VD_C__22_TO_LREAL = lFunction_TO_LREAL.LC_VD_TO_LREAL;
    }
    {
      LC_TD_Function_MUL__LREAL lFunction_MUL;
      LC_INIT_Function_MUL__LREAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_VD_RES, LC_VD_C__22_TO_LREAL, pEPDB);
      LC_VD_C__21_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__LREAL lFunction_ADD;
      LC_INIT_Function_ADD__LREAL(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_VD_OFS, LC_VD_C__21_MUL, pEPDB);
      LC_this->LC_VD_OUT = lFunction_ADD.LC_VD_ADD;
    }
  }
}

#endif
