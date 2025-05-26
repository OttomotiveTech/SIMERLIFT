#ifndef LC_PROT_LCFU___AVG__H
#define LC_PROT_LCFU___AVG__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__MUL.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AVG
{
  LC_TD_LREAL LC_VD_IN;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LREAL LC_VD_OUT;
  LC_TD_LREAL LC_VD_OUT_BUFF;
  LC_TD_LREAL LC_VD___4_MUL;
  LC_TD_LREAL LC_VD___6_ADD;
  LC_TD_LREAL LC_VD___9_MUL;
} LCCG_StructAttrib LC_TD_FunctionBlock_AVG;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AVG(p) \
{ \
  (p)->LC_VD_IN = (LC_TD_LREAL)0; \
  (p)->LC_VD_OUT = (LC_TD_LREAL)0; \
  (p)->LC_VD_OUT_BUFF = (LC_TD_LREAL)0; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AVG(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_IN = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_OUT = (LC_TD_LREAL)0; \
  if (RF==0) (p)->LC_VD_OUT_BUFF = (LC_TD_LREAL)0; \
}

/*                            Prototype                        */
void  lcfu___AVG(LC_TD_FunctionBlock_AVG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
