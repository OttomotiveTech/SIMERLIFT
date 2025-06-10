#ifndef LC_PROT_LCFU___WBUF_UDINT__H
#define LC_PROT_LCFU___WBUF_UDINT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_WBUF_UDINT
{
  LC_TD_UDINT LC_VD_PRM;
  LC_TD_BYTE (* LC_VD_BUF);
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BYTE (* LC_VD_NXT);
  LC_TD_BYTE (* LC_VD_RET);
} LCCG_StructAttrib LC_TD_FunctionBlock_WBUF_UDINT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_WBUF_UDINT(p) \
{ \
  LC_INIT_PTR(&((p)->LC_VD_BUF)); \
  LC_INIT_UDINT(&((p)->LC_VD_PRM)); \
  LC_INIT_PTR(&((p)->LC_VD_RET)); \
  LC_INIT_PTR(&((p)->LC_VD_NXT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_WBUF_UDINT(p,RF) \
{ \
  LC_WINIT_PTR(&((p)->LC_VD_BUF),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_PRM),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_RET),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_NXT),RF); \
}

/*                            Prototype                        */
void  lcfu___WBUF_UDINT(LC_TD_FunctionBlock_WBUF_UDINT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
