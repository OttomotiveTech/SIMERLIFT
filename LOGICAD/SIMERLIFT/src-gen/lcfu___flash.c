#ifndef LC_PROT_LCFU___FLASH__C
#define LC_PROT_LCFU___FLASH__C

#include <lcfu___flash.h>



/*                            FunctionBlocks                   */
void  lcfu___FLASH(LC_TD_FunctionBlock_FLASH* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_TON2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON2.LC_VD_IN = LC_this->LC_VD_TON1.LC_VD_Q;
      LC_this->LC_VD_TON2.LC_VD_PT = LC_this->LC_VD_PER;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON2), pEPDB);
    }
    {
      LC_TD_Function_NOT__BOOL lFunction_NOT;
      LC_INIT_Function_NOT__BOOL(&lFunction_NOT);
      lFunction_NOT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NOT__BOOL(&lFunction_NOT, LC_this->LC_VD_TON2.LC_VD_Q, pEPDB);
      LC_this->LC_VD___5_NOT = lFunction_NOT.LC_VD_NOT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_IN, LC_this->LC_VD___5_NOT, pEPDB);
      LC_this->LC_VD___4_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_this->LC_VD___4_AND;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_this->LC_VD_PER;
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
      LC_this->LC_VD_OUT = LC_this->LC_VD_TON1.LC_VD_Q;
    }
  }
}

#endif
