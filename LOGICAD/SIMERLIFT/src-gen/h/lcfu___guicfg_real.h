#ifndef LC_PROT_LCFU___GUICFG_REAL__H
#define LC_PROT_LCFU___GUICFG_REAL__H

#include <LC3CGBase.h>
#include <lcdt___guicfgcode.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_GUICFG_REAL
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_DataType_GUICFGCODE LC_VD_CODE;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_VAL;
  LC_TD_BOOL LC_VD_R_M;
} LCCG_StructAttrib LC_TD_FunctionBlock_GUICFG_REAL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_GUICFG_REAL(p) \
{ \
  LC_INIT_DataType_GUICFGCODE(&((p)->LC_VD_CODE)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL)); \
  LC_INIT_BOOL(&((p)->LC_VD_R_M)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_GUICFG_REAL(p,RF) \
{ \
  LC_WINIT_DataType_GUICFGCODE(&((p)->LC_VD_CODE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_R_M),RF); \
}

/*                            Prototype                        */
void  lcfu___GUICFG_REAL(LC_TD_FunctionBlock_GUICFG_REAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
