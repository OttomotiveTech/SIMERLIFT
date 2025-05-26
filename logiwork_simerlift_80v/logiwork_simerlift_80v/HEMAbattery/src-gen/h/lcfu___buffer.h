#ifndef LC_PROT_LCFU___BUFFER__H
#define LC_PROT_LCFU___BUFFER__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__TOF.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BUFFER
{
  LC_TD_BOOL LC_VD_I;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_O;
  LC_TD_FunctionBlock_TOF LC_VD_TOF1;
  LC_TD_FunctionBlock_TON LC_VD_TON1;
} LCCG_StructAttrib LC_TD_FunctionBlock_BUFFER;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BUFFER(p) \
{ \
  (p)->LC_VD_I = LC_EL_false; \
  (p)->LC_VD_O = LC_EL_false; \
  LC_INIT_FunctionBlock_TOF(&((p)->LC_VD_TOF1)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BUFFER(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_I = LC_EL_false; \
  if (RF==0) (p)->LC_VD_O = LC_EL_false; \
  LC_WINIT_FunctionBlock_TOF(&((p)->LC_VD_TOF1),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON1),0); \
}

/*                            Prototype                        */
void  lcfu___BUFFER(LC_TD_FunctionBlock_BUFFER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
