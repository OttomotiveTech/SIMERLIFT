#ifndef LC_PROT_LCFU___BCU_ID__C
#define LC_PROT_LCFU___BCU_ID__C

#include <lcfu___bcu_id.h>



/*                            FunctionBlocks                   */
void  lcfu___BCU_ID(LC_TD_FunctionBlock_BCU_ID* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD_ADDR_BIT0, (LC_TD_USINT)0, (LC_TD_USINT)1, pEPDB);
      LC_this->LC_VD___10_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD_ADDR_BIT1, (LC_TD_USINT)0, (LC_TD_USINT)2, pEPDB);
      LC_this->LC_VD___9_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__USINT lFunction_SEL;
      LC_INIT_Function_SEL__USINT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__USINT(&lFunction_SEL, LC_this->LC_VD_ADDR_BIT2, (LC_TD_USINT)0, (LC_TD_USINT)4, pEPDB);
      LC_this->LC_VD___11_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_ADD__USINT lFunction_ADD;
      LC_INIT_Function_ADD__USINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__3(&lFunction_ADD, LC_this->LC_VD___10_SEL, LC_this->LC_VD___9_SEL, LC_this->LC_VD___11_SEL, pEPDB);
      LC_this->LC_VD_PACK_ID = lFunction_ADD.LC_VD_ADD;
      LC_this->LC_VD___7_ADD = lFunction_ADD.LC_VD_ADD;
    }
  }
  /* Network 2 */
  {
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
    }
    {
      LC_TD_Function_TO_UDINT lFunction_TO_UDINT;
      LC_INIT_Function_TO_UDINT(&lFunction_TO_UDINT);
      lFunction_TO_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UDINT__BOOL(&lFunction_TO_UDINT, LC_this->LC_VD_TON1.LC_VD_Q, pEPDB);
      LC_this->LC_VD___36_TO_UDINT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419369200UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___26_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___26_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_10 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___41_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419369456UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___30_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___30_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_11 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___51_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419369712UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___38_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___38_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_12 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___59_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419369968UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___54_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___54_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_13 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___83_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419370224UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___25_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___25_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_14 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___98_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419370480UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___39_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___39_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_15 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___113_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_ADD__UDINT lFunction_ADD;
      LC_INIT_Function_ADD__UDINT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, (LC_TD_UDINT)419370736UL, LC_this->LC_VD_PACK_ID, pEPDB);
      LC_this->LC_VD___67_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___36_TO_UDINT, LC_this->LC_VD___67_ADD, pEPDB);
      LC_this->LC_VD_CAN_ID_16 = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___70_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
}

#endif
