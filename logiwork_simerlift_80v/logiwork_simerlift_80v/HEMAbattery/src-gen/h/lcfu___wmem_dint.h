#ifndef LC_PROT_LCFU___WMEM_DINT__H
#define LC_PROT_LCFU___WMEM_DINT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_WMEM_DINT
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_DINT LC_VD_VAL;
  LC_TD_UDINT LC_VD_ADDR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OK;
  LC_TD_UDINT LC_VD_NXT;
  LC_TD_UDINT LC_VD_RET;
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_WMEM_DINT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_WMEM_DINT(p) \
{ \
  LC_INIT_UDINT(&((p)->LC_VD_ADDR)); \
  LC_INIT_DINT(&((p)->LC_VD_VAL)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_BOOL(&((p)->LC_VD_OK)); \
  LC_INIT_UDINT(&((p)->LC_VD_RET)); \
  LC_INIT_UDINT(&((p)->LC_VD_NXT)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_WMEM_DINT(p,RF) \
{ \
  LC_WINIT_UDINT(&((p)->LC_VD_ADDR),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_VAL),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OK),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_RET),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_NXT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
}

/*                            Prototype                        */
void  lcfu___WMEM_DINT(LC_TD_FunctionBlock_WMEM_DINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
