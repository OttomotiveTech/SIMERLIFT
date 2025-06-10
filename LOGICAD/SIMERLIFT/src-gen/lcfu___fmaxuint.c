#ifndef LC_PROT_LCFU___FMAXUINT__C
#define LC_PROT_LCFU___FMAXUINT__C

#include <lcfu___fmaxuint.h>
#include <LC3CGStmtFor.h>

/*                            Functions                        */
void  lcfu___FMAXUINT(LC_TD_Function_FMAXUINT* LC_this, LC_TD_UINT LC_VD_ARR[16], LC_TD_USINT LC_VD_SIZEOF, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_TD_USINT LC_VD_I;
  LC_INIT_USINT(&(LC_VD_I));
  LC_this->LC_VD_MAX = (LC_TD_UINT)0;
  {
    LC3_MST_FOR(LC_VD_I, (LC_TD_USINT)1, LC_VD_SIZEOF, (LC_TD_USINT)1,USINT, USINT);
    {
      if ((LC_TD_BOOL)(LC_this->LC_VD_MAX < LC_SUBSCRIPT_ARRAY(LC_VD_ARR,(LC_TD_USINT)(LC_VD_I - (LC_TD_USINT)1),(LC_TD_DINT)0,(LC_TD_DINT)15)))
      {
        LC_this->LC_VD_MAX = LC_SUBSCRIPT_ARRAY(LC_VD_ARR,(LC_TD_USINT)(LC_VD_I - (LC_TD_USINT)1),(LC_TD_DINT)0,(LC_TD_DINT)15);
      }
    }
    LC3_MST_FOR_END(LC_VD_I, (LC_TD_USINT)1,LC_VD_SIZEOF, (LC_TD_USINT)1, USINT, USINT);
  }
}

#endif
