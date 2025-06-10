#ifndef LC_PROT_LCFU___IOWR__H
#define LC_PROT_LCFU___IOWR__H

#include <LC3CGBase.h>
#include <lcdt___tms570_gio.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_IOWR
{
  LC_TD_BOOL LC_VD_VAL;
  LC_TD_UINT LC_VD_PIN;
  LC_TD_DataType_TMS570_GIO LC_VD_PORT;
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_FunctionBlock_IOWR;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_IOWR(p) \
{ \
  LC_INIT_DataType_TMS570_GIO(&((p)->LC_VD_PORT)); \
  LC_INIT_UINT(&((p)->LC_VD_PIN)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_IOWR(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_GIO(&((p)->LC_VD_PORT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PIN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL),RF); \
}

/*                            Prototype                        */
void  lcfu___IOWR(LC_TD_FunctionBlock_IOWR* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
