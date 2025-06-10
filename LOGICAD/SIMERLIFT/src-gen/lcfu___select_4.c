#ifndef LC_PROT_LCFU___SELECT_4__C
#define LC_PROT_LCFU___SELECT_4__C

#include <lcfu___select_4.h>



/*                            FunctionBlocks                   */
void  lcfu___SELECT_4(LC_TD_FunctionBlock_SELECT_4* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S0, LC_this->LC_VD_I, LC_this->LC_VD_IN0, pEPDB);
      LC_this->LC_VD___19_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S1, LC_this->LC_VD___19_SEL_WORD, LC_this->LC_VD_IN1, pEPDB);
      LC_this->LC_VD___22_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S2, LC_this->LC_VD___22_SEL_WORD, LC_this->LC_VD_IN2, pEPDB);
      LC_this->LC_VD___24_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S3, LC_this->LC_VD___24_SEL_WORD, LC_this->LC_VD_IN3, pEPDB);
      LC_this->LC_VD_Q = lFunction_SEL_WORD.LC_VD_SEL_WORD;
      LC_this->LC_VD___26_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
  }
}

#endif
