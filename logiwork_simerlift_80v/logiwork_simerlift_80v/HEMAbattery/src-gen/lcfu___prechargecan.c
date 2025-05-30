#ifndef LC_PROT_LCFU___PRECHARGECAN__C
#define LC_PROT_LCFU___PRECHARGECAN__C

#include <lcfu___prechargecan.h>



/*                            FunctionBlocks                   */
void  lcfu___PRECHARGECAN(LC_TD_FunctionBlock_PRECHARGECAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)0, (LC_TD_INT)1, LC_this->LC_VD_ENB, pEPDB);
      LC_this->LC_VD___14_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_WBIT lFunction_WBIT;
      LC_INIT_Function_WBIT(&lFunction_WBIT);
      lFunction_WBIT.LC_VD_ENO = LC_EL_true;
      lcfu___WBIT(&lFunction_WBIT, (LC_TD_INT)1, (LC_TD_INT)1, LC_this->LC_VD_RST, pEPDB);
      LC_this->LC_VD___92_OUTBIT = lFunction_WBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_OR__LWORD lFunction_OR;
      LC_INIT_Function_OR__LWORD(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__ANY__2(&lFunction_OR, LC_this->LC_VD___14_OUTBIT, LC_this->LC_VD___92_OUTBIT, pEPDB);
      LC_this->LC_VD___15_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_CANSEND1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANSEND1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANSEND1.LC_VD_ID = (LC_TD_UDINT)221UL;
      LC_this->LC_VD_CANSEND1.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANSEND1.LC_VD_DATA = LC_this->LC_VD___15_OR;
      LC_this->LC_VD_CANSEND1.LC_VD_DLC = (LC_TD_UDINT)1UL;
      LC_this->LC_VD_CANSEND1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      LC_this->LC_VD_CANSEND1.LC_VD_ENB = LC_EL_true;
      lcfu___CANSEND(&(LC_this->LC_VD_CANSEND1), pEPDB);
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANSEND1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___34_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_CANRECV1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CANRECV1.LC_VD_CH = LC_this->LC_VD_CAN_CH;
      LC_this->LC_VD_CANRECV1.LC_VD_ID = (LC_TD_UDINT)253UL;
      LC_this->LC_VD_CANRECV1.LC_VD_FMT = LC_ED__CAN_FORMAT__STANDARD;
      LC_this->LC_VD_CANRECV1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CANRECV1.LC_VD_ENB = LC_EL_true;
      lcfu___CANRECV(&(LC_this->LC_VD_CANRECV1), pEPDB);
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)0, (LC_TD_INT)1, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___43_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___43_OUTBIT, pEPDB);
      LC_this->LC_VD_OUTFBK = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___87_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)1, (LC_TD_INT)1, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___49_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___49_OUTBIT, pEPDB);
      LC_this->LC_VD_IGBTFLT = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___84_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CANRECV1.LC_VD_RC, (LC_TD_UINT)0, pEPDB);
      LC_this->LC_VD___30_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD___34_NE, LC_this->LC_VD___30_NE, pEPDB);
      LC_this->LC_VD_CANERR = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___38_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)2, (LC_TD_INT)1, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___54_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___54_OUTBIT, pEPDB);
      LC_this->LC_VD_IGBTRDY = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___81_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)3, (LC_TD_INT)1, LC_this->LC_VD_CANRECV1.LC_VD_DATA, pEPDB);
      LC_this->LC_VD___59_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___59_OUTBIT, pEPDB);
      LC_this->LC_VD_IGBTRST = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___77_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
  }
  /* Network 2 */
  {
    {
      LC_TD_Function_RBIT lFunction_RBIT;
      LC_INIT_Function_RBIT(&lFunction_RBIT);
      lFunction_RBIT.LC_VD_ENO = LC_EL_true;
      lcfu___RBIT(&lFunction_RBIT, (LC_TD_INT)4, (LC_TD_INT)1, (LC_TD_LWORD)LC_IEC_LWORD_MIN, pEPDB);
      LC_this->LC_VD___70_OUTBIT = lFunction_RBIT.LC_VD_OUTBIT;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__LWORD(&lFunction_TO_BOOL, LC_this->LC_VD___70_OUTBIT, pEPDB);
      LC_this->LC_VD_INVAL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___75_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
  }
}

#endif
