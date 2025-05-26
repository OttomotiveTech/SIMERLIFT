#ifndef LC_PROT_LCFU___ISABELINIT__H
#define LC_PROT_LCFU___ISABELINIT__H

#include <LC3CGBase.h>
#include <lcdt___tms570_can.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_ISABELINIT
{
  LC_TD_BOOL LC_VD_ENB;
  LC_TD_DataType_TMS570_CAN LC_VD_CH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_INT LC_VD_ERR;
  LC_TD_UINT LC_VD_STAT;
  LC_TD_UINT LC_VD_TRY;
} LCCG_StructAttrib LC_TD_FunctionBlock_ISABELINIT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_ISABELINIT(p) \
{ \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH)); \
  LC_INIT_BOOL(&((p)->LC_VD_ENB)); \
  LC_INIT_INT(&((p)->LC_VD_ERR)); \
  LC_INIT_UINT(&((p)->LC_VD_STAT)); \
  LC_INIT_UINT(&((p)->LC_VD_TRY)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_ISABELINIT(p,RF) \
{ \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_ENB),RF); \
  LC_WINIT_INT(&((p)->LC_VD_ERR),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_STAT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_TRY),RF); \
}

/*                            Prototype                        */
void  lcfu___ISABELINIT(LC_TD_FunctionBlock_ISABELINIT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
