#ifndef LC_PROT_LCFU___AMPMULTVOLTCHAR__C
#define LC_PROT_LCFU___AMPMULTVOLTCHAR__C

#include <lcfu___ampmultvoltchar.h>
#include <lcfu_iec61131__NOT.h>



/*                            FunctionBlocks                   */
void  lcfu___AMPMULTVOLTCHAR(LC_TD_FunctionBlock_AMPMULTVOLTCHAR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
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
      LC_this->LC_VD_MULT = (LC_TD_REAL)1;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3350UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)1))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.7;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3400UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)2))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.6;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3450UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)3))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.5;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3500UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)4))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.35;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3550UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)5))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.3;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3600UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)6))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0.2;
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAXCELL > (LC_TD_UDINT)3650UL))
      {
        LC_this->LC_VD_STATE = (LC_TD_USINT)(LC_this->LC_VD_STATE + (LC_TD_USINT)1);
      }
    }
    else if ((caseSelector==(LC_TD_USINT)7))
    {
      LC_this->LC_VD_MULT = (LC_TD_REAL)0;
    }
  }
}

#endif
