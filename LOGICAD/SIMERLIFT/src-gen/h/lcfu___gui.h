#ifndef LC_PROT_LCFU___GUI__H
#define LC_PROT_LCFU___GUI__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcdt___tms570_can.h>
#include <lcfu___bamtx.h>
#include <lcfu___battstackinfo.h>
#include <lcfu___canrecv.h>
#include <lcfu___rbit.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__ENDIAN.h>
#include <lcfu_iec61131__EQ.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__TP.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_GUI
{
  LC_TD_USINT LC_VD_ID;
  LC_TD_USINT LC_VD_SOC;
  LC_TD_USINT LC_VD_SOH;
  LC_TD_USINT LC_VD_STATE;
  LC_TD_UINT LC_VD_CYCLE;
  LC_TD_UDINT LC_VD_FAULT;
  LC_TD_REAL LC_VD_CURRENT;
  LC_TD_REAL LC_VD_HUMIDITY;
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_REAL LC_VD_VOLTAGE;
  LC_TD_DataType_TMS570_CAN LC_VD_CH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD___779_AND;
  LC_TD_BOOL LC_VD___789_EQ;
  LC_TD_BOOL LC_VD___2565_NE;
  LC_TD_SINT LC_VD___799_TO_SINT;
  LC_TD_USINT LC_VD___27_TO_USINT;
  LC_TD_USINT LC_VD___820_TO_USINT;
  LC_TD_USINT LC_VD___2558_TO_USINT;
  LC_TD_USINT LC_VD___2559_TO_USINT;
  LC_TD_UINT LC_VD___774_FROM_BIG_ENDIAN;
  LC_TD_UINT LC_VD___2560_TO_UINT;
  LC_TD_UDINT LC_VD_GUIREQCOUNT;
  LC_TD_UDINT LC_VD___2564_SEL;
  LC_TD_REAL LC_VD___12_DIV;
  LC_TD_REAL LC_VD___988_DIV;
  LC_TD_LWORD LC_VD___29_OUTBIT;
  LC_TD_LWORD LC_VD___31_OUTBIT;
  LC_TD_LWORD LC_VD___35_OUTBIT;
  LC_TD_LWORD LC_VD___36_OUTBIT;
  LC_TD_FunctionBlock_BAMTX LC_VD_BAMTX2;
  LC_TD_FunctionBlock_BATTSTACKINFO LC_VD_BATTSTACKINFO1;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV5;
  LC_TD_USINT LC_VD_TAUXCELLS[16];
  LC_TD_FunctionBlock_TP LC_VD_TP1;
} LCCG_StructAttrib LC_TD_FunctionBlock_GUI;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_GUI(p) \
{ \
  (p)->LC_VD_VOLTAGE = (LC_TD_REAL)0; \
  (p)->LC_VD_CURRENT = (LC_TD_REAL)0; \
  (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_HUMIDITY = (LC_TD_REAL)0; \
  (p)->LC_VD_FAULT = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_SOC = (LC_TD_USINT)0; \
  (p)->LC_VD_SOH = (LC_TD_USINT)0; \
  LC_INIT_UINT(&((p)->LC_VD_CYCLE)); \
  LC_INIT_USINT(&((p)->LC_VD_STATE)); \
  LC_INIT_USINT(&((p)->LC_VD_ID)); \
  LC_INIT_DataType_TMS570_CAN(&((p)->LC_VD_CH)); \
  LC_INIT_FunctionBlock_TP(&((p)->LC_VD_TP1)); \
  LC_INIT_FunctionBlock_BAMTX(&((p)->LC_VD_BAMTX2)); \
  LC_INIT_FunctionBlock_BATTSTACKINFO(&((p)->LC_VD_BATTSTACKINFO1)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV5)); \
  LC_INIT_ARRAY(&((p)->LC_VD_TAUXCELLS),USINT,16); \
  LC_INIT_ARRAY_START(&((p)->LC_VD_TAUXCELLS),LC_TD_USINT);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
  LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
  LC_INIT_ARRAY_END();\
  LC_INIT_UDINT(&((p)->LC_VD_GUIREQCOUNT)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_GUI(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_VOLTAGE = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CURRENT = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_HUMIDITY = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_FAULT = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_SOC = (LC_TD_USINT)0; \
  if (RF==0) (p)->LC_VD_SOH = (LC_TD_USINT)0; \
  LC_WINIT_UINT(&((p)->LC_VD_CYCLE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_STATE),RF); \
  LC_WINIT_USINT(&((p)->LC_VD_ID),RF); \
  LC_WINIT_DataType_TMS570_CAN(&((p)->LC_VD_CH),RF); \
  LC_WINIT_FunctionBlock_TP(&((p)->LC_VD_TP1),0); \
  LC_WINIT_FunctionBlock_BAMTX(&((p)->LC_VD_BAMTX2),0); \
  LC_WINIT_FunctionBlock_BATTSTACKINFO(&((p)->LC_VD_BATTSTACKINFO1),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV5),0); \
  if (RF==0) \
    { \
    LC_WINIT_ARRAY(&((p)->LC_VD_TAUXCELLS),USINT,16,RF); \
    LC_INIT_ARRAY_START(&((p)->LC_VD_TAUXCELLS),LC_TD_USINT);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)0);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)1);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)2);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)3);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
    LC_INIT_ARRAY_NEXTVAL((LC_TD_USINT)4);\
    LC_INIT_ARRAY_END();\
    } \
  LC_WINIT_UDINT(&((p)->LC_VD_GUIREQCOUNT),RF); \
}

/*                            Prototype                        */
void  lcfu___GUI(LC_TD_FunctionBlock_GUI* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
