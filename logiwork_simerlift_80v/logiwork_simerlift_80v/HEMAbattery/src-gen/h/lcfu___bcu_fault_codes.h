#ifndef LC_PROT_LCFU___BCU_FAULT_CODES__H
#define LC_PROT_LCFU___BCU_FAULT_CODES__H

#include <LC3CGBase.h>
#include <lcdt___can_format.h>
#include <lcfu___cansend.h>
#include <lcfu___wbit.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__NE.h>
#include <lcfu_iec61131__OR.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BCU_FAULT_CODES
{
  LC_TD_BOOL LC_VD_FAULT_00;
  LC_TD_BOOL LC_VD_FAULT_01;
  LC_TD_BOOL LC_VD_FAULT_02;
  LC_TD_BOOL LC_VD_FAULT_03;
  LC_TD_BOOL LC_VD_FAULT_04;
  LC_TD_BOOL LC_VD_FAULT_05;
  LC_TD_BOOL LC_VD_FAULT_06;
  LC_TD_BOOL LC_VD_FAULT_07;
  LC_TD_BOOL LC_VD_FAULT_08;
  LC_TD_BOOL LC_VD_FAULT_09;
  LC_TD_BOOL LC_VD_FAULT_10;
  LC_TD_BOOL LC_VD_FAULT_11;
  LC_TD_BOOL LC_VD_FAULT_12;
  LC_TD_BOOL LC_VD_FAULT_13;
  LC_TD_BOOL LC_VD_FAULT_14;
  LC_TD_BOOL LC_VD_FAULT_15;
  LC_TD_BOOL LC_VD_FAULT_16;
  LC_TD_BOOL LC_VD_FAULT_17;
  LC_TD_BOOL LC_VD_FAULT_18;
  LC_TD_BOOL LC_VD_FAULT_19;
  LC_TD_BOOL LC_VD_FAULT_20;
  LC_TD_BOOL LC_VD_FAULT_21;
  LC_TD_BOOL LC_VD_FAULT_22;
  LC_TD_BOOL LC_VD_FAULT_23;
  LC_TD_BOOL LC_VD_FAULT_24;
  LC_TD_BOOL LC_VD_FAULT_25;
  LC_TD_BOOL LC_VD_FAULT_26;
  LC_TD_BOOL LC_VD_FAULT_27;
  LC_TD_BOOL LC_VD_FAULT_28;
  LC_TD_BOOL LC_VD_FAULT_29;
  LC_TD_BOOL LC_VD_FAULT_30;
  LC_TD_BOOL LC_VD_FAULT_31;
  LC_TD_BOOL LC_VD_FAULT_32;
  LC_TD_BOOL LC_VD_FAULT_33;
  LC_TD_BOOL LC_VD_FAULT_34;
  LC_TD_BOOL LC_VD_FAULT_35;
  LC_TD_BOOL LC_VD_FAULT_36;
  LC_TD_BOOL LC_VD_FAULT_37;
  LC_TD_BOOL LC_VD_FAULT_38;
  LC_TD_BOOL LC_VD_FAULT_39;
  LC_TD_UDINT LC_VD_CAN_CH;
  LC_TD_UDINT LC_VD_CAN_ID;
  LC_TD_UDINT LC_VD_FAULT_BYTE_5;
  LC_TD_UDINT LC_VD_FAULT_BYTE_6_7;
  LC_TD_BOOL LC_VD_CAN_ERROR;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UDINT LC_VD_GUI_FAULT;
  LC_TD_LWORD LC_VD_SUM;
  LC_TD_BOOL LC_VD___64_NE;
  LC_TD_BOOL LC_VD___251_NE;
  LC_TD_UDINT LC_VD___263_TO_UDINT;
  LC_TD_LWORD LC_VD_FAULT_CODE_BYTE_0_1;
  LC_TD_LWORD LC_VD_FAULT_CODE_BYTE_2_3;
  LC_TD_LWORD LC_VD_FAULT_CODE_BYTE_4;
  LC_TD_LWORD LC_VD_FAULT_CODE_BYTE_5;
  LC_TD_LWORD LC_VD_FAULT_CODE_BYTE_6_7;
  LC_TD_LWORD LC_VD___2_OUTBIT;
  LC_TD_LWORD LC_VD___3_OUTBIT;
  LC_TD_LWORD LC_VD___4_OUTBIT;
  LC_TD_LWORD LC_VD___5_OUTBIT;
  LC_TD_LWORD LC_VD___6_OUTBIT;
  LC_TD_LWORD LC_VD___12_OR;
  LC_TD_LWORD LC_VD___14_OUTBIT;
  LC_TD_LWORD LC_VD___15_OUTBIT;
  LC_TD_LWORD LC_VD___16_OUTBIT;
  LC_TD_LWORD LC_VD___21_OUTBIT;
  LC_TD_LWORD LC_VD___23_OUTBIT;
  LC_TD_LWORD LC_VD___24_OUTBIT;
  LC_TD_LWORD LC_VD___31_OUTBIT;
  LC_TD_LWORD LC_VD___32_OUTBIT;
  LC_TD_LWORD LC_VD___39_OUTBIT;
  LC_TD_LWORD LC_VD___40_OUTBIT;
  LC_TD_LWORD LC_VD___41_OUTBIT;
  LC_TD_LWORD LC_VD___44_TO_LWORD;
  LC_TD_LWORD LC_VD___45_TO_LWORD;
  LC_TD_LWORD LC_VD___46_TO_LWORD;
  LC_TD_LWORD LC_VD___47_TO_LWORD;
  LC_TD_LWORD LC_VD___48_TO_LWORD;
  LC_TD_LWORD LC_VD___49_TO_LWORD;
  LC_TD_LWORD LC_VD___50_TO_LWORD;
  LC_TD_LWORD LC_VD___51_TO_LWORD;
  LC_TD_LWORD LC_VD___52_TO_LWORD;
  LC_TD_LWORD LC_VD___53_TO_LWORD;
  LC_TD_LWORD LC_VD___56_TO_LWORD;
  LC_TD_LWORD LC_VD___57_TO_LWORD;
  LC_TD_LWORD LC_VD___59_TO_LWORD;
  LC_TD_LWORD LC_VD___60_TO_LWORD;
  LC_TD_LWORD LC_VD___61_TO_LWORD;
  LC_TD_LWORD LC_VD___62_TO_LWORD;
  LC_TD_LWORD LC_VD___115_OUTBIT;
  LC_TD_LWORD LC_VD___116_OUTBIT;
  LC_TD_LWORD LC_VD___117_OUTBIT;
  LC_TD_LWORD LC_VD___118_OUTBIT;
  LC_TD_LWORD LC_VD___119_OUTBIT;
  LC_TD_LWORD LC_VD___120_OUTBIT;
  LC_TD_LWORD LC_VD___121_OUTBIT;
  LC_TD_LWORD LC_VD___122_OUTBIT;
  LC_TD_LWORD LC_VD___123_OUTBIT;
  LC_TD_LWORD LC_VD___124_OUTBIT;
  LC_TD_LWORD LC_VD___125_OUTBIT;
  LC_TD_LWORD LC_VD___126_OUTBIT;
  LC_TD_LWORD LC_VD___127_OUTBIT;
  LC_TD_LWORD LC_VD___128_OUTBIT;
  LC_TD_LWORD LC_VD___129_OUTBIT;
  LC_TD_LWORD LC_VD___130_OUTBIT;
  LC_TD_LWORD LC_VD___131_OR;
  LC_TD_LWORD LC_VD___167_TO_LWORD;
  LC_TD_LWORD LC_VD___168_TO_LWORD;
  LC_TD_LWORD LC_VD___169_TO_LWORD;
  LC_TD_LWORD LC_VD___170_TO_LWORD;
  LC_TD_LWORD LC_VD___171_TO_LWORD;
  LC_TD_LWORD LC_VD___172_TO_LWORD;
  LC_TD_LWORD LC_VD___173_TO_LWORD;
  LC_TD_LWORD LC_VD___174_TO_LWORD;
  LC_TD_LWORD LC_VD___175_TO_LWORD;
  LC_TD_LWORD LC_VD___176_TO_LWORD;
  LC_TD_LWORD LC_VD___177_TO_LWORD;
  LC_TD_LWORD LC_VD___178_TO_LWORD;
  LC_TD_LWORD LC_VD___179_TO_LWORD;
  LC_TD_LWORD LC_VD___180_TO_LWORD;
  LC_TD_LWORD LC_VD___181_TO_LWORD;
  LC_TD_LWORD LC_VD___212_OR;
  LC_TD_LWORD LC_VD___215_OUTBIT;
  LC_TD_LWORD LC_VD___216_TO_LWORD;
  LC_TD_LWORD LC_VD___219_OUTBIT;
  LC_TD_LWORD LC_VD___220_OUTBIT;
  LC_TD_LWORD LC_VD___221_OUTBIT;
  LC_TD_LWORD LC_VD___222_TO_LWORD;
  LC_TD_LWORD LC_VD___224_OUTBIT;
  LC_TD_LWORD LC_VD___227_OUTBIT;
  LC_TD_LWORD LC_VD___228_OUTBIT;
  LC_TD_LWORD LC_VD___231_OUTBIT;
  LC_TD_LWORD LC_VD___232_OUTBIT;
  LC_TD_LWORD LC_VD___233_OUTBIT;
  LC_TD_LWORD LC_VD___247_OR;
  LC_TD_LWORD LC_VD___259_OR;
  LC_TD_FunctionBlock_CANSEND LC_VD_CANSEND4;
} LCCG_StructAttrib LC_TD_FunctionBlock_BCU_FAULT_CODES;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BCU_FAULT_CODES(p) \
{ \
  (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_FAULT_00 = LC_EL_false; \
  (p)->LC_VD_FAULT_01 = LC_EL_false; \
  (p)->LC_VD_FAULT_02 = LC_EL_false; \
  (p)->LC_VD_FAULT_03 = LC_EL_false; \
  (p)->LC_VD_FAULT_04 = LC_EL_false; \
  (p)->LC_VD_FAULT_05 = LC_EL_false; \
  (p)->LC_VD_FAULT_06 = LC_EL_false; \
  (p)->LC_VD_FAULT_07 = LC_EL_false; \
  (p)->LC_VD_FAULT_08 = LC_EL_false; \
  (p)->LC_VD_FAULT_09 = LC_EL_false; \
  (p)->LC_VD_FAULT_10 = LC_EL_false; \
  (p)->LC_VD_FAULT_11 = LC_EL_false; \
  (p)->LC_VD_FAULT_12 = LC_EL_false; \
  (p)->LC_VD_FAULT_13 = LC_EL_false; \
  (p)->LC_VD_FAULT_14 = LC_EL_false; \
  (p)->LC_VD_FAULT_15 = LC_EL_false; \
  (p)->LC_VD_FAULT_16 = LC_EL_false; \
  (p)->LC_VD_FAULT_17 = LC_EL_false; \
  (p)->LC_VD_FAULT_18 = LC_EL_false; \
  (p)->LC_VD_FAULT_19 = LC_EL_false; \
  (p)->LC_VD_FAULT_20 = LC_EL_false; \
  (p)->LC_VD_FAULT_21 = LC_EL_false; \
  (p)->LC_VD_FAULT_22 = LC_EL_false; \
  (p)->LC_VD_FAULT_23 = LC_EL_false; \
  (p)->LC_VD_FAULT_24 = LC_EL_false; \
  (p)->LC_VD_FAULT_25 = LC_EL_false; \
  (p)->LC_VD_FAULT_26 = LC_EL_false; \
  (p)->LC_VD_FAULT_27 = LC_EL_false; \
  (p)->LC_VD_FAULT_28 = LC_EL_false; \
  (p)->LC_VD_FAULT_29 = LC_EL_false; \
  (p)->LC_VD_FAULT_30 = LC_EL_false; \
  (p)->LC_VD_FAULT_31 = LC_EL_false; \
  (p)->LC_VD_FAULT_32 = LC_EL_false; \
  (p)->LC_VD_FAULT_33 = LC_EL_false; \
  (p)->LC_VD_FAULT_34 = LC_EL_false; \
  (p)->LC_VD_FAULT_35 = LC_EL_false; \
  (p)->LC_VD_FAULT_36 = LC_EL_false; \
  (p)->LC_VD_FAULT_37 = LC_EL_false; \
  (p)->LC_VD_FAULT_38 = LC_EL_false; \
  (p)->LC_VD_FAULT_39 = LC_EL_false; \
  (p)->LC_VD_FAULT_BYTE_5 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_FAULT_BYTE_6_7 = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  (p)->LC_VD_GUI_FAULT = (LC_TD_UDINT)0UL; \
  LC_INIT_LWORD(&((p)->LC_VD_SUM)); \
  LC_INIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4)); \
  (p)->LC_VD_FAULT_CODE_BYTE_0_1 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  (p)->LC_VD_FAULT_CODE_BYTE_2_3 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  (p)->LC_VD_FAULT_CODE_BYTE_4 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  (p)->LC_VD_FAULT_CODE_BYTE_6_7 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  (p)->LC_VD_FAULT_CODE_BYTE_5 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BCU_FAULT_CODES(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_CAN_ID = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_FAULT_00 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_01 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_02 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_03 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_04 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_05 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_06 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_07 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_08 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_09 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_10 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_11 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_12 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_13 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_14 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_15 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_16 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_17 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_18 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_19 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_20 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_21 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_22 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_23 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_24 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_25 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_26 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_27 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_28 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_29 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_30 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_31 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_32 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_33 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_34 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_35 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_36 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_37 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_38 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_39 = LC_EL_false; \
  if (RF==0) (p)->LC_VD_FAULT_BYTE_5 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_CH = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_FAULT_BYTE_6_7 = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CAN_ERROR = LC_EL_false; \
  if (RF==0) (p)->LC_VD_GUI_FAULT = (LC_TD_UDINT)0UL; \
  LC_WINIT_LWORD(&((p)->LC_VD_SUM),RF); \
  LC_WINIT_FunctionBlock_CANSEND(&((p)->LC_VD_CANSEND4),0); \
  if (RF==0) (p)->LC_VD_FAULT_CODE_BYTE_0_1 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  if (RF==0) (p)->LC_VD_FAULT_CODE_BYTE_2_3 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  if (RF==0) (p)->LC_VD_FAULT_CODE_BYTE_4 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  if (RF==0) (p)->LC_VD_FAULT_CODE_BYTE_6_7 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
  if (RF==0) (p)->LC_VD_FAULT_CODE_BYTE_5 = (LC_TD_LWORD)RT_CC_CONST_ULL(0); \
}

/*                            Prototype                        */
void  lcfu___BCU_FAULT_CODES(LC_TD_FunctionBlock_BCU_FAULT_CODES* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
