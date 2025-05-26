#ifndef LC_PROT_LCFU___BTTDIAG__C
#define LC_PROT_LCFU___BTTDIAG__C

#include <lcfu___bttdiag.h>



/*                            FunctionBlocks                   */
void  lcfu___BTTDIAG(LC_TD_FunctionBlock_BTTDIAG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_DIAG = (LC_TD_BYTE)0;
  if (LC_this->LC_VD_IN)
  {
    if ((LC_TD_BOOL)(LC_this->LC_VD_IOUT < LC_this->LC_VD_IMIN))
    {
      LC_this->LC_VD_DIAG = (LC_TD_BYTE)1;
    }
    else
    {
      if ((LC_TD_BOOL)(LC_this->LC_VD_IOUT > LC_this->LC_VD_IMAX))
      {
        LC_this->LC_VD_DIAG = (LC_TD_BYTE)2;
      }
    }
  }
  else
  {
    if ((LC_TD_BOOL)(LC_this->LC_VD_IOUT > LC_this->LC_VD_IMIN))
    {
      LC_this->LC_VD_DIAG = (LC_TD_BYTE)3;
    }
  }
}

#endif
