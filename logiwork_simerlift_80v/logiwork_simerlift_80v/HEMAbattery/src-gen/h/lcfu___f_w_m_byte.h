#ifndef LC_PROT_LCFU___F_W_M_BYTE__H
#define LC_PROT_LCFU___F_W_M_BYTE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_F_W_M_BYTE
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_BYTE LC_VD_VAL;
  LC_TD_UDINT LC_VD_ADDR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OK;
  LC_TD_UDINT LC_VD_NXT;
  LC_TD_UDINT LC_VD_RET;
  LC_TD_BOOL LC_VD_PENDING;
  LC_TD_BOOL LC_VD_R_M;
  LC_TD_UINT LC_VD_ID;
  LC_TD_UINT LC_VD_STATE;
  LC_TD_TIME LC_VD_STARTT;
} LCCG_StructAttrib LC_TD_FunctionBlock_F_W_M_BYTE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_F_W_M_BYTE(p) \
{ \
  LC_INIT_UDINT(&((p)->LC_VD_ADDR)); \
  LC_INIT_BYTE(&((p)->LC_VD_VAL)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_BOOL(&((p)->LC_VD_OK)); \
  LC_INIT_UDINT(&((p)->LC_VD_RET)); \
  LC_INIT_UDINT(&((p)->LC_VD_NXT)); \
  LC_INIT_TIME(&((p)->LC_VD_STARTT)); \
  LC_INIT_UINT(&((p)->LC_VD_STATE)); \
  LC_INIT_UINT(&((p)->LC_VD_ID)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
  LC_INIT_BOOL(&((p)->LC_VD_PENDING)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_F_W_M_BYTE(p,RF) \
{ \
  LC_WINIT_UDINT(&((p)->LC_VD_ADDR),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_VAL),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OK),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_RET),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_NXT),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_STARTT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_ID),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PENDING),RF); \
}

/*                            Prototype                        */
void  lcfu___F_W_M_BYTE(LC_TD_FunctionBlock_F_W_M_BYTE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
