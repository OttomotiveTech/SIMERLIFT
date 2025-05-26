#ifndef LC_PROT_LCFU___SAFETY_POWER__H
#define LC_PROT_LCFU___SAFETY_POWER__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SAFETY_POWER
{
  LC_TD_BOOL LC_VD_ENDRV;
  LC_TD_BOOL LC_VD_EN_VSOUT1;
  LC_TD_BOOL LC_VD_SLEEP_RDY;
  LC_TD_TIME LC_VD_WD_PER;
  LC_TD_BOOL LC_VD_DRV_STAT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_VSOUT1_STAT;
  LC_TD_BOOL LC_VD_WD_FAIL;
  LC_TD_BYTE LC_VD_DEV_STATE;
} LCCG_StructAttrib LC_TD_FunctionBlock_SAFETY_POWER;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_SAFETY_POWER(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_EN_VSOUT1)); \
  LC_INIT_BOOL(&((p)->LC_VD_ENDRV)); \
  LC_INIT_TIME(&((p)->LC_VD_WD_PER)); \
  LC_INIT_BOOL(&((p)->LC_VD_SLEEP_RDY)); \
  LC_INIT_BYTE(&((p)->LC_VD_DEV_STATE)); \
  LC_INIT_BOOL(&((p)->LC_VD_DRV_STAT)); \
  LC_INIT_BOOL(&((p)->LC_VD_VSOUT1_STAT)); \
  LC_INIT_BOOL(&((p)->LC_VD_WD_FAIL)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_SAFETY_POWER(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_EN_VSOUT1),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ENDRV),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_WD_PER),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_SLEEP_RDY),RF); \
  LC_WINIT_BYTE(&((p)->LC_VD_DEV_STATE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_DRV_STAT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VSOUT1_STAT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_WD_FAIL),RF); \
}

/*                            Prototype                        */
void  lcfu___SAFETY_POWER(LC_TD_FunctionBlock_SAFETY_POWER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
