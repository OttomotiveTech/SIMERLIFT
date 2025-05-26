#ifndef LC_PROT_LCFU___DEMUX_2__C
#define LC_PROT_LCFU___DEMUX_2__C

#include <lcfu___demux_2.h>



/*                            FunctionBlocks                   */
void  lcfu___DEMUX_2(LC_TD_FunctionBlock_DEMUX_2* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_SELECT, LC_EL_false, pEPDB);
      LC_this->LC_VD___11_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_SEL_UDINT lFunction_SEL_UDINT;
      LC_INIT_Function_SEL_UDINT(&lFunction_SEL_UDINT);
      lFunction_SEL_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_UDINT(&lFunction_SEL_UDINT, LC_this->LC_VD___11_EQ, (LC_TD_UDINT)0UL, LC_this->LC_VD_IN, pEPDB);
      LC_this->LC_VD_OUT_0 = lFunction_SEL_UDINT.LC_VD_SEL_UDINT;
      LC_this->LC_VD___42_SEL_UDINT = lFunction_SEL_UDINT.LC_VD_SEL_UDINT;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_SELECT, LC_EL_true, pEPDB);
      LC_this->LC_VD___14_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_SEL_UDINT lFunction_SEL_UDINT;
      LC_INIT_Function_SEL_UDINT(&lFunction_SEL_UDINT);
      lFunction_SEL_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL_UDINT(&lFunction_SEL_UDINT, LC_this->LC_VD___14_EQ, (LC_TD_UDINT)0UL, LC_this->LC_VD_IN, pEPDB);
      LC_this->LC_VD_OUT_1 = lFunction_SEL_UDINT.LC_VD_SEL_UDINT;
      LC_this->LC_VD___48_SEL_UDINT = lFunction_SEL_UDINT.LC_VD_SEL_UDINT;
    }
  }
}

#endif
