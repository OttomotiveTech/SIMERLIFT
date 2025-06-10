#ifndef LC_PROT_LCFU___SOCISZ__H
#define LC_PROT_LCFU___SOCISZ__H

#include <LC3CGBase.h>
#include <lcfu___fmemw_real.h>
#include <lcfu___rmem_real.h>
#include <lcfu___socstate.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SOCISZ
{
  LC_TD_BOOL LC_VD_CHARGECOMPLETED;
  LC_TD_BOOL LC_VD_MEMORYWRITE;
  LC_TD_REAL LC_VD_CAPACITYWH;
  LC_TD_REAL LC_VD_INSTANTWH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_REAL LC_VD_REMAININGWH;
  LC_TD_REAL LC_VD_SOC;
  LC_TD_REAL LC_VD_MEMREADWH;
  LC_TD_FunctionBlock_FMEMW_REAL LC_VD_FMEMW_REAL1;
  LC_TD_FunctionBlock_RMEM_REAL LC_VD_RMEM_REAL1;
  LC_TD_FunctionBlock_SOCSTATE LC_VD_SOCSTATE1;
} LCCG_StructAttrib LC_TD_FunctionBlock_SOCISZ;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SOCISZ(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_CAPACITYWH)); \
  LC_INIT_REAL(&((p)->LC_VD_INSTANTWH)); \
  LC_INIT_BOOL(&((p)->LC_VD_CHARGECOMPLETED)); \
  LC_INIT_BOOL(&((p)->LC_VD_MEMORYWRITE)); \
  LC_INIT_REAL(&((p)->LC_VD_SOC)); \
  LC_INIT_REAL(&((p)->LC_VD_REMAININGWH)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
  LC_INIT_FunctionBlock_SOCSTATE(&((p)->LC_VD_SOCSTATE1)); \
  LC_INIT_FunctionBlock_RMEM_REAL(&((p)->LC_VD_RMEM_REAL1)); \
  LC_INIT_REAL(&((p)->LC_VD_MEMREADWH)); \
  LC_INIT_FunctionBlock_FMEMW_REAL(&((p)->LC_VD_FMEMW_REAL1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SOCISZ(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_CAPACITYWH),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_INSTANTWH),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CHARGECOMPLETED),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_MEMORYWRITE),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_SOC),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_REMAININGWH),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_FunctionBlock_SOCSTATE(&((p)->LC_VD_SOCSTATE1),0); \
  LC_WINIT_FunctionBlock_RMEM_REAL(&((p)->LC_VD_RMEM_REAL1),0); \
  LC_WINIT_REAL(&((p)->LC_VD_MEMREADWH),RF); \
  LC_WINIT_FunctionBlock_FMEMW_REAL(&((p)->LC_VD_FMEMW_REAL1),0); \
}

/*                            Prototype                        */
void  lcfu___SOCISZ(LC_TD_FunctionBlock_SOCISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
