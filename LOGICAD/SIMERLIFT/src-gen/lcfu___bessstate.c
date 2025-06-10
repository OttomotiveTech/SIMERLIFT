#ifndef LC_PROT_LCFU___BESSSTATE__C
#define LC_PROT_LCFU___BESSSTATE__C

#include <lcfu___bessstate.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__OR.h>



/*                            FunctionBlocks                   */
void  lcfu___BESSSTATE(LC_TD_FunctionBlock_BESSSTATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  {
    LC_this->LC_VD_CURRENTTIMERCHARGING.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_CURRENTTIMERCHARGING.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_CURRENTAMP < (LC_TD_REAL)-0.5);
    LC_this->LC_VD_CURRENTTIMERCHARGING.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
    lcfu_iec61131__TON(&(LC_this->LC_VD_CURRENTTIMERCHARGING), pEPDB);
    LC_this->LC_VD_CURRENTCHARGING = LC_this->LC_VD_CURRENTTIMERCHARGING.LC_VD_Q;
  }
  {
    LC_this->LC_VD_CURRENTTIMERDISCHARGING.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_CURRENTTIMERDISCHARGING.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_CURRENTAMP > (LC_TD_REAL)0.5);
    LC_this->LC_VD_CURRENTTIMERDISCHARGING.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
    lcfu_iec61131__TON(&(LC_this->LC_VD_CURRENTTIMERDISCHARGING), pEPDB);
    LC_this->LC_VD_CURRENTDISCHARGING = LC_this->LC_VD_CURRENTTIMERDISCHARGING.LC_VD_Q;
  }
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
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_this->LC_VD_STANDBYINTERVAL))
      {
        LC_this->LC_VD_STANDBYINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
        if (LC_this->LC_VD_FAULT)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
        }
        else
        {
          if (LC_this->LC_VD_IGNITION)
          {
            if (LC_this->LC_VD_CHARGERON)
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_OVFAULT,LC_this->LC_VD_CHARGECOMPLETE));
                if (conditionResult)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                }
                else
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__PRECHARGE;
                }
              }
            }
            else
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__PRECHARGE;
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__PRECHARGE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__PRECHARGE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      LC_this->LC_VD_CONTACTNEG = LC_EL_true;
      if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(50000000))))
      {
        LC_this->LC_VD_PRECHARGEON = LC_EL_true;
      }
      else
      {
        LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      }
      if (LC_this->LC_VD_PRECHARGEOK)
      {
        LC_this->LC_VD_CONTACT = LC_EL_true;
      }
      else
      {
        LC_this->LC_VD_CONTACT = LC_EL_false;
      }
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION))));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          if (LC_this->LC_VD_BATSTATETIMEOUT)
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
          }
          else
          {
            {
              LC_TD_BOOL conditionResult = LC_EL_false;
              conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_PRECHARGEOK,LC_this->LC_VD_CONTACTFBK));
              if (conditionResult)
              {
                if (LC_this->LC_VD_CHARGERON)
                {
                  {
                    LC_TD_BOOL conditionResult = LC_EL_false;
                    conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_OVFAULT,LC_this->LC_VD_CHARGECOMPLETE));
                    if (conditionResult)
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                    }
                    else
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGE;
                    }
                  }
                }
                else
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
                }
              }
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
      LC_this->LC_VD_CONTACT = LC_EL_true;
      LC_this->LC_VD_CONTACTNEG = LC_EL_true;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION))));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          if (LC_this->LC_VD_CHARGERON)
          {
            {
              LC_TD_BOOL conditionResult = LC_EL_false;
              conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_OVFAULT,LC_this->LC_VD_CHARGECOMPLETE));
              if (conditionResult)
              {
                LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
              }
              else
              {
                LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGE;
              }
            }
          }
          else
          {
            if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(10),RT_CC_CONST_LL(0))))
            {
              if (LC_this->LC_VD_CURRENTDISCHARGING)
              {
                {
                  LC_TD_BOOL conditionResult = LC_EL_false;
                  conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_UVFAULT,LC_this->LC_VD_DISCHARGECOMPLETE));
                  if (conditionResult)
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                  }
                }
              }
              else
              {
                if (LC_this->LC_VD_CURRENTCHARGING)
                {
                  if (LC_this->LC_VD_OVFAULT)
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                  }
                }
              }
            }
            else
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_UVFAULT,LC_this->LC_VD_DISCHARGECOMPLETE)),(LC_TD_BOOL)(LC_this->LC_VD_CURRENTAMP > (LC_TD_REAL)10)));
                if (conditionResult)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                }
                else
                {
                  {
                    LC_TD_BOOL conditionResult = LC_EL_false;
                    conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_OVFAULT,LC_this->LC_VD_CHARGECOMPLETE)),(LC_TD_BOOL)(LC_this->LC_VD_CURRENTAMP < (LC_TD_REAL)-10)));
                    if (conditionResult)
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__CHARGE))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__CHARGE;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(120),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_true;
      LC_this->LC_VD_CONTACTNEG = LC_EL_true;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION))));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGERON));
            if (conditionResult)
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_UVFAULT,LC_this->LC_VD_DISCHARGECOMPLETE));
                if (conditionResult)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                }
                else
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGE;
                }
              }
            }
            else
            {
              {
                LC_TD_BOOL conditionResult = LC_EL_false;
                conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_OVFAULT,LC_this->LC_VD_CHARGECOMPLETE));
                if (conditionResult)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                }
                else
                {
                  if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(8),RT_CC_CONST_LL(0))))
                  {
                    if (LC_this->LC_VD_CURRENTDISCHARGING)
                    {
                      if (LC_this->LC_VD_UVFAULT)
                      {
                        LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                      }
                      else
                      {
                        if (LC_this->LC_VD_DISCHARGECOMPLETE)
                        {
                          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                        }
                      }
                    }
                  }
                  else
                  {
                    {
                      LC_TD_BOOL conditionResult = LC_EL_false;
                      conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_UVFAULT,LC_this->LC_VD_DISCHARGECOMPLETE)),(LC_TD_BOOL)(LC_this->LC_VD_CURRENTAMP > (LC_TD_REAL)10)));
                      if (conditionResult)
                      {
                        LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
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
    else if ((caseSelector==LC_ED__BATTSTATE__SHUTDOWN))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__SHUTDOWN;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(500000000))),(lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_SHUTDOWNCOMPLETE,(LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0)))))));
        if (conditionResult)
        {
          LC_this->LC_VD_CONTACT = LC_EL_false;
          LC_this->LC_VD_CONTACTNEG = LC_EL_false;
          if ((LC_TD_BOOL)(LC_this->LC_VD_CONTACTFBK == LC_EL_false))
          {
            if (LC_this->LC_VD_FAULT)
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
            }
            else
            {
              if (LC_this->LC_VD_UVFAULT)
              {
                LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
              }
              else
              {
                if (LC_this->LC_VD_OVFAULT)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                }
                else
                {
                  {
                    LC_TD_BOOL conditionResult = LC_EL_false;
                    conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION));
                    if (conditionResult)
                    {
                      LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__STANDBY;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if ((LC_TD_BOOL)(LC_this->LC_VD_BATSTATEELAPSEDTIME > LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(800000000))))
            {
              LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__FAULT;
            }
          }
        }
      }
    }
    else if ((caseSelector==LC_ED__BATTSTATE__FAULT))
    {
      LC_this->LC_VD_STATE = LC_ED__BATTSTATE__FAULT;
      LC_this->LC_VD_BATSTATEINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(10),RT_CC_CONST_LL(0));
      LC_this->LC_VD_PRECHARGEON = LC_EL_false;
      LC_this->LC_VD_CONTACT = LC_EL_false;
      LC_this->LC_VD_CONTACTNEG = LC_EL_false;
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_FAULT)),(lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION)),LC_this->LC_VD_BATSTATETIMEOUT))));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__STANDBY;
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
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__OR__BOOL__2__INL(LC_this->LC_VD_FAULT,(lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION))));
        if (conditionResult)
        {
          LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
        }
        else
        {
          {
            LC_TD_BOOL conditionResult = LC_EL_false;
            conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CHARGERON)),LC_this->LC_VD_BATSTATETIMEOUT));
            if (conditionResult)
            {
              if (LC_this->LC_VD_UVFAULT)
              {
                LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
              }
              else
              {
                if (LC_this->LC_VD_DISCHARGECOMPLETE)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__DISCHARGECOMPLETE;
                }
                else
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__PRECHARGE;
                }
              }
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
        LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
      }
      else
      {
        {
          LC_TD_BOOL conditionResult = LC_EL_false;
          conditionResult = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION));
          if (conditionResult)
          {
            LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__SHUTDOWN;
          }
          else
          {
            {
              LC_TD_BOOL conditionResult = LC_EL_false;
              conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_CHARGERON,LC_this->LC_VD_BATSTATETIMEOUT));
              if (conditionResult)
              {
                if (LC_this->LC_VD_OVFAULT)
                {
                  LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                }
                else
                {
                  if (LC_this->LC_VD_CHARGECOMPLETE)
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__CHARGECOMPLETE;
                  }
                  else
                  {
                    LC_this->LC_VD_BATTERYSTATE = LC_ED__BATTSTATE__PRECHARGE;
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

#endif
