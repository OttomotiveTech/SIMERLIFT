#ifndef LC_PROT_LCFU___WBUF_BYTE__H
#define LC_PROT_LCFU___WBUF_BYTE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_WBUF_BYTE
{
  LC_TD_BYTE LC_VD_PRM;
  LC_TD_BYTE (* LC_VD_BUF);
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BYTE (* LC_VD_NXT);
  LC_TD_BYTE (* LC_VD_RET);
} LCCG_StructAttrib LC_TD_FunctionBlock_WBUF_BYTE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_WBUF_BYTE(p) \
{ \
  LC_INIT_PTR(&((p)->LC_VD_BUF)); \
  LC_INIT_BYTE(&((p)->LC_VD_PRM)); \
  LC_INIT_PTR(&((p)->LC_VD_RET)); \
  LC_INIT_PTR(&((p)->LC_VD_NXT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_WBUF_BYTE(p,RF) \
{ \
  LC_WINIT_PTR(&((p)->LC_VD_BUF),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_PRM),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_RET),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_NXT),RF); \
}

/*                            Prototype                        */
void  lcfu___WBUF_BYTE(LC_TD_FunctionBlock_WBUF_BYTE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
