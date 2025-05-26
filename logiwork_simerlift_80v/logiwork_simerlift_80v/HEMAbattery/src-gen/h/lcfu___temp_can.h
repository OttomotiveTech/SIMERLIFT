#ifndef LC_PROT_LCFU___TEMP_CAN__H
#define LC_PROT_LCFU___TEMP_CAN__H

#include <LC3CGBase.h>
#include <lcfu___lineer_function.h>
#include <lcfu_iec61131__CONVERT.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_TEMP_CAN
{
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_USINT LC_VD_CAN;
  LC_TD_USINT LC_VD___2_TO_USINT;
  LC_TD_FunctionBlock_LINEER_FUNCTION LC_VD_LINEER_FUNCTION1;
} LCCG_StructAttrib LC_TD_FunctionBlock_TEMP_CAN;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_TEMP_CAN(p) \
{ \
  (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_CAN = (LC_TD_USINT)0; \
  LC_INIT_FunctionBlock_LINEER_FUNCTION(&((p)->LC_VD_LINEER_FUNCTION1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_TEMP_CAN(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CAN = (LC_TD_USINT)0; \
  LC_WINIT_FunctionBlock_LINEER_FUNCTION(&((p)->LC_VD_LINEER_FUNCTION1),0); \
}

/*                            Prototype                        */
void  lcfu___TEMP_CAN(LC_TD_FunctionBlock_TEMP_CAN* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
