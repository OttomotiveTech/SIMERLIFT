#ifndef LC_PROT_LCFU___GUICFG_INTARR__H
#define LC_PROT_LCFU___GUICFG_INTARR__H

#include <LC3CGBase.h>
#include <lcdt___guicfgcode.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_GUICFG_INTARR
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_UDINT LC_VD_MAX;
  LC_TD_BYTE (* LC_VD_BUF);
  LC_TD_DataType_GUICFGCODE LC_VD_CODE;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_LEN;
  LC_TD_BYTE (* LC_VD_ARR);
  LC_TD_BOOL LC_VD_R_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_GUICFG_INTARR;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_GUICFG_INTARR(p) \
{ \
  LC_INIT_DataType_GUICFGCODE(&((p)->LC_VD_CODE)); \
  LC_INIT_PTR(&((p)->LC_VD_BUF)); \
  LC_INIT_UDINT(&((p)->LC_VD_MAX)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_PTR(&((p)->LC_VD_ARR)); \
  LC_INIT_UDINT(&((p)->LC_VD_LEN)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_GUICFG_INTARR(p,RF) \
{ \
  LC_WINIT_DataType_GUICFGCODE(&((p)->LC_VD_CODE),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_BUF),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_MAX),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_PTR(&((p)->LC_VD_ARR),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_LEN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
}

/*                            Prototype                        */
void  lcfu___GUICFG_INTARR(LC_TD_FunctionBlock_GUICFG_INTARR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
