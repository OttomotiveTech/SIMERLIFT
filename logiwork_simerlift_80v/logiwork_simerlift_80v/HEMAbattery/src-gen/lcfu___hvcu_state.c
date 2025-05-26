#ifndef LC_PROT_LCFU___HVCU_STATE__C
#define LC_PROT_LCFU___HVCU_STATE__C

#include <lcfu___hvcu_state.h>



/*                            FunctionBlocks                   */
void  lcfu___HVCU_STATE(LC_TD_FunctionBlock_HVCU_STATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
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
      LC_this->LC_VD_HVCU_STATE = lFunction_TO_USINT.LC_VD_TO_USINT;
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
      LC_this->LC_VD_PDU_CONTACTOR_STATUS = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___76_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD_CAN_ERROR = lFunction_NE.LC_VD_NE;
      LC_this->LC_VD___119_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_RBITS3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS3.LC_VD_START = (LC_TD_UINT)16;
      LC_this->LC_VD_RBITS3.LC_VD_LEN = (LC_TD_UINT)2;
      LC_this->LC_VD_RBITS3.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS3), pEPDB);
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_RBITS3.LC_VD_OUT, (LC_TD_LWORD)RT_CC_CONST_ULL(1), pEPDB);
      LC_this->LC_VD_PDU_CHARGE_CONTACTOR = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___78_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_RBITS4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS4.LC_VD_START = (LC_TD_UINT)18;
      LC_this->LC_VD_RBITS4.LC_VD_LEN = (LC_TD_UINT)2;
      LC_this->LC_VD_RBITS4.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS4), pEPDB);
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_RBITS4.LC_VD_OUT, (LC_TD_LWORD)RT_CC_CONST_ULL(1), pEPDB);
      LC_this->LC_VD_PDU_PRECHARGE_CONTACTOR = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___85_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_RBITS5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS5.LC_VD_START = (LC_TD_UINT)20;
      LC_this->LC_VD_RBITS5.LC_VD_LEN = (LC_TD_UINT)2;
      LC_this->LC_VD_RBITS5.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS5), pEPDB);
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_RBITS5.LC_VD_OUT, (LC_TD_LWORD)RT_CC_CONST_ULL(1), pEPDB);
      LC_this->LC_VD_PDU_POSITIVE_CONTACTOR = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___89_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_RBITS6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS6.LC_VD_START = (LC_TD_UINT)22;
      LC_this->LC_VD_RBITS6.LC_VD_LEN = (LC_TD_UINT)2;
      LC_this->LC_VD_RBITS6.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS6), pEPDB);
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_RBITS6.LC_VD_OUT, (LC_TD_LWORD)RT_CC_CONST_ULL(1), pEPDB);
      LC_this->LC_VD_PDU_NEGATIVE_CONTACTOR = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___98_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_RBITS7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS7.LC_VD_START = (LC_TD_UINT)24;
      LC_this->LC_VD_RBITS7.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS7.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS7), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS7.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_ISOLATION_POSITIVE = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___81_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_RBITS8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS8.LC_VD_START = (LC_TD_UINT)32;
      LC_this->LC_VD_RBITS8.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS8.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS8), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS8.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_ISOLATION_NEGATIVE = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___82_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_RBITS9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RBITS9.LC_VD_START = (LC_TD_UINT)56;
      LC_this->LC_VD_RBITS9.LC_VD_LEN = (LC_TD_UINT)8;
      LC_this->LC_VD_RBITS9.LC_VD_IN = LC_this->LC_VD_CANRECV1.LC_VD_DATA;
      lcfu___RBITS(&(LC_this->LC_VD_RBITS9), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LWORD(&lFunction_TO_USINT, LC_this->LC_VD_RBITS9.LC_VD_OUT, pEPDB);
      LC_this->LC_VD_HVCU_SOFTWARE_VERSION = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___92_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
}

#endif
