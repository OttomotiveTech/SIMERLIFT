#ifndef LC_PROT_LCFU___BCU_FAULT_CODES__C
#define LC_PROT_LCFU___BCU_FAULT_CODES__C

#include <lcfu___bcu_fault_codes.h>



/*                            FunctionBlocks                   */
void  lcfu___BCU_FAULT_CODES(LC_TD_FunctionBlock_BCU_FAULT_CODES* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_00, pEPDB);
      LC_this->LC_VD___44_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)1, LC_this->LC_VD___44_TO_LWORD, pEPDB);
      LC_this->LC_VD___2_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_01, pEPDB);
      LC_this->LC_VD___45_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)1, (LC_TD_INT)1, LC_this->LC_VD___45_TO_LWORD, pEPDB);
      LC_this->LC_VD___3_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_02, pEPDB);
      LC_this->LC_VD___46_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)2, (LC_TD_INT)1, LC_this->LC_VD___46_TO_LWORD, pEPDB);
      LC_this->LC_VD___4_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_03, pEPDB);
      LC_this->LC_VD___47_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)3, (LC_TD_INT)1, LC_this->LC_VD___47_TO_LWORD, pEPDB);
      LC_this->LC_VD___5_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_04, pEPDB);
      LC_this->LC_VD___48_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)4, (LC_TD_INT)1, LC_this->LC_VD___48_TO_LWORD, pEPDB);
      LC_this->LC_VD___6_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_05, pEPDB);
      LC_this->LC_VD___49_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)5, (LC_TD_INT)1, LC_this->LC_VD___49_TO_LWORD, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_06, pEPDB);
      LC_this->LC_VD___50_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)6, (LC_TD_INT)1, LC_this->LC_VD___50_TO_LWORD, pEPDB);
      LC_this->LC_VD___15_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_07, pEPDB);
      LC_this->LC_VD___51_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)7, (LC_TD_INT)1, LC_this->LC_VD___51_TO_LWORD, pEPDB);
      LC_this->LC_VD___16_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_08, pEPDB);
      LC_this->LC_VD___52_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)8, (LC_TD_INT)1, LC_this->LC_VD___52_TO_LWORD, pEPDB);
      LC_this->LC_VD___21_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_09, pEPDB);
      LC_this->LC_VD___53_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)9, (LC_TD_INT)1, LC_this->LC_VD___53_TO_LWORD, pEPDB);
      LC_this->LC_VD___23_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_10, pEPDB);
      LC_this->LC_VD___56_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)10, (LC_TD_INT)1, LC_this->LC_VD___56_TO_LWORD, pEPDB);
      LC_this->LC_VD___24_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_11, pEPDB);
      LC_this->LC_VD___57_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)11, (LC_TD_INT)1, LC_this->LC_VD___57_TO_LWORD, pEPDB);
      LC_this->LC_VD___31_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_12, pEPDB);
      LC_this->LC_VD___59_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)12, (LC_TD_INT)1, LC_this->LC_VD___59_TO_LWORD, pEPDB);
      LC_this->LC_VD___32_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_13, pEPDB);
      LC_this->LC_VD___60_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)13, (LC_TD_INT)1, LC_this->LC_VD___60_TO_LWORD, pEPDB);
      LC_this->LC_VD___39_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_14, pEPDB);
      LC_this->LC_VD___61_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)14, (LC_TD_INT)1, LC_this->LC_VD___61_TO_LWORD, pEPDB);
      LC_this->LC_VD___40_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_15, pEPDB);
      LC_this->LC_VD___62_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)15, (LC_TD_INT)1, LC_this->LC_VD___62_TO_LWORD, pEPDB);
      LC_this->LC_VD___41_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__16(&lFunction_OR, LC_this->LC_VD___2_OUTBIT, LC_this->LC_VD___3_OUTBIT, LC_this->LC_VD___4_OUTBIT, LC_this->LC_VD___5_OUTBIT, LC_this->LC_VD___6_OUTBIT, LC_this->LC_VD___14_OUTBIT, LC_this->LC_VD___15_OUTBIT, LC_this->LC_VD___16_OUTBIT, LC_this->LC_VD___21_OUTBIT, LC_this->LC_VD___23_OUTBIT, LC_this->LC_VD___24_OUTBIT, LC_this->LC_VD___31_OUTBIT, LC_this->LC_VD___32_OUTBIT, LC_this->LC_VD___39_OUTBIT, LC_this->LC_VD___40_OUTBIT, LC_this->LC_VD___41_OUTBIT, pEPDB);
      LC_this->LC_VD_FAULT_CODE_BYTE_0_1 = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___12_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 2 */
  {
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)32, (LC_TD_INT)1, LC_this->LC_VD_FAULT_32, pEPDB);
      LC_this->LC_VD___220_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)33, (LC_TD_INT)1, LC_this->LC_VD_FAULT_33, pEPDB);
      LC_this->LC_VD___219_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)34, (LC_TD_INT)1, LC_this->LC_VD_FAULT_34, pEPDB);
      LC_this->LC_VD___215_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)35, (LC_TD_INT)1, LC_this->LC_VD_FAULT_35, pEPDB);
      LC_this->LC_VD___221_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)36, (LC_TD_INT)1, LC_this->LC_VD_FAULT_36, pEPDB);
      LC_this->LC_VD___224_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)37, (LC_TD_INT)1, LC_this->LC_VD_FAULT_37, pEPDB);
      LC_this->LC_VD___227_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)38, (LC_TD_INT)1, LC_this->LC_VD_FAULT_38, pEPDB);
      LC_this->LC_VD___228_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)39, (LC_TD_INT)1, LC_this->LC_VD_FAULT_39, pEPDB);
      LC_this->LC_VD___231_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__8(&lFunction_OR, LC_this->LC_VD___220_OUTBIT, LC_this->LC_VD___219_OUTBIT, LC_this->LC_VD___215_OUTBIT, LC_this->LC_VD___221_OUTBIT, LC_this->LC_VD___224_OUTBIT, LC_this->LC_VD___227_OUTBIT, LC_this->LC_VD___228_OUTBIT, LC_this->LC_VD___231_OUTBIT, pEPDB);
      LC_this->LC_VD_FAULT_CODE_BYTE_4 = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___247_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 3 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UDINT(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_BYTE_5, pEPDB);
      LC_this->LC_VD___216_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)40, (LC_TD_INT)8, LC_this->LC_VD___216_TO_LWORD, pEPDB);
      LC_this->LC_VD_FAULT_CODE_BYTE_5 = lFunction_WBIT.LC_VD_OUTBIT;
      LC_this->LC_VD___232_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
  }
  /* Network 4 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UDINT(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_BYTE_6_7, pEPDB);
      LC_this->LC_VD___222_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)48, (LC_TD_INT)16, LC_this->LC_VD___222_TO_LWORD, pEPDB);
      LC_this->LC_VD_FAULT_CODE_BYTE_6_7 = lFunction_WBIT.LC_VD_OUTBIT;
      LC_this->LC_VD___233_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
  }
  /* Network 5 */
  {
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)16, (LC_TD_INT)1, LC_this->LC_VD_FAULT_16, pEPDB);
      LC_this->LC_VD___130_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_17, pEPDB);
      LC_this->LC_VD___167_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)17, (LC_TD_INT)1, LC_this->LC_VD___167_TO_LWORD, pEPDB);
      LC_this->LC_VD___129_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_18, pEPDB);
      LC_this->LC_VD___168_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)18, (LC_TD_INT)1, LC_this->LC_VD___168_TO_LWORD, pEPDB);
      LC_this->LC_VD___128_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_19, pEPDB);
      LC_this->LC_VD___169_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)19, (LC_TD_INT)1, LC_this->LC_VD___169_TO_LWORD, pEPDB);
      LC_this->LC_VD___127_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_20, pEPDB);
      LC_this->LC_VD___170_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)20, (LC_TD_INT)1, LC_this->LC_VD___170_TO_LWORD, pEPDB);
      LC_this->LC_VD___126_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_21, pEPDB);
      LC_this->LC_VD___171_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)21, (LC_TD_INT)1, LC_this->LC_VD___171_TO_LWORD, pEPDB);
      LC_this->LC_VD___125_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_22, pEPDB);
      LC_this->LC_VD___172_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)22, (LC_TD_INT)1, LC_this->LC_VD___172_TO_LWORD, pEPDB);
      LC_this->LC_VD___124_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_23, pEPDB);
      LC_this->LC_VD___173_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)23, (LC_TD_INT)1, LC_this->LC_VD___173_TO_LWORD, pEPDB);
      LC_this->LC_VD___123_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_24, pEPDB);
      LC_this->LC_VD___174_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)24, (LC_TD_INT)1, LC_this->LC_VD___174_TO_LWORD, pEPDB);
      LC_this->LC_VD___122_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_25, pEPDB);
      LC_this->LC_VD___175_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)25, (LC_TD_INT)1, LC_this->LC_VD___175_TO_LWORD, pEPDB);
      LC_this->LC_VD___121_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_26, pEPDB);
      LC_this->LC_VD___176_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)26, (LC_TD_INT)1, LC_this->LC_VD___176_TO_LWORD, pEPDB);
      LC_this->LC_VD___120_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_27, pEPDB);
      LC_this->LC_VD___177_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)27, (LC_TD_INT)1, LC_this->LC_VD___177_TO_LWORD, pEPDB);
      LC_this->LC_VD___119_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_28, pEPDB);
      LC_this->LC_VD___178_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)28, (LC_TD_INT)1, LC_this->LC_VD___178_TO_LWORD, pEPDB);
      LC_this->LC_VD___118_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_29, pEPDB);
      LC_this->LC_VD___179_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)29, (LC_TD_INT)1, LC_this->LC_VD___179_TO_LWORD, pEPDB);
      LC_this->LC_VD___115_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_30, pEPDB);
      LC_this->LC_VD___180_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)30, (LC_TD_INT)1, LC_this->LC_VD___180_TO_LWORD, pEPDB);
      LC_this->LC_VD___116_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_FAULT_31, pEPDB);
      LC_this->LC_VD___181_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)31, (LC_TD_INT)1, LC_this->LC_VD___181_TO_LWORD, pEPDB);
      LC_this->LC_VD___117_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__16(&lFunction_OR, LC_this->LC_VD___130_OUTBIT, LC_this->LC_VD___129_OUTBIT, LC_this->LC_VD___128_OUTBIT, LC_this->LC_VD___127_OUTBIT, LC_this->LC_VD___126_OUTBIT, LC_this->LC_VD___125_OUTBIT, LC_this->LC_VD___124_OUTBIT, LC_this->LC_VD___123_OUTBIT, LC_this->LC_VD___122_OUTBIT, LC_this->LC_VD___121_OUTBIT, LC_this->LC_VD___120_OUTBIT, LC_this->LC_VD___119_OUTBIT, LC_this->LC_VD___118_OUTBIT, LC_this->LC_VD___115_OUTBIT, LC_this->LC_VD___116_OUTBIT, LC_this->LC_VD___117_OUTBIT, pEPDB);
      LC_this->LC_VD_FAULT_CODE_BYTE_2_3 = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___131_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 6 */
  {
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__5(&lFunction_OR, LC_this->LC_VD_FAULT_CODE_BYTE_0_1, LC_this->LC_VD_FAULT_CODE_BYTE_2_3, LC_this->LC_VD_FAULT_CODE_BYTE_4, LC_this->LC_VD_FAULT_CODE_BYTE_5, LC_this->LC_VD_FAULT_CODE_BYTE_6_7, pEPDB);
      LC_this->LC_VD_SUM = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___212_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CAN_ID, (LC_TD_UDINT)0UL, pEPDB);
      LC_this->LC_VD___64_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANSEND4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND4.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND4.LC_VD_ID = LC_this->LC_VD_CAN_ID;
      LC_this->LC_VD_CANSEND4.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANSEND4.LC_VD_DATA = LC_this->LC_VD___212_OR;
      LC_this->LC_VD_CANSEND4.LC_VD_DLC = (LC_TD_UDINT)8UL;
      LC_this->LC_VD_CANSEND4.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANSEND4.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANSEND(&(LC_this->LC_VD_CANSEND4), pEPDB);
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANSEND4.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___251_NE = lFunction_NE.LC_VD_NE;
    }
  }
  /* Network 7 */
  {
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__2(&lFunction_OR, LC_this->LC_VD_FAULT_CODE_BYTE_0_1, LC_this->LC_VD_FAULT_CODE_BYTE_2_3, pEPDB);
      LC_this->LC_VD___259_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_TO_UDINT lFunction_TO_UDINT;
      LC_INIT_Function_TO_UDINT(&lFunction_TO_UDINT);
      lFunction_TO_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UDINT__LWORD(&lFunction_TO_UDINT, LC_this->LC_VD___259_OR, pEPDB);
      LC_this->LC_VD_GUI_FAULT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
      LC_this->LC_VD___263_TO_UDINT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
    }
  }
}

#endif
