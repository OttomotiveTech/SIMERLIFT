#ifndef LC_PROT_LCFU___HVCU_POWER__C
#define LC_PROT_LCFU___HVCU_POWER__C

#include <lcfu___hvcu_power.h>



/*                            FunctionBlocks                   */
void  lcfu___HVCU_POWER(LC_TD_FunctionBlock_HVCU_POWER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
      LC_this->LC_VD_RBITS1.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS1.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS1), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS1.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_TOTAL_VOLTAGE = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___37_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_RBITS2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS2.LC_VD_START = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS2.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS2.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS2), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS2.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_TOTAL_CURRENT = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___36_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
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
      LC_this->LC_VD_RBITS3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS3.LC_VD_START = (LC_TD_UINT)32;
      LC_this->LC_VD_RBITS3.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS3.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS3), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS3.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_INSTANT_CURRENT = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___35_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_RBITS4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS4.LC_VD_START = (LC_TD_UINT)48;
      LC_this->LC_VD_RBITS4.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS4.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS4), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__LWORD(&lFunction_TO_UINT, LC_this->LC_VD_RBITS4.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_AVAILABLE_ENERGY = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___34_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
}

#endif
