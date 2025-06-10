#ifndef LC_PROT_LCFU___HVCU_CONFIG__C
#define LC_PROT_LCFU___HVCU_CONFIG__C

#include <lcfu___hvcu_config.h>



/*                            FunctionBlocks                   */
void  lcfu___HVCU_CONFIG(LC_TD_FunctionBlock_HVCU_CONFIG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
      LC_this->LC_VD_CANRECV1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV1.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV1), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___24_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___24_OUTBIT, pEPDB);
      LC_this->LC_VD_CMD0 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___23_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)8, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___35_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___35_OUTBIT, pEPDB);
      LC_this->LC_VD_CMD1 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___12_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___51_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)16, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___11_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___11_OUTBIT, pEPDB);
      LC_this->LC_VD_CMD2 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___22_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)24, (LC_TD_INT)8, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___40_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD___40_OUTBIT, pEPDB);
      LC_this->LC_VD_CMD3 = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___42_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
}

#endif
