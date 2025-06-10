#ifndef LC_PROT_LCFU___SOCISZ__C
#define LC_PROT_LCFU___SOCISZ__C

#include <lcfu___socisz.h>



/*                            FunctionBlocks                   */
void  lcfu___SOCISZ(LC_TD_FunctionBlock_SOCISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_SOCSTATE1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SOCSTATE1.LC_VD_WHCAP = LC_this->LC_VD_CAPACITYWH;
      LC_this->LC_VD_SOCSTATE1.LC_VD_WHINSTANT = LC_this->LC_VD_INSTANTWH;
      LC_this->LC_VD_SOCSTATE1.LC_VD_WHMEM = LC_this->LC_VD_MEMREADWH;
      LC_this->LC_VD_SOCSTATE1.LC_VD_CHARGECOMPLETE = LC_this->LC_VD_CHARGECOMPLETED;
      LC_this->LC_VD_SOCSTATE1.LC_VD_MEMWR = LC_this->LC_VD_MEMORYWRITE;
      lcfu___SOCSTATE(&(LC_this->LC_VD_SOCSTATE1), pEPDB);
      LC_this->LC_VD_SOC = LC_this->LC_VD_SOCSTATE1.LC_VD_SOC;
      LC_this->LC_VD_REMAININGWH = LC_this->LC_VD_SOCSTATE1.LC_VD_WHREM;
      LC_this->LC_VD_STATE = LC_this->LC_VD_SOCSTATE1.LC_VD_SOCSTATE;
    }
    {
      LC_this->LC_VD_FMEMW_REAL1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FMEMW_REAL1.LC_VD_ADDR = (LC_TD_UDINT)256UL;
      LC_this->LC_VD_FMEMW_REAL1.LC_VD_VAL = LC_this->LC_VD_SOCSTATE1.LC_VD_WHREM;
      LC_this->LC_VD_FMEMW_REAL1.LC_VD_R = LC_this->LC_VD_SOCSTATE1.LC_VD_WRWH;
      lcfu___FMEMW_REAL(&(LC_this->LC_VD_FMEMW_REAL1), pEPDB);
    }
    {
      LC_this->LC_VD_RMEM_REAL1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_RMEM_REAL1.LC_VD_ADDR = (LC_TD_UDINT)256UL;
      LC_this->LC_VD_RMEM_REAL1.LC_VD_R = LC_this->LC_VD_SOCSTATE1.LC_VD_RDWH;
      lcfu___RMEM_REAL(&(LC_this->LC_VD_RMEM_REAL1), pEPDB);
      LC_this->LC_VD_MEMREADWH = LC_this->LC_VD_RMEM_REAL1.LC_VD_VAL;
    }
  }
}

#endif
