#ifndef LC_PROT_LCFU___RBUF_REAL__H
#define LC_PROT_LCFU___RBUF_REAL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_RBUF_REAL
{
  LC_TD_BYTE (* LC_VD_BUF);
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_VAL;
  LC_TD_BYTE (* LC_VD_NXT);
  LC_TD_BYTE (* LC_VD_RET);
} LCCG_StructAttrib LC_TD_FunctionBlock_RBUF_REAL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_RBUF_REAL(p) \
{ \
  LC_INIT_PTR(&((p)->LC_VD_BUF)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL)); \
  LC_INIT_PTR(&((p)->LC_VD_RET)); \
  LC_INIT_PTR(&((p)->LC_VD_NXT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_RBUF_REAL(p,RF) \
{ \
  LC_WINIT_PTR(&((p)->LC_VD_BUF),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_RET),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_NXT),RF); \
}

/*                            Prototype                        */
void  lcfu___RBUF_REAL(LC_TD_FunctionBlock_RBUF_REAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
