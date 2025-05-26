#ifndef LC_PROT_LCFU___FMAXSINT__H
#define LC_PROT_LCFU___FMAXSINT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_FMAXSINT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_SINT LC_VD_MAX;
} LCCG_StructAttrib LC_TD_Function_FMAXSINT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_FMAXSINT(p) \
{ \
  LC_INIT_SINT(&((p)->LC_VD_MAX)); \
}

/*                            Prototype                        */
void  lcfu___FMAXSINT(LC_TD_Function_FMAXSINT* LC_this, LC_TD_SINT LC_VD_ARR[16], LC_TD_USINT LC_VD_SIZEOF, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
