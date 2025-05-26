#ifndef LC_PROT_LCFU___SELECT_12__C
#define LC_PROT_LCFU___SELECT_12__C

#include <lcfu___select_12.h>



/*                            FunctionBlocks                   */
void  lcfu___SELECT_12(LC_TD_FunctionBlock_SELECT_12* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S00, LC_this->LC_VD_I, LC_this->LC_VD_IN00, pEPDB);
      LC_this->LC_VD___19_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S01, LC_this->LC_VD___19_SEL_WORD, LC_this->LC_VD_IN01, pEPDB);
      LC_this->LC_VD___22_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S02, LC_this->LC_VD___22_SEL_WORD, LC_this->LC_VD_IN02, pEPDB);
      LC_this->LC_VD___24_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S03, LC_this->LC_VD___24_SEL_WORD, LC_this->LC_VD_IN03, pEPDB);
      LC_this->LC_VD___26_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S04, LC_this->LC_VD___26_SEL_WORD, LC_this->LC_VD_IN04, pEPDB);
      LC_this->LC_VD___25_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S05, LC_this->LC_VD___25_SEL_WORD, LC_this->LC_VD_IN05, pEPDB);
      LC_this->LC_VD___28_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S06, LC_this->LC_VD___28_SEL_WORD, LC_this->LC_VD_IN06, pEPDB);
      LC_this->LC_VD___27_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S07, LC_this->LC_VD___27_SEL_WORD, LC_this->LC_VD_IN07, pEPDB);
      LC_this->LC_VD___23_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S08, LC_this->LC_VD___23_SEL_WORD, LC_this->LC_VD_IN08, pEPDB);
      LC_this->LC_VD___54_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S09, LC_this->LC_VD___54_SEL_WORD, LC_this->LC_VD_IN09, pEPDB);
      LC_this->LC_VD___53_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S10, LC_this->LC_VD___53_SEL_WORD, LC_this->LC_VD_IN10, pEPDB);
      LC_this->LC_VD___52_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
    {
      LC_TD_Function_SEL_WORD lFunction_SEL_WORD;
      LC_INIT_Function_SEL_WORD(&lFunction_SEL_WORD);
      lFunction_SEL_WORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_WORD(&lFunction_SEL_WORD, LC_this->LC_VD_S11, LC_this->LC_VD___52_SEL_WORD, LC_this->LC_VD_IN11, pEPDB);
      LC_this->LC_VD_Q = lFunction_SEL_WORD.LC_VD_SEL_WORD;
      LC_this->LC_VD___51_SEL_WORD = lFunction_SEL_WORD.LC_VD_SEL_WORD;
    }
  }
}

#endif
