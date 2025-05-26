#ifndef LC_PROT_LCFU___COUNTIM__H
#define LC_PROT_LCFU___COUNTIM__H

#include <LC3CGBase.h>
#include <lcfu___flash.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CTUD.h>
#include <lcfu_iec61131__NOT.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_COUNTIM
{
  LC_TD_BOOL LC_VD_CD;
  LC_TD_BOOL LC_VD_CU;
  LC_TD_INT LC_VD_PV;
  LC_TD_TIME LC_VD_ACCPER;
  LC_TD_TIME LC_VD_DECPER;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_QD;
  LC_TD_BOOL LC_VD_QU;
  LC_TD_INT LC_VD_CV;
  LC_TD_BOOL LC_VD___66_AND;
  LC_TD_BOOL LC_VD___68_AND;
  LC_TD_FunctionBlock_CTUD LC_VD_CTUD3;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH7;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH8;
} LCCG_StructAttrib LC_TD_FunctionBlock_COUNTIM;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_COUNTIM(p) \
{ \
  LC_INIT_TIME(&((p)->LC_VD_ACCPER)); \
  LC_INIT_TIME(&((p)->LC_VD_DECPER)); \
  LC_INIT_BOOL(&((p)->LC_VD_CU)); \
  LC_INIT_BOOL(&((p)->LC_VD_CD)); \
  LC_INIT_INT(&((p)->LC_VD_PV)); \
  LC_INIT_INT(&((p)->LC_VD_CV)); \
  LC_INIT_BOOL(&((p)->LC_VD_QU)); \
  LC_INIT_BOOL(&((p)->LC_VD_QD)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH7)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH8)); \
  LC_INIT_FunctionBlock_CTUD(&((p)->LC_VD_CTUD3)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_COUNTIM(p,RF) \
{ \
  LC_WINIT_TIME(&((p)->LC_VD_ACCPER),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_DECPER),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CU),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_CD),RF); \
  LC_WINIT_INT(&((p)->LC_VD_PV),RF); \
  LC_WINIT_INT(&((p)->LC_VD_CV),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_QU),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_QD),RF); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH7),0); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH8),0); \
  LC_WINIT_FunctionBlock_CTUD(&((p)->LC_VD_CTUD3),0); \
}

/*                            Prototype                        */
void  lcfu___COUNTIM(LC_TD_FunctionBlock_COUNTIM* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
