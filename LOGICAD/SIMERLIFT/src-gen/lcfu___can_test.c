#ifndef LC_PROT_LCFU___CAN_TEST__C
#define LC_PROT_LCFU___CAN_TEST__C

#include <lcfu___can_test.h>



/*                            FunctionBlocks                   */
void  lcfu___CAN_TEST(LC_TD_FunctionBlock_CAN_TEST* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN_1, pEPDB);
      LC_this->LC_VD___15_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)16, LC_this->LC_VD___15_TO_LWORD, pEPDB);
      LC_this->LC_VD___8_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN_2, pEPDB);
      LC_this->LC_VD___16_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)16, (LC_TD_INT)16, LC_this->LC_VD___16_TO_LWORD, pEPDB);
      LC_this->LC_VD___10_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CAN_ID, (LC_TD_UDINT)0UL, pEPDB);
      LC_this->LC_VD___64_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN_3, pEPDB);
      LC_this->LC_VD___17_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)32, (LC_TD_INT)16, LC_this->LC_VD___17_TO_LWORD, pEPDB);
      LC_this->LC_VD___13_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN_4, pEPDB);
      LC_this->LC_VD___18_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)48, (LC_TD_INT)16, LC_this->LC_VD___18_TO_LWORD, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__4(&lFunction_OR, LC_this->LC_VD___8_OUTBIT, LC_this->LC_VD___10_OUTBIT, LC_this->LC_VD___13_OUTBIT, LC_this->LC_VD___14_OUTBIT, pEPDB);
      LC_this->LC_VD___226_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_CANSEND3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND3.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND3.LC_VD_ID = LC_this->LC_VD_CAN_ID;
      LC_this->LC_VD_CANSEND3.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANSEND3.LC_VD_DATA = LC_this->LC_VD___226_OR;
      LC_this->LC_VD_CANSEND3.LC_VD_DLC = (LC_TD_UDINT)8UL;
      LC_this->LC_VD_CANSEND3.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANSEND3.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANSEND(&(LC_this->LC_VD_CANSEND3), pEPDB);
    }
  }
}

#endif
