#ifndef LC_PROT_LCFU___CMS_IVT__H
#define LC_PROT_LCFU___CMS_IVT__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___canrecv.h>
#include <lcfu___cansend.h>
#include <lcfu___rbit.h>
#include <lcfu___wbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__ENDIAN.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>
#include <lcfu_iec61131__TON.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_CMS_IVT
{
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_CMS_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_REAL LC_VD_CURRENT_COUNTER_AH;
  LC_TD_REAL LC_VD_CURRENT_MA;
  LC_TD_REAL LC_VD_POWER_COUNTER_WH;
  LC_TD_REAL LC_VD_POWER_KWH;
  LC_TD_REAL LC_VD_TEMP;
  LC_TD_REAL LC_VD_VOLTAGE1_MV;
  LC_TD_REAL LC_VD_VOLTAGE2_MV;
  LC_TD_REAL LC_VD_VOLTAGE3_MV;
  LC_TD_LREAL LC_VD_OVERALL_POWER_KWH;
  LC_TD_BOOL LC_VD_ERROR_521;
  LC_TD_BOOL LC_VD_ERROR_522;
  LC_TD_BOOL LC_VD_ERROR_523;
  LC_TD_BOOL LC_VD_ERROR_524;
  LC_TD_BOOL LC_VD_ERROR_525;
  LC_TD_BOOL LC_VD_ERROR_526;
  LC_TD_BOOL LC_VD_ERROR_527;
  LC_TD_BOOL LC_VD_ERROR_528;
  LC_TD_BOOL LC_VD___4_NE;
  LC_TD_BOOL LC_VD___33_NE;
  LC_TD_BOOL LC_VD___59_NE;
  LC_TD_BOOL LC_VD___65_NE;
  LC_TD_BOOL LC_VD___82_NE;
  LC_TD_BOOL LC_VD___113_NE;
  LC_TD_BOOL LC_VD___120_NE;
  LC_TD_BOOL LC_VD___124_NE;
  LC_TD_BOOL LC_VD___132_NE;
  LC_TD_BOOL LC_VD___147_NE;
  LC_TD_BOOL LC_VD___160_OR;
  LC_TD_BOOL LC_VD___163_NE;
  LC_TD_BOOL LC_VD___287_NE;
  LC_TD_BOOL LC_VD___291_NE;
  LC_TD_BOOL LC_VD___295_NE;
  LC_TD_BOOL LC_VD___299_NE;
  LC_TD_BOOL LC_VD___327_OR;
  LC_TD_BOOL LC_VD___365_NE;
  LC_TD_DINT LC_VD___169_TO_DINT;
  LC_TD_DINT LC_VD___171_TO_DINT;
  LC_TD_DINT LC_VD___173_TO_DINT;
  LC_TD_DINT LC_VD___175_TO_DINT;
  LC_TD_DINT LC_VD___177_TO_DINT;
  LC_TD_DINT LC_VD___179_TO_DINT;
  LC_TD_DINT LC_VD___181_TO_DINT;
  LC_TD_DINT LC_VD___183_TO_DINT;
  LC_TD_DINT LC_VD___188_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___224_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___231_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___349_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___353_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___356_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___359_FROM_BIG_ENDIAN;
  LC_TD_DINT LC_VD___362_FROM_BIG_ENDIAN;
  LC_TD_REAL LC_VD___185_TO_REAL;
  LC_TD_REAL LC_VD___186_TO_REAL;
  LC_TD_REAL LC_VD___199_TO_REAL;
  LC_TD_REAL LC_VD___200_TO_REAL;
  LC_TD_REAL LC_VD___219_DIV;
  LC_TD_REAL LC_VD___220_TO_REAL;
  LC_TD_REAL LC_VD___226_TO_REAL;
  LC_TD_REAL LC_VD___228_TO_REAL;
  LC_TD_REAL LC_VD___230_TO_REAL;
  LC_TD_REAL LC_VD___331_DIV;
  LC_TD_REAL LC_VD___379_DIV;
  LC_TD_LWORD LC_VD___12_OUTBIT;
  LC_TD_LWORD LC_VD___31_OUTBIT;
  LC_TD_LWORD LC_VD___32_OUTBIT;
  LC_TD_LWORD LC_VD___34_OUTBIT;
  LC_TD_LWORD LC_VD___38_OUTBIT;
  LC_TD_LWORD LC_VD___54_OUTBIT;
  LC_TD_LWORD LC_VD___61_OUTBIT;
  LC_TD_LWORD LC_VD___62_OUTBIT;
  LC_TD_LWORD LC_VD___63_OUTBIT;
  LC_TD_LWORD LC_VD___64_OUTBIT;
  LC_TD_LWORD LC_VD___79_OUTBIT;
  LC_TD_LWORD LC_VD___80_OUTBIT;
  LC_TD_LWORD LC_VD___81_OUTBIT;
  LC_TD_LWORD LC_VD___84_OUTBIT;
  LC_TD_LWORD LC_VD___89_OUTBIT;
  LC_TD_LWORD LC_VD___92_OUTBIT;
  LC_TD_LWORD LC_VD___332_OUTBIT;
  LC_TD_LWORD LC_VD___334_OUTBIT;
  LC_TD_LWORD LC_VD___394_OUTBIT;
  LC_TD_LWORD LC_VD___407_OR;
  LC_TD_LWORD LC_VD___455_FROM_BIG_ENDIAN;
  LC_TD_LREAL LC_VD___454_TO_LREAL;
  LC_TD_LREAL LC_VD___456_DIV;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV1;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV2;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV3;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV4;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV5;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV6;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV7;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV8;
  LC_TD_FunctionBlock_CANRECV LC_VD_CANRECV9;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND1;
  LC_TD_FunctionBlock_TON LC_VD_TON1;
} LCCG_StructAttrib LC_TD_FunctionBlock_CMS_IVT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_CMS_IVT(p) \
{ \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CURRENT_MA = (LC_TD_REAL)0; \
  (p)->LC_VD_VOLTAGE1_MV = (LC_TD_REAL)0; \
  (p)->LC_VD_VOLTAGE2_MV = (LC_TD_REAL)0; \
  (p)->LC_VD_VOLTAGE3_MV = (LC_TD_REAL)0; \
  (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  (p)->LC_VD_POWER_KWH = (LC_TD_REAL)0; \
  (p)->LC_VD_CURRENT_COUNTER_AH = (LC_TD_REAL)0; \
  (p)->LC_VD_POWER_COUNTER_WH = (LC_TD_REAL)0; \
  (p)->LC_VD_CMS_ERROR = LC_EL_false; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  (p)->LC_VD_OVERALL_POWER_KWH = (LC_TD_LREAL)0; \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV2)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV3)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV4)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV5)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV6)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV7)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV8)); \
  (p)->LC_VD_ERROR_521 = LC_EL_false; \
  (p)->LC_VD_ERROR_522 = LC_EL_false; \
  (p)->LC_VD_ERROR_523 = LC_EL_false; \
  (p)->LC_VD_ERROR_524 = LC_EL_false; \
  (p)->LC_VD_ERROR_525 = LC_EL_false; \
  (p)->LC_VD_ERROR_526 = LC_EL_false; \
  (p)->LC_VD_ERROR_527 = LC_EL_false; \
  (p)->LC_VD_ERROR_528 = LC_EL_false; \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON1)); \
  LC_INIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV9)); \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_CMS_IVT(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CURRENT_MA = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_VOLTAGE1_MV = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_VOLTAGE2_MV = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_VOLTAGE3_MV = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_TEMP = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_POWER_KWH = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CURRENT_COUNTER_AH = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_POWER_COUNTER_WH = (LC_TD_REAL)0; \
  if (RF==0) (p)->LC_VD_CMS_ERROR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_OVERALL_POWER_KWH = (LC_TD_LREAL)0; \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV1),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV2),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV3),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV4),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV5),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV6),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV7),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV8),0); \
  if (RF==0) (p)->LC_VD_ERROR_521 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_522 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_523 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_524 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_525 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_526 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_527 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_ERROR_528 = LC_EL_false; \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON1),0); \
  LC_WINIT_FunctionBlock_CANRECV(&((p)->LC_VD_CANRECV9),0); \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND1),0); \
}

/*                            Prototype                        */
void  lcfu___CMS_IVT(LC_TD_FunctionBlock_CMS_IVT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
