#ifndef LC_PROT_LCFU___HVCU_CONTROL_STATE__C
#define LC_PROT_LCFU___HVCU_CONTROL_STATE__C

#include <lcfu___hvcu_control_state.h>



/*                            FunctionBlocks                   */
void  lcfu___HVCU_CONTROL_STATE(LC_TD_FunctionBlock_HVCU_CONTROL_STATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CAN_ID, (LC_TD_UDINT)0UL, pEPDB);
      LC_this->LC_VD___64_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV1.LC_VD_ID = LC_this->LC_VD_CAN_ID;
      LC_this->LC_VD_CANRECV1.LC_VD_FMT = LC_ED__CAN_FORMAT__EXTENDED;
      LC_this->LC_VD_CANRECV1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV1.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV1), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___9_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___9_OUTBIT, pEPDB);
      LC_this->LC_VD_BATTEY_STATE_BCU_00 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___73_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)8, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___10_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___10_OUTBIT, pEPDB);
      LC_this->LC_VD_BATTEY_STATE_BCU_01 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___76_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___95_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___13_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___13_OUTBIT, pEPDB);
      LC_this->LC_VD_BATTEY_STATE_BCU_02 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___92_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)24, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___14_OUTBIT, pEPDB);
      LC_this->LC_VD_BATTEY_STATE_BCU_03 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___56_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)32, (LC_TD_INT)1, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___17_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___17_OUTBIT, pEPDB);
      LC_this->LC_VD_IMDCTRL_BCU0 = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___32_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
  }
}

#endif
