#ifndef LC_PROT_LCFU___IORD__H
#define LC_PROT_LCFU___IORD__H

#include <LC3CGBase.h>
#include <lcdt___tms570_gio.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_IORD
{
  LC_TD_UINT LC_VD_PIN;
  LC_TD_DataType_TMS570_GIO LC_VD_PORT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_OUT;
} LCCG_StructAttrib LC_TD_FunctionBlock_IORD;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_IORD(p) \
{ \
  LC_INIT_DataType_TMS570_GIO(&((p)->LC_VD_PORT)); \
  LC_INIT_UINT(&((p)->LC_VD_PIN)); \
  LC_INIT_BOOL(&((p)->LC_VD_OUT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_IORD(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_GIO(&((p)->LC_VD_PORT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PIN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OUT),RF); \
}

/*                            Prototype                        */
void  lcfu___IORD(LC_TD_FunctionBlock_IORD* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
