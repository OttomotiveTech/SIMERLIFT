#ifndef LC_PROT_LCFU___ESSSTATE1__C
#define LC_PROT_LCFU___ESSSTATE1__C

#include <lcfu___essstate1.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__OR.h>



/*                            FunctionBlocks                   */
void  lcfu___ESSSTATE1(LC_TD_FunctionBlock_ESSSTATE1* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  {
    LC_this->LC_VD_BATTIMER.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_BATTIMER.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_BATTERYSTATE == LC_this->LC_VD_PREVSTATE);
    LC_this->LC_VD_BATTIMER.LC_VD_PT = LC_this->LC_VD_BATSTATEINTERVAL;
    lcfu_iec61131__TON(&(LC_this->LC_VD_BATTIMER), pEPDB);
    LC_this->LC_VD_BATSTATETIMEOUT = LC_this->LC_VD_BATTIMER.LC_VD_Q;
    LC_this->LC_VD_BATSTATEELAPSEDTIME = LC_this->LC_VD_BATTIMER.LC_VD_ET;
  }
  LC_this->LC_VD_PREVSTATE = LC_this->LC_VD_BATTERYSTATE;
  {
    LC_TD_USINT caseSelector;
    caseSelector = LC_this->LC_VD_BATTERYSTATE;
    if ((caseSelector==LC_ED__BATTSTATE__STANDBY))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__STANDBY;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(12),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_this->LC_VD_STANDBYINTERVAL))
      {
        LC_this->LC_VD_STANDBYINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
        if (LC_this->LC_VD_FAULT)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
        }
        else
        {
          if (LC_this->LC_VD_SHUTDOWN)
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
          }
          else
          {
            if (LC_this->LC_VD_DISCHARGE)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
            }
            else
            {
              if (LC_this->LC_VD_CHARGE)
              {
                LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGE;
              }
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__PRECHARGE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__PRECHARGE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(50000000))),LC_this->LC_VD_CONTACTFBKNEG));
        if (conditionResult)
        {
          LC_this->LC_VD_PRECHARGEON = LC_EL_true;
        }
      }
      if (LC_this->LC_VD_PRECHARGEOK)
      {
        LC_this->LC_VD_CONTACTNEG = LC_EL_true;
      }
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        {
          LC_TD_Function_NOT__BOOL lFunction__leftOp__leftOp__rightOp_NOT;
          LC_INIT_Function_NOT__BOOL(&lFunction__leftOp__leftOp__rightOp_NOT);
          lFunction__leftOp__leftOp__rightOp_NOT.LC_VD_ENO = LC_EL_true;
          lcfu_iec61131__NOT__BOOL(&lFunction__leftOp__leftOp__rightOp_NOT, LC_this->LC_VD_DISCHARGE, pEPDB);
          conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,lFunction__leftOp__leftOp__rightOp_NOT.LC_VD_NOT)),LC_this->LC_VD_SHUTDOWN)),LC_this->LC_VD_BATSTATETIMEOUT));
        }
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_PRECHARGEOK,LC_this->LC_VD_CONTACTFBKNEG));
            if (conditionResult)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__DISCHARGE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__DISCHARGE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(120),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_true;
      if (LC_this->LC_VD_DISCHARGE)
      {
        {
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_ENO = LC_EL_true;
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_IN = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBKNEG));
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
          lcfu_iec61131__TON(&(LC_this->LC_VD_CONTACTFBKTIMER), pEPDB);
        }
        if (LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_Q)
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,LC_this->LC_VD_SHUTDOWN)),(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBKNEG))));
            if (conditionResult)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
            }
            else
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_DISCHARGE));
                if (conditionResult)
                {
                  {
                    LC_TD_BOOL conditionResult = LC_EL_false;
                    conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_CHARGE,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGEPROTECT))));
                    if (conditionResult)
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGE;
                    }
                    else
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        {
          LC_TD_BOOL conditionResult = LC_EL_false;
          conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_CHARGE,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGEPROTECT))));
          if (conditionResult)
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGE;
          }
          else
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
          }
        }
      }
      {
        LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_ENO = LC_EL_true;
        LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_IN = LC_EL_false;
        lcfu_iec61131__TON(&(LC_this->LC_VD_CONTACTFBKTIMER), pEPDB);
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__CHARGE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__CHARGE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(120),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_true;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      if (LC_this->LC_VD_CHARGE)
      {
        {
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_ENO = LC_EL_true;
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_IN = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBK));
          LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
          lcfu_iec61131__TON(&(LC_this->LC_VD_CONTACTFBKTIMER), pEPDB);
        }
        if (LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_Q)
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,LC_this->LC_VD_SHUTDOWN)),(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBK))));
            if (conditionResult)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
            }
            else
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGE));
                if (conditionResult)
                {
                  if (LC_this->LC_VD_DISCHARGE)
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
                  }
                  else
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if (LC_this->LC_VD_DISCHARGE)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
        }
        else
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
      }
      {
        LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_ENO = LC_EL_true;
        LC_this->LC_VD_CONTACTFBKTIMER.LC_VD_IN = LC_EL_false;
        lcfu_iec61131__TON(&(LC_this->LC_VD_CONTACTFBKTIMER), pEPDB);
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__SHUTDOWN))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__SHUTDOWN;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_SHUTDOWN,(LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0))))),(lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_SHUTDOWNCOMPLETE,(LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000)))))));
        if (conditionResult)
        {
          LC_this->LC_VD_CONTACT = LC_EL_false;
          LC_this->LC_VD_CONTACTNEG = LC_EL_false;
          if (LC_this->LC_VD_FAULT)
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
          }
          else
          {
            if (LC_this->LC_VD_SHUTDOWN)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
            }
            else
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBK)),(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CONTACTFBKNEG))));
                if (conditionResult)
                {
                  if (LC_this->LC_VD_DISCHARGEPROTECT)
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                  }
                  else
                  {
                    if (LC_this->LC_VD_CHARGEPROTECT)
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                    }
                    else
                    {
                      {
                        LC_TD_BOOL conditionResult = LC_EL_false;
                        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_BATSTATETIMEOUT,LC_this->LC_VD_CHARGE)),LC_this->LC_VD_DISCHARGE));
                        if (conditionResult)
                        {
                          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__STANDBY;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__FAULT))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__FAULT;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(10),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_FAULT)),LC_this->LC_VD_BATSTATETIMEOUT));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__CHARGECOMPLETE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      if (LC_this->LC_VD_FAULT)
      {
        LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
      }
      else
      {
        if (LC_this->LC_VD_SHUTDOWN)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_BATSTATETIMEOUT,LC_this->LC_VD_DISCHARGE));
            if (conditionResult)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__STANDBY;
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__DISCHARGECOMPLETE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      if (LC_this->LC_VD_FAULT)
      {
        LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
      }
      else
      {
        if (LC_this->LC_VD_SHUTDOWN)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_BATSTATETIMEOUT,LC_this->LC_VD_CHARGE));
            if (conditionResult)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__STANDBY;
            }
          }
        }
      }
    }
  }
}

#endif
