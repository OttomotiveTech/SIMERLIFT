#ifndef LC_PROT_LCFU___SOCSTATE__C
#define LC_PROT_LCFU___SOCSTATE__C

#include <lcfu___socstate.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__OR.h>



/*                            FunctionBlocks                   */
void  lcfu___SOCSTATE(LC_TD_FunctionBlock_SOCSTATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  {
    LC_this->LC_VD_SOCTIMER.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_SOCTIMER.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_STATE == LC_this->LC_VD_PREVSTATE);
    LC_this->LC_VD_SOCTIMER.LC_VD_PT = LC_this->LC_VD_SOCINTERVAL;
    lcfu_iec61131__TON(&(LC_this->LC_VD_SOCTIMER), pEPDB);
    LC_this->LC_VD_SOCSTATETIMEOUT = LC_this->LC_VD_SOCTIMER.LC_VD_Q;
    LC_this->LC_VD_SOCSTATEELAPSEDTIME = LC_this->LC_VD_SOCTIMER.LC_VD_ET;
  }
  LC_this->LC_VD_PREVSTATE = LC_this->LC_VD_STATE;
  {
    LC_this->LC_VD_TRIGCHARGECOMPLETE.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_TRIGCHARGECOMPLETE.LC_VD_CLK = LC_this->LC_VD_CHARGECOMPLETE;
    lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_TRIGCHARGECOMPLETE), pEPDB);
    LC_this->LC_VD_CHARGECOMPLETETRIG = LC_this->LC_VD_TRIGCHARGECOMPLETE.LC_VD_Q;
  }
  {
    LC_this->LC_VD_TRIGMEMWR.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_TRIGMEMWR.LC_VD_CLK = LC_this->LC_VD_MEMWR;
    lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_TRIGMEMWR), pEPDB);
    LC_this->LC_VD_MEMWRTRIG = LC_this->LC_VD_TRIGMEMWR.LC_VD_Q;
  }
  {
    LC_TD_USINT caseSelector;
    caseSelector = LC_this->LC_VD_STATE;
    if ((caseSelector==(LC_TD_USINT)0))
    {
      LC_this->LC_VD_SOCINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(200000000));
      LC_this->LC_VD_SOC = (LC_TD_REAL)0;
      LC_this->LC_VD_RDWH = LC_EL_true;
      LC_this->LC_VD_WRWH = LC_EL_false;
      if (LC_this->LC_VD_SOCSTATETIMEOUT)
      {
        LC_this->LC_VD_WHREMLAST = LC_this->LC_VD_WHMEM;
        LC_this->LC_VD_WHREF = LC_this->LC_VD_WHINSTANT;
        LC_this->LC_VD_WHREM = LC_this->LC_VD_WHMEM;
        if ((LC_TD_BOOL)(LC_this->LC_VD_WHREM > LC_this->LC_VD_WHCAP))
        {
          LC_this->LC_VD_WHREM = LC_this->LC_VD_WHCAP;
        }
        LC_this->LC_VD_RDWH = LC_EL_false;
        LC_this->LC_VD_STATE = (LC_TD_USINT)1;
      }
    }
    else if ((caseSelector==(LC_TD_USINT)1))
    {
      LC_this->LC_VD_SOCINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(3600),RT_CC_CONST_LL(0));
      LC_this->LC_VD_WRWH = LC_EL_false;
      LC_this->LC_VD_WHCHANGE = (LC_TD_REAL)(LC_this->LC_VD_WHINSTANT - LC_this->LC_VD_WHREF);
      LC_this->LC_VD_WHREM = (LC_TD_REAL)(LC_this->LC_VD_WHREM - LC_this->LC_VD_WHCHANGE);
      LC_this->LC_VD_WHREF = LC_this->LC_VD_WHINSTANT;
      LC_this->LC_VD_COMPAREVALUE = (LC_TD_REAL)(LC_this->LC_VD_WHCAP + (LC_TD_REAL)10);
      if (LC_this->LC_VD_CHARGECOMPLETETRIG)
      {
        LC_this->LC_VD_WHREM = LC_this->LC_VD_COMPAREVALUE;
      }
      else
      {
        if ((LC_TD_BOOL)(LC_this->LC_VD_WHREM > LC_this->LC_VD_COMPAREVALUE))
        {
          LC_this->LC_VD_WHREM = LC_this->LC_VD_COMPAREVALUE;
        }
        else
        {
          if ((LC_TD_BOOL)(LC_this->LC_VD_WHREM < (LC_TD_REAL)0))
          {
            LC_this->LC_VD_WHREM = (LC_TD_REAL)0;
          }
        }
      }
      LC_this->LC_VD_SOC = (LC_TD_REAL)((lcfu_iec61131__DIV__REAL__INL(LC_this->LC_VD_WHREM,LC_this->LC_VD_WHCAP)) * (LC_TD_REAL)100);
      if ((LC_TD_BOOL)(LC_this->LC_VD_SOC > (LC_TD_REAL)100))
      {
        LC_this->LC_VD_SOC = (LC_TD_REAL)100;
      }
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        {
          LC_TD_Function_ABS__REAL lFunction__leftOp__leftOp__leftOp_ABS;
          LC_INIT_Function_ABS__REAL(&lFunction__leftOp__leftOp__leftOp_ABS);
          lFunction__leftOp__leftOp__leftOp_ABS.LC_VD_ENO = LC_EL_true;
          lcfu_iec61131__ABS__REAL(&lFunction__leftOp__leftOp__leftOp_ABS, (LC_TD_REAL)(LC_this->LC_VD_WHREM - LC_this->LC_VD_WHREMLAST), pEPDB);
          conditionResult = (lcfu_iec61131__OR__BOOL__2__INL((lcfu_iec61131__OR__BOOL__2__INL((LC_TD_BOOL)(lFunction__leftOp__leftOp__leftOp_ABS.LC_VD_ABS > (LC_TD_REAL)100),LC_this->LC_VD_MEMWRTRIG)),LC_this->LC_VD_CHARGECOMPLETETRIG));
        }
        if (conditionResult)
        {
          LC_this->LC_VD_WHREMLAST = LC_this->LC_VD_WHREM;
          LC_this->LC_VD_WRWH = LC_EL_true;
          LC_this->LC_VD_STATE = (LC_TD_USINT)2;
        }
      }
    }
    else if ((caseSelector==(LC_TD_USINT)2))
    {
      LC_this->LC_VD_SOCINTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      if (LC_this->LC_VD_SOCSTATETIMEOUT)
      {
        LC_this->LC_VD_WRWH = LC_EL_false;
        LC_this->LC_VD_STATE = (LC_TD_USINT)1;
      }
    }
  }
  LC_this->LC_VD_SOCSTATE = LC_this->LC_VD_STATE;
}

#endif
