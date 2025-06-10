#ifndef LC_PROT_LCFU___BCU_BALANCE_STATUS__C
#define LC_PROT_LCFU___BCU_BALANCE_STATUS__C

#include <lcfu___bcu_balance_status.h>



/*                            FunctionBlocks                   */
void  lcfu___BCU_BALANCE_STATUS(LC_TD_FunctionBlock_BCU_BALANCE_STATUS* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_WBITS19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_WBITS19.LC_VD_START = (LC_TD_UINT)0;
      LC_this->LC_VD_WBITS19.LC_VD_LEN = (LC_TD_UINT)16;
      LC_this->LC_VD_WBITS19.LC_VD_PRM = LC_this->LC_VD_BALANCE_REGISTER;
      lcfu___WBITS(&(LC_this->LC_VD_WBITS19), pEPDB);
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
      LC_this->LC_VD_CANSEND4.LC_VD_DATA = LC_this->LC_VD_WBITS19.LC_VD_OUT;
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
