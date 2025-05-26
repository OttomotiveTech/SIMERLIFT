#ifndef LC_PROT_LCFU___FMAXUINT__H
#define LC_PROT_LCFU___FMAXUINT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_FMAXUINT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_MAX;
} LCCG_StructAttrib LC_TD_Function_FMAXUINT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_FMAXUINT(p) \
{ \
  LC_INIT_UINT(&((p)->LC_VD_MAX)); \
}

/*                            Prototype                        */
void  lcfu___FMAXUINT(LC_TD_Function_FMAXUINT* LC_this, LC_TD_UINT LC_VD_ARR[16], LC_TD_USINT LC_VD_SIZEOF, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
