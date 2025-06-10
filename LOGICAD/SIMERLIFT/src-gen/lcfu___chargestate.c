#ifndef LC_PROT_LCFU___CHARGESTATE__C
#define LC_PROT_LCFU___CHARGESTATE__C

#include <lcfu___chargestate.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__OR.h>



/*                            FunctionBlocks                   */
void  lcfu___CHARGESTATE(LC_TD_FunctionBlock_CHARGESTATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  {
    LC_this->LC_VD_CHARGETIMER.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_CHARGETIMER.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_STATE == LC_this->LC_VD_PREVSTATE);
    LC_this->LC_VD_CHARGETIMER.LC_VD_PT = LC_this->LC_VD_CHARGEINTERVAL;
    lcfu_iec61131__TON(&(LC_this->LC_VD_CHARGETIMER), pEPDB);
    LC_this->LC_VD_CHARGESTATETIMEOUT = LC_this->LC_VD_CHARGETIMER.LC_VD_Q;
    LC_this->LC_VD_CHARGESTATEELAPSEDTIME = LC_this->LC_VD_CHARGETIMER.LC_VD_ET;
  }
  LC_this->LC_VD_PREVSTATE = LC_this->LC_VD_STATE;
  {
    LC_TD_Function_ABS__REAL lFunction_AMPERTIMERHIGH__IN__leftOp_ABS;
    LC_INIT_Function_ABS__REAL(&lFunction_AMPERTIMERHIGH__IN__leftOp_ABS);
    lFunction_AMPERTIMERHIGH__IN__leftOp_ABS.LC_VD_ENO = LC_EL_true;
    lcfu_iec61131__ABS__REAL(&lFunction_AMPERTIMERHIGH__IN__leftOp_ABS, LC_this->LC_VD_BATTAMPR, pEPDB);
    LC_this->LC_VD_AMPERTIMERHIGH.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_AMPERTIMERHIGH.LC_VD_IN = (LC_TD_BOOL)(lFunction_AMPERTIMERHIGH__IN__leftOp_ABS.LC_VD_ABS < (LC_TD_REAL)(LC_this->LC_VD_BALAMPR + (LC_TD_REAL)3));
    LC_this->LC_VD_AMPERTIMERHIGH.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
    lcfu_iec61131__TON(&(LC_this->LC_VD_AMPERTIMERHIGH), pEPDB);
    LC_this->LC_VD_AMPERLOW_MID = LC_this->LC_VD_AMPERTIMERHIGH.LC_VD_Q;
  }
  {
    LC_this->LC_VD_AMPERTIMERLOW.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_AMPERTIMERLOW.LC_VD_IN = LC_this->LC_VD_AMPERLOW_MID;
    LC_this->LC_VD_AMPERTIMERLOW.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
    lcfu_iec61131__TOF(&(LC_this->LC_VD_AMPERTIMERLOW), pEPDB);
    LC_this->LC_VD_AMPERLOW = LC_this->LC_VD_AMPERTIMERLOW.LC_VD_Q;
  }
  {
    LC_this->LC_VD_BALANCETIMERHIGH.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_BALANCETIMERHIGH.LC_VD_IN = (LC_TD_BOOL)((LC_TD_UDINT)(LC_this->LC_VD_MAXCELL - LC_this->LC_VD_MINCELL) < LC_this->LC_VD_BALDIFFTOL);
    LC_this->LC_VD_BALANCETIMERHIGH.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
    lcfu_iec61131__TON(&(LC_this->LC_VD_BALANCETIMERHIGH), pEPDB);
    LC_this->LC_VD_BALANCEOK_MID = LC_this->LC_VD_BALANCETIMERHIGH.LC_VD_Q;
  }
  {
    LC_this->LC_VD_BALANCETIMERLOW.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_BALANCETIMERLOW.LC_VD_IN = LC_this->LC_VD_BALANCEOK_MID;
    LC_this->LC_VD_BALANCETIMERLOW.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
    lcfu_iec61131__TOF(&(LC_this->LC_VD_BALANCETIMERLOW), pEPDB);
    LC_this->LC_VD_BALANCEOK = LC_this->LC_VD_BALANCETIMERLOW.LC_VD_Q;
  }
  {
    LC_TD_BOOL conditionResult = LC_EL_false;
    conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGEON));
    if (conditionResult)
    {
      LC_this->LC_VD_STATE = (LC_TD_USINT)0;
    }
  }
  {
    LC_TD_USINT caseSelector;
    caseSelector = LC_this->LC_VD_STATE;
    if ((caseSelector==(LC_TD_USINT)0))
    {
      LC_this->LC_VD_CHARGEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(300),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COMPLETE = LC_this->LC_VD_MAINCOMPLETE;
      LC_this->LC_VD_BALANCE = LC_EL_false;
      LC_this->LC_VD_CHARGEAMPR = LC_this->LC_VD_DMCC;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_CHARGEON,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_COMPLETE))));
        if (conditionResult)
        {
          LC_this->LC_VD_STATE = (LC_TD_USINT)1;
          LC_this->LC_VD_COMPLETE = LC_EL_false;
        }
      }
    }
    else if ((caseSelector==(LC_TD_USINT)1))
    {
      LC_this->LC_VD_CHARGEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(300),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COMPLETE = LC_EL_false;
      LC_this->LC_VD_BALANCE = LC_EL_false;
      LC_this->LC_VD_CHARGEAMPR = LC_this->LC_VD_DMCC;
      if (LC_this->LC_VD_MAINCOMPLETE)
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)2;
      }
    }
    else if ((caseSelector==(LC_TD_USINT)2))
    {
      LC_this->LC_VD_CHARGEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(10),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COMPLETE = LC_EL_false;
      LC_this->LC_VD_BALANCE = LC_EL_false;
      LC_this->LC_VD_CHARGEAMPR = LC_this->LC_VD_BALAMPR;
      LC_this->LC_VD_BALDIFFTOL = LC_this->LC_VD_BALDIFF;
      if (LC_this->LC_VD_CHARGESTATETIMEOUT)
      {
        if (LC_this->LC_VD_BALANCEOK)
        {
          LC_this->LC_VD_STATE = (LC_TD_USINT)4;
        }
        else
        {
          LC_this->LC_VD_STATE = (LC_TD_USINT)3;
        }
      }
      else
      {
        if ((LC_TD_BOOL)(LC_this->LC_VD_CHARGESTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(30),RT_CC_CONST_LL(0))))
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_AMPERLOW));
            if (conditionResult)
            {
              LC_this->LC_VD_STATE = (LC_TD_USINT)4;
            }
          }
        }
      }
    }
    else if ((caseSelector==(LC_TD_USINT)3))
    {
      LC_this->LC_VD_CHARGEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(60),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COMPLETE = LC_EL_false;
      LC_this->LC_VD_BALANCE = LC_EL_true;
      LC_this->LC_VD_CHARGEAMPR = LC_this->LC_VD_BALAMPR;
      LC_this->LC_VD_BALDIFFTOL = (LC_TD_UDINT)10UL;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_CHARGESTATETIMEOUT,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_AMPERLOW))));
        if (conditionResult)
        {
          LC_this->LC_VD_STATE = (LC_TD_USINT)4;
        }
        else
        {
          if ((LC_TD_BOOL)(LC_this->LC_VD_CHARGESTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(600),RT_CC_CONST_LL(0))))
          {
            if (LC_this->LC_VD_BALANCEOK)
            {
              LC_this->LC_VD_STATE = (LC_TD_USINT)4;
            }
          }
        }
      }
    }
    else if ((caseSelector==(LC_TD_USINT)4))
    {
      LC_this->LC_VD_CHARGEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(60),RT_CC_CONST_LL(0));
      LC_this->LC_VD_COMPLETE = LC_EL_true;
      LC_this->LC_VD_BALANCE = LC_EL_false;
      LC_this->LC_VD_CHARGEAMPR = (LC_TD_REAL)0;
    }
  }
  LC_this->LC_VD_CHSTATE = LC_this->LC_VD_STATE;
}

#endif
