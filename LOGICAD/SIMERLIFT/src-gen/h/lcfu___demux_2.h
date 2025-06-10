#ifndef LC_PROT_LCFU___DEMUX_2__H
#define LC_PROT_LCFU___DEMUX_2__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__EQ.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DEMUX_2
{
  LC_TD_BOOL LC_VD_SELECT;
  LC_TD_UDINT LC_VD_IN;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_OUT_0;
  LC_TD_UDINT LC_VD_OUT_1;
  LC_TD_BOOL LC_VD___11_EQ;
  LC_TD_BOOL LC_VD___14_EQ;
  LC_TD_UDINT LC_VD___42_SEL_UDINT;
  LC_TD_UDINT LC_VD___48_SEL_UDINT;
} LCCG_StructAttrib LC_TD_FunctionBlock_DEMUX_2;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DEMUX_2(p) \
{ \
  (p)->LC_VD_SELECT = LC_EL_false; \
  (p)->LC_VD_IN = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_0 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_1 = (LC_TD_UDINT)0UL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DEMUX_2(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_SELECT = LC_EL_false; \
  if (RF==0) (p)->LC_VD_IN = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_0 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_1 = (LC_TD_UDINT)0UL; \
}

/*                            Prototype                        */
void  lcfu___DEMUX_2(LC_TD_FunctionBlock_DEMUX_2* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
