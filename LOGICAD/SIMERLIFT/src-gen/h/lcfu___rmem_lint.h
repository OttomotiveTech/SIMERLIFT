#ifndef LC_PROT_LCFU___RMEM_LINT__H
#define LC_PROT_LCFU___RMEM_LINT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_RMEM_LINT
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_UDINT LC_VD_ADDR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_NXT;
  LC_TD_LINT LC_VD_VAL;
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_RMEM_LINT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_RMEM_LINT(p) \
{ \
  LC_INIT_UDINT(&((p)->LC_VD_ADDR)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_LINT(&((p)->LC_VD_VAL)); \
  LC_INIT_UDINT(&((p)->LC_VD_NXT)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_RMEM_LINT(p,RF) \
{ \
  LC_WINIT_UDINT(&((p)->LC_VD_ADDR),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_LINT(&((p)->LC_VD_VAL),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_NXT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
}

/*                            Prototype                        */
void  lcfu___RMEM_LINT(LC_TD_FunctionBlock_RMEM_LINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
