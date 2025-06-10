#ifndef LC_PROT_LCFU___DEMUX_8__H
#define LC_PROT_LCFU___DEMUX_8__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__EQ.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_DEMUX_8
{
  LC_TD_BYTE LC_VD_SELECT;
  LC_TD_UDINT LC_VD_IN;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_OUT_0;
  LC_TD_UDINT LC_VD_OUT_1;
  LC_TD_UDINT LC_VD_OUT_2;
  LC_TD_UDINT LC_VD_OUT_3;
  LC_TD_UDINT LC_VD_OUT_4;
  LC_TD_UDINT LC_VD_OUT_5;
  LC_TD_UDINT LC_VD_OUT_6;
  LC_TD_UDINT LC_VD_OUT_7;
  LC_TD_BOOL LC_VD___11_EQ;
  LC_TD_BOOL LC_VD___14_EQ;
  LC_TD_BOOL LC_VD___18_EQ;
  LC_TD_BOOL LC_VD___21_EQ;
  LC_TD_BOOL LC_VD___24_EQ;
  LC_TD_BOOL LC_VD___27_EQ;
  LC_TD_BOOL LC_VD___30_EQ;
  LC_TD_BOOL LC_VD___33_EQ;
  LC_TD_UDINT LC_VD___42_SEL_UDINT;
  LC_TD_UDINT LC_VD___48_SEL_UDINT;
  LC_TD_UDINT LC_VD___53_SEL_UDINT;
  LC_TD_UDINT LC_VD___54_SEL_UDINT;
  LC_TD_UDINT LC_VD___63_SEL_UDINT;
  LC_TD_UDINT LC_VD___64_SEL_UDINT;
  LC_TD_UDINT LC_VD___65_SEL_UDINT;
  LC_TD_UDINT LC_VD___66_SEL_UDINT;
} LCCG_StructAttrib LC_TD_FunctionBlock_DEMUX_8;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_DEMUX_8(p) \
{ \
  (p)->LC_VD_SELECT = (LC_TD_BYTE)0; \
  (p)->LC_VD_IN = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_0 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_1 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_2 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_3 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_4 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_5 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_6 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_OUT_7 = (LC_TD_UDINT)0UL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_DEMUX_8(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_SELECT = (LC_TD_BYTE)0; \
  if (RF==0) (p)->LC_VD_IN = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_0 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_1 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_2 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_3 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_4 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_5 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_6 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_OUT_7 = (LC_TD_UDINT)0UL; \
}

/*                            Prototype                        */
void  lcfu___DEMUX_8(LC_TD_FunctionBlock_DEMUX_8* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
