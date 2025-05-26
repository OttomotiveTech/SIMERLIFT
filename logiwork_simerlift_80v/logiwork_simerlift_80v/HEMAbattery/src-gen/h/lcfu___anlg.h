#ifndef LC_PROT_LCFU___ANLG__H
#define LC_PROT_LCFU___ANLG__H

#include <LC3CGBase.h>
#include <lcdt___tmsadc.h>
#include <lcdt___tmsadcgrp.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_ANLG
{
  LC_TD_USINT LC_VD_CH;
  LC_TD_DataType_TMSADC LC_VD_ADC;
  LC_TD_DataType_TMSADCGRP LC_VD_GRP;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_VAL;
} LCCG_StructAttrib LC_TD_FunctionBlock_ANLG;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_ANLG(p) \
{ \
  LC_INIT_DataType_TMSADC(&((p)->LC_VD_ADC)); \
  LC_INIT_DataType_TMSADCGRP(&((p)->LC_VD_GRP)); \
  LC_INIT_USINT(&((p)->LC_VD_CH)); \
  LC_INIT_UINT(&((p)->LC_VD_VAL)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_ANLG(p,RF) \
{ \
  LC_WINIT_DataType_TMSADC(&((p)->LC_VD_ADC),RF); \
  LC_WINIT_DataType_TMSADCGRP(&((p)->LC_VD_GRP),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_CH),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_VAL),RF); \
}

/*                            Prototype                        */
void  lcfu___ANLG(LC_TD_FunctionBlock_ANLG* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
