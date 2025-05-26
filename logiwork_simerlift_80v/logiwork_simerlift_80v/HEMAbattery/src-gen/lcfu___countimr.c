#ifndef LC_PROT_LCFU___COUNTIMR__C
#define LC_PROT_LCFU___COUNTIMR__C

#include <lcfu___countimr.h>



/*                            FunctionBlocks                   */
void  lcfu___COUNTIMR(LC_TD_FunctionBlock_COUNTIMR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CTUD3.LC_VD_QU)), LC_this->LC_VD_CU, pEPDB);
      LC_this->LC_VD___66_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_FLASH7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH7.LC_VD_IN = LC_this->LC_VD___66_AND;
      LC_this->LC_VD_FLASH7.LC_VD_PER = LC_this->LC_VD_ACCPER;
      lcfu___FLASH(&(LC_this->LC_VD_FLASH7), pEPDB);
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_CD, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CTUD3.LC_VD_QD)), pEPDB);
      LC_this->LC_VD___68_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_FLASH8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH8.LC_VD_IN = LC_this->LC_VD___68_AND;
      LC_this->LC_VD_FLASH8.LC_VD_PER = LC_this->LC_VD_DECPER;
      lcfu___FLASH(&(LC_this->LC_VD_FLASH8), pEPDB);
    }
    {
      LC_this->LC_VD_CTUD3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CTUD3.LC_VD_CU = LC_this->LC_VD_FLASH7.LC_VD_OUT;
      LC_this->LC_VD_CTUD3.LC_VD_CD = LC_this->LC_VD_FLASH8.LC_VD_OUT;
      LC_this->LC_VD_CTUD3.LC_VD_R = LC_this->LC_VD_R;
      LC_this->LC_VD_CTUD3.LC_VD_PV = LC_this->LC_VD_PV;
      lcfu_iec61131__CTUD(&(LC_this->LC_VD_CTUD3), pEPDB);
      LC_this->LC_VD_QU = LC_this->LC_VD_CTUD3.LC_VD_QU;
      LC_this->LC_VD_QD = LC_this->LC_VD_CTUD3.LC_VD_QD;
      LC_this->LC_VD_CV = LC_this->LC_VD_CTUD3.LC_VD_CV;
    }
  }
}

#endif
