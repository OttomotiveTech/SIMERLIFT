#ifndef LC_PROT_LCFU___CURRENT__H
#define LC_PROT_LCFU___CURRENT__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__GE.h>
#include <lcfu_iec61131__LT.h>
#include <lcfu_iec61131__MUL.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CURRENT
{
  LC_TD_REAL LC_VD_CURRENT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_CHARGE_CURRENT;
  LC_TD_UINT LC_VD_DISCHARGE_CURRENT;
  LC_TD_BOOL LC_VD___11_GE;
  LC_TD_BOOL LC_VD___15_LT;
  LC_TD_UINT LC_VD___24_TO_UINT;
  LC_TD_UINT LC_VD___31_TO_UINT;
  LC_TD_REAL LC_VD___2_DIV;
  LC_TD_REAL LC_VD___19_SEL_REAL;
  LC_TD_REAL LC_VD___27_SEL_REAL;
  LC_TD_REAL LC_VD___34_MUL;
} LCCG_StructAttrib LC_TD_FunctionBlock_CURRENT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CURRENT(p) \
{ \
  (p)->LC_VD_CURRENT = (LC_TD_REAL)0; \
  (p)->LC_VD_CHARGE_CURRENT = (LC_TD_UINT)0; \
  (p)->LC_VD_DISCHARGE_CURRENT = (LC_TD_UINT)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CURRENT(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CURRENT = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CHARGE_CURRENT = (LC_TD_UINT)0; \
  if (RF==0) (p)->LC_VD_DISCHARGE_CURRENT = (LC_TD_UINT)0; \
}

/*                            Prototype                        */
void  lcfu___CURRENT(LC_TD_FunctionBlock_CURRENT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
