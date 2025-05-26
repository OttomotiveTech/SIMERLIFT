#ifndef LC_PROT_LCFU___BCU_STATE_MESSAGE__C
#define LC_PROT_LCFU___BCU_STATE_MESSAGE__C

#include <lcfu___bcu_state_message.h>



/*                            FunctionBlocks                   */
void  lcfu___BCU_STATE_MESSAGE(LC_TD_FunctionBlock_BCU_STATE_MESSAGE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_STATE, pEPDB);
      LC_this->LC_VD___16_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)8, LC_this->LC_VD___16_TO_LWORD, pEPDB);
      LC_this->LC_VD___2_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_CONTACTOR_STATUS, pEPDB);
      LC_this->LC_VD___17_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)8, (LC_TD_INT)1, LC_this->LC_VD___17_TO_LWORD, pEPDB);
      LC_this->LC_VD___9_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
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
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_CHARGECONTACT, pEPDB);
      LC_this->LC_VD___86_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)9, (LC_TD_INT)1, LC_this->LC_VD___86_TO_LWORD, pEPDB);
      LC_this->LC_VD___87_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_NEGCONTACT, pEPDB);
      LC_this->LC_VD___79_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)10, (LC_TD_INT)1, LC_this->LC_VD___79_TO_LWORD, pEPDB);
      LC_this->LC_VD___81_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_CHARGECOMPLETE, pEPDB);
      LC_this->LC_VD___104_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)11, (LC_TD_INT)1, LC_this->LC_VD___104_TO_LWORD, pEPDB);
      LC_this->LC_VD___105_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_DISCHARGECOMPLETE, pEPDB);
      LC_this->LC_VD___120_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)12, (LC_TD_INT)1, LC_this->LC_VD___120_TO_LWORD, pEPDB);
      LC_this->LC_VD___121_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__BOOL(&lFunction_TO_LWORD, LC_this->LC_VD_EMERGENCYBUTTON, pEPDB);
      LC_this->LC_VD___129_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)13, (LC_TD_INT)1, LC_this->LC_VD___129_TO_LWORD, pEPDB);
      LC_this->LC_VD___130_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_ISOLATIONSTATUS, pEPDB);
      LC_this->LC_VD___13_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)14, (LC_TD_INT)2, LC_this->LC_VD___13_TO_LWORD, pEPDB);
      LC_this->LC_VD___3_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN1STATUS, pEPDB);
      LC_this->LC_VD___138_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)16, (LC_TD_INT)2, LC_this->LC_VD___138_TO_LWORD, pEPDB);
      LC_this->LC_VD___139_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_LWORD lFunction_TO_LWORD;
      LC_INIT_Function_TO_LWORD(&lFunction_TO_LWORD);
      lFunction_TO_LWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_LWORD__USINT(&lFunction_TO_LWORD, LC_this->LC_VD_IN2STATUS, pEPDB);
      LC_this->LC_VD___147_TO_LWORD = lFunction_TO_LWORD.LC_VD_TO_LWORD;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)18, (LC_TD_INT)2, LC_this->LC_VD___147_TO_LWORD, pEPDB);
      LC_this->LC_VD___148_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WFLT lFunction_WFLT;
      LC_INIT_Function_WFLT(&lFunction_WFLT);
      lFunction_WFLT.LC_VD_ENO = LC_EL_true;
      lcfu___WFLT(&lFunction_WFLT, (LC_TD_INT)24, (LC_TD_INT)8, LC_this->LC_VD_AMBIENT_TEMP, (LC_TD_LREAL)-40, (LC_TD_LREAL)1, pEPDB);
      LC_this->LC_VD___10_OUTBIT = lFunction_WFLT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WFLT lFunction_WFLT;
      LC_INIT_Function_WFLT(&lFunction_WFLT);
      lFunction_WFLT.LC_VD_ENO = LC_EL_true;
      lcfu___WFLT(&lFunction_WFLT, (LC_TD_INT)32, (LC_TD_INT)16, LC_this->LC_VD_DMCC, (LC_TD_LREAL)0, (LC_TD_LREAL)0.1, pEPDB);
      LC_this->LC_VD___15_OUTBIT = lFunction_WFLT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WFLT lFunction_WFLT;
      LC_INIT_Function_WFLT(&lFunction_WFLT);
      lFunction_WFLT.LC_VD_ENO = LC_EL_true;
      lcfu___WFLT(&lFunction_WFLT, (LC_TD_INT)48, (LC_TD_INT)12, LC_this->LC_VD_DMDC, (LC_TD_LREAL)0, (LC_TD_LREAL)0.1, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WFLT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__13(&lFunction_OR, LC_this->LC_VD___2_OUTBIT, LC_this->LC_VD___9_OUTBIT, LC_this->LC_VD___87_OUTBIT, LC_this->LC_VD___81_OUTBIT, LC_this->LC_VD___105_OUTBIT, LC_this->LC_VD___121_OUTBIT, LC_this->LC_VD___130_OUTBIT, LC_this->LC_VD___3_OUTBIT, LC_this->LC_VD___139_OUTBIT, LC_this->LC_VD___148_OUTBIT, LC_this->LC_VD___10_OUTBIT, LC_this->LC_VD___15_OUTBIT, LC_this->LC_VD___14_OUTBIT, pEPDB);
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
