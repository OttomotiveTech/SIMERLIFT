#ifndef LC_PROT_LCFU___MAX_MIN_VOLTAGE_STATUS__C
#define LC_PROT_LCFU___MAX_MIN_VOLTAGE_STATUS__C

#include <lcfu___max_min_voltage_status.h>



/*                            FunctionBlocks                   */
void  lcfu___MAX_MIN_VOLTAGE_STATUS(LC_TD_FunctionBlock_MAX_MIN_VOLTAGE_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_MAX_VOLT_CELL_LOC, pEPDB);
      LC_this->LC_VD___27_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)4, LC_this->LC_VD___27_TO_LWORD, pEPDB);
      LC_this->LC_VD___5_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_MAX_VOLT_BMU_LOC, pEPDB);
      LC_this->LC_VD___32_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)4, (LC_TD_INT)4, LC_this->LC_VD___32_TO_LWORD, pEPDB);
      LC_this->LC_VD___6_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
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
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_MIN_VOLT_CELL_LOC, pEPDB);
      LC_this->LC_VD___33_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)8, (LC_TD_INT)4, LC_this->LC_VD___33_TO_LWORD, pEPDB);
      LC_this->LC_VD___7_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_MIN_VOLT_BMU_LOC, pEPDB);
      LC_this->LC_VD___34_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)12, (LC_TD_INT)4, LC_this->LC_VD___34_TO_LWORD, pEPDB);
      LC_this->LC_VD___8_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UDINT(&lFunction_TO_LWORD, LC_this->LC_VD_AVERAGE_CELL_VOLTAGE, pEPDB);
      LC_this->LC_VD___35_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)16, (LC_TD_INT)16, LC_this->LC_VD___35_TO_LWORD, pEPDB);
      LC_this->LC_VD___12_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UDINT(&lFunction_TO_LWORD, LC_this->LC_VD_MAX_CELL_VOLTAGE, pEPDB);
      LC_this->LC_VD___36_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)32, (LC_TD_INT)16, LC_this->LC_VD___36_TO_LWORD, pEPDB);
      LC_this->LC_VD___13_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__UDINT(&lFunction_TO_LWORD, LC_this->LC_VD_MIN_CELL_VOLTAGE, pEPDB);
      LC_this->LC_VD___37_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)48, (LC_TD_INT)16, LC_this->LC_VD___37_TO_LWORD, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__7(&lFunction_OR, LC_this->LC_VD___5_OUTBIT, LC_this->LC_VD___6_OUTBIT, LC_this->LC_VD___7_OUTBIT, LC_this->LC_VD___8_OUTBIT, LC_this->LC_VD___12_OUTBIT, LC_this->LC_VD___13_OUTBIT, LC_this->LC_VD___14_OUTBIT, pEPDB);
      LC_this->LC_VD___192_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_CANSEND1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND1.LC_VD_ID = LC_this->LC_VD_CAN_ID;
      LC_this->LC_VD_CANSEND1.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANSEND1.LC_VD_DATA = LC_this->LC_VD___192_OR;
      LC_this->LC_VD_CANSEND1.LC_VD_DLC = (LC_TD_UDINT)8UL;
      LC_this->LC_VD_CANSEND1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANSEND1.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANSEND(&(LC_this->LC_VD_CANSEND1), pEPDB);
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANSEND1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___21_NE = lFunction_NE.LC_VD_NE;
    }
  }
}

#endif
