#ifndef LC_PROT_LCFU___BALANCE_ISZ__H
#define LC_PROT_LCFU___BALANCE_ISZ__H

#include <LC3CGBase.h>
#include <lcfu___flash.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__GE.h>
#include <lcfu_iec61131__GT.h>
#include <lcfu_iec61131__MUL_TIME.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__RS.h>
#include <lcfu_iec61131__R_TRIG.h>
#include <lcfu_iec61131__SEL_ANY.h>
#include <lcfu_iec61131__SUB.h>
#include <lcfu_iec61131__TON.h>
#include <lcfu_iec61131__TP.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_BALANCE_ISZ
{
  LC_TD_BOOL LC_VD_CHARGE_STATUS;
  LC_TD_UDINT LC_VD_AVARAGE_CELL_VOLTAGE;
  LC_TD_UDINT LC_VD_BALANCE_THRESHOLD;
  LC_TD_UDINT LC_VD_DIFFERENCE_TOLERANCE;
  LC_TD_UDINT LC_VD_MAX_CELL_VOLTAGE;
  LC_TD_UDINT LC_VD_MIN_CELL_VOLTAGE;
  LC_TD_TIME LC_VD_BALLANCE_INTERVAL;
  LC_TD_BOOL LC_VD_BALANCE_ENABLE;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_MEASURE_ALL;
  LC_TD_BOOL LC_VD_MEASURE_AUX;
  LC_TD_UDINT LC_VD_BALLANCE_VOLTAGE;
  LC_TD_BOOL LC_VD_BALLANCE_PENDING;
  LC_TD_BOOL LC_VD___8_AND;
  LC_TD_BOOL LC_VD___11_AND;
  LC_TD_BOOL LC_VD___29_GE;
  LC_TD_BOOL LC_VD___41_GE;
  LC_TD_BOOL LC_VD___45_GT;
  LC_TD_UDINT LC_VD_MAXVOLT;
  LC_TD_UDINT LC_VD_MINVOLT;
  LC_TD_UDINT LC_VD___4_ADD;
  LC_TD_UDINT LC_VD___20_SUB;
  LC_TD_UDINT LC_VD___33_SEL;
  LC_TD_TIME LC_VD_MEAS_PERIOD;
  LC_TD_TIME LC_VD___50_MUL_TIME;
  LC_TD_TIME LC_VD___54_ADD;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH1;
  LC_TD_FunctionBlock_FLASH LC_VD_FLASH2;
  LC_TD_FunctionBlock_RS LC_VD_RS3;
  LC_TD_FunctionBlock_R_TRIG LC_VD_R_TRIG5;
  LC_TD_FunctionBlock_TON LC_VD_TON4;
  LC_TD_FunctionBlock_TP LC_VD_TP3;
} LCCG_StructAttrib LC_TD_FunctionBlock_BALANCE_ISZ;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_BALANCE_ISZ(p) \
{ \
  (p)->LC_VD_MAX_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_MIN_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_AVARAGE_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_CHARGE_STATUS = LC_EL_false; \
  (p)->LC_VD_BALLANCE_INTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(30),RT_CC_CONST_LL(0)); \
  (p)->LC_VD_DIFFERENCE_TOLERANCE = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_BALANCE_THRESHOLD = (LC_TD_UDINT)0UL; \
  (p)->LC_VD_BALANCE_ENABLE = LC_EL_false; \
  (p)->LC_VD_MEASURE_ALL = LC_EL_false; \
  (p)->LC_VD_MEASURE_AUX = LC_EL_false; \
  (p)->LC_VD_BALLANCE_VOLTAGE = (LC_TD_UDINT)0UL; \
  LC_INIT_FunctionBlock_RS(&((p)->LC_VD_RS3)); \
  LC_INIT_FunctionBlock_TP(&((p)->LC_VD_TP3)); \
  LC_INIT_FunctionBlock_TON(&((p)->LC_VD_TON4)); \
  LC_INIT_FunctionBlock_R_TRIG(&((p)->LC_VD_R_TRIG5)); \
  (p)->LC_VD_MEAS_PERIOD = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(48000000)); \
  (p)->LC_VD_BALLANCE_PENDING = LC_EL_false; \
  LC_INIT_UDINT(&((p)->LC_VD_MAXVOLT)); \
  LC_INIT_UDINT(&((p)->LC_VD_MINVOLT)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH1)); \
  LC_INIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH2)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_BALANCE_ISZ(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_MAX_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_MIN_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_AVARAGE_CELL_VOLTAGE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_CHARGE_STATUS = LC_EL_false; \
  if (RF==0) (p)->LC_VD_BALLANCE_INTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(30),RT_CC_CONST_LL(0)); \
  if (RF==0) (p)->LC_VD_DIFFERENCE_TOLERANCE = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_BALANCE_THRESHOLD = (LC_TD_UDINT)0UL; \
  if (RF==0) (p)->LC_VD_BALANCE_ENABLE = LC_EL_false; \
  if (RF==0) (p)->LC_VD_MEASURE_ALL = LC_EL_false; \
  if (RF==0) (p)->LC_VD_MEASURE_AUX = LC_EL_false; \
  if (RF==0) (p)->LC_VD_BALLANCE_VOLTAGE = (LC_TD_UDINT)0UL; \
  LC_WINIT_FunctionBlock_RS(&((p)->LC_VD_RS3),0); \
  LC_WINIT_FunctionBlock_TP(&((p)->LC_VD_TP3),0); \
  LC_WINIT_FunctionBlock_TON(&((p)->LC_VD_TON4),0); \
  LC_WINIT_FunctionBlock_R_TRIG(&((p)->LC_VD_R_TRIG5),0); \
  if (RF==0) (p)->LC_VD_MEAS_PERIOD = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(48000000)); \
  if (RF==0) (p)->LC_VD_BALLANCE_PENDING = LC_EL_false; \
  LC_WINIT_UDINT(&((p)->LC_VD_MAXVOLT),RF); \
  LC_WINIT_UDINT(&((p)->LC_VD_MINVOLT),RF); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH1),0); \
  LC_WINIT_FunctionBlock_FLASH(&((p)->LC_VD_FLASH2),0); \
}

/*                            Prototype                        */
void  lcfu___BALANCE_ISZ(LC_TD_FunctionBlock_BALANCE_ISZ* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
