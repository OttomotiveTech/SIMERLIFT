#ifndef LC_PROT_LCFU___HVCU_STATUS__C
#define LC_PROT_LCFU___HVCU_STATUS__C

#include <lcfu___hvcu_status.h>



/*                            FunctionBlocks                   */
void  lcfu___HVCU_STATUS(LC_TD_FunctionBlock_HVCU_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
      LC_this->LC_VD_CANRECV1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANRECV1.LC_VD_ENB = LC_this->LC_VD___64_NE;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV1), pEPDB);
    }
    {
      LC_this->LC_VD_RBITS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS1.LC_VD_START = (LC_TD_UINT)0;
      LC_this->LC_VD_RBITS1.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS1.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS1), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS1.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_SOC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___73_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_RBITS2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS2.LC_VD_START = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS2.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS2.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS2), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS2.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_SOH = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___76_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___75_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_RBITS3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS3.LC_VD_START = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS3.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS3.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS3), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS3.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_FULL_SOC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___77_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_RBITS4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS4.LC_VD_START = (LC_TD_UINT)24;
      LC_this->LC_VD_RBITS4.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS4.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS4), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS4.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_BULK_SOC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___78_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_RBITS5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS5.LC_VD_START = (LC_TD_UINT)32;
      LC_this->LC_VD_RBITS5.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS5.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS5), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS5.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_DMDC = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___44_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_RBITS6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS6.LC_VD_START = (LC_TD_UINT)48;
      LC_this->LC_VD_RBITS6.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS6.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS6), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS6.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_DMCC = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___45_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
}

#endif
