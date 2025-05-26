#ifndef LC_PROT_LCFU___BCU_BATTERY_STATUS__C
#define LC_PROT_LCFU___BCU_BATTERY_STATUS__C

#include <lcfu___bcu_battery_status.h>



/*                            FunctionBlocks                   */
void  lcfu___BCU_BATTERY_STATUS(LC_TD_FunctionBlock_BCU_BATTERY_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_SOC, pEPDB);
      LC_this->LC_VD___24_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)8, LC_this->LC_VD___24_TO_LWORD, pEPDB);
      LC_this->LC_VD___2_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_SOH, pEPDB);
      LC_this->LC_VD___31_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)8, (LC_TD_INT)8, LC_this->LC_VD___31_TO_LWORD, pEPDB);
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
      lcfu_iec61131__TO_LWORD__UINT(&lFunction_TO_LWORD, LC_this->LC_VD_DUTY_CYCLE, pEPDB);
      LC_this->LC_VD___32_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)16, (LC_TD_INT)16, LC_this->LC_VD___32_TO_LWORD, pEPDB);
      LC_this->LC_VD___10_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WFLT lFunction_WFLT;
      LC_INIT_Function_WFLT(&lFunction_WFLT);
      lFunction_WFLT.LC_VD_ENO = LC_EL_true;
      lcfu___WFLT(&lFunction_WFLT, (LC_TD_INT)32, (LC_TD_INT)16, LC_this->LC_VD_REMAIN_ENERGY, (LC_TD_LREAL)0, (LC_TD_LREAL)0.01, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WFLT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WFLT lFunction_WFLT;
      LC_INIT_Function_WFLT(&lFunction_WFLT);
      lFunction_WFLT.LC_VD_ENO = LC_EL_true;
      lcfu___WFLT(&lFunction_WFLT, (LC_TD_INT)48, (LC_TD_INT)16, LC_this->LC_VD_AVAILABLE_ENERGY, (LC_TD_LREAL)0, (LC_TD_LREAL)0.01, pEPDB);
      LC_this->LC_VD___15_OUTBIT = lFunction_WFLT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__5(&lFunction_OR, LC_this->LC_VD___2_OUTBIT, LC_this->LC_VD___6_OUTBIT, LC_this->LC_VD___10_OUTBIT, LC_this->LC_VD___14_OUTBIT, LC_this->LC_VD___15_OUTBIT, pEPDB);
      LC_this->LC_VD___12_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_CANSEND4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND4.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND4.LC_VD_ID = LC_this->LC_VD_CAN_ID;
      LC_this->LC_VD_CANSEND4.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANSEND4.LC_VD_DATA = LC_this->LC_VD___12_OR;
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
      LC_this->LC_VD___95_NE = lFunction_NE.LC_VD_NE;
    }
  }
}

#endif
