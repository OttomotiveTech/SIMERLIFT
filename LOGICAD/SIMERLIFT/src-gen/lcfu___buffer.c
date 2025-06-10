#ifndef LC_PROT_LCFU___BUFFER__C
#define LC_PROT_LCFU___BUFFER__C

#include <lcfu___buffer.h>



/*                            FunctionBlocks                   */
void  lcfu___BUFFER(LC_TD_FunctionBlock_BUFFER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_this->LC_VD_I;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
    }
    {
      LC_this->LC_VD_TOF1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF1.LC_VD_IN = LC_this->LC_VD_TON1.LC_VD_Q;
      LC_this->LC_VD_TOF1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF1), pEPDB);
      LC_this->LC_VD_O = LC_this->LC_VD_TOF1.LC_VD_Q;
    }
  }
}

#endif
