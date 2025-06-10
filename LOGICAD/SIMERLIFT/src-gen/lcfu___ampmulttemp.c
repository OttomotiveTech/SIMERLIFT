#ifndef LC_PROT_LCFU___AMPMULTTEMP__C
#define LC_PROT_LCFU___AMPMULTTEMP__C

#include <lcfu___ampmulttemp.h>



/*                            FunctionBlocks                   */
void  lcfu___AMPMULTTEMP(LC_TD_FunctionBlock_AMPMULTTEMP* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)-20))
  {
    LC_this->LC_VD_MULT = (LC_TD_REAL)0;
    LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0;
  }
  else
  {
    if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)-15))
    {
      LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.1;
    }
    else
    {
      if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)-10))
      {
        LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.15;
      }
      else
      {
        if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)-5))
        {
          LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.2;
        }
        else
        {
          if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)0))
          {
            LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.4;
          }
          else
          {
            if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)5))
            {
              LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.5;
            }
            else
            {
              if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)10))
              {
                LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.7;
              }
              else
              {
                if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)50))
                {
                  LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)1;
                }
                else
                {
                  if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)55))
                  {
                    LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.4;
                  }
                  else
                  {
                    if ((LC_TD_BOOL)(LC_this->LC_VD_TEMP < (LC_TD_REAL)56))
                    {
                      LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0.2;
                    }
                    else
                    {
                      LC_this->LC_VD_MULT = (LC_TD_REAL)0;
                      LC_this->LC_VD_INSTANTMULT = (LC_TD_REAL)0;
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
  {
    LC_this->LC_VD_RSTTIMER.LC_VD_ENO = LC_EL_true;
    LC_this->LC_VD_RSTTIMER.LC_VD_IN = (LC_TD_BOOL)(LC_this->LC_VD_INSTANTMULT == LC_this->LC_VD_LASTMULT);
    LC_this->LC_VD_RSTTIMER.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(10),RT_CC_CONST_LL(0));
    lcfu_iec61131__TON(&(LC_this->LC_VD_RSTTIMER), pEPDB);
    LC_this->LC_VD_TIMEOUT = LC_this->LC_VD_RSTTIMER.LC_VD_Q;
  }
  LC_this->LC_VD_LASTMULT = LC_this->LC_VD_INSTANTMULT;
  if (LC_this->LC_VD_TIMEOUT)
  {
    LC_this->LC_VD_MULT = LC_this->LC_VD_INSTANTMULT;
  }
}

#endif
