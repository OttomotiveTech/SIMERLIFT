#ifndef LC_PROT_LCPU___HEMABATTERY__C
#define LC_PROT_LCPU___HEMABATTERY__C

#include <lcpu___hemabattery.h>



/*                            Programs                         */
void  lcpu___HEMABATTERY(LC_TD_Program_HEMABATTERY* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_this->LC_VD_ANLG14.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG14.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG14.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG14.LC_VD_CH = (LC_TD_USINT)7;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG14), pEPDB);
      LC_this->LC_VD_AN_KL15 = LC_this->LC_VD_ANLG14.LC_VD_VAL;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_ANLG14.LC_VD_VAL, (LC_TD_UINT)100, pEPDB);
      LC_this->LC_VD___1379_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_this->LC_VD_TON1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON1.LC_VD_IN = LC_this->LC_VD___1379_GT;
      LC_this->LC_VD_TON1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(250000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON1), pEPDB);
    }
    {
      LC_this->LC_VD_TOF15.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF15.LC_VD_IN = LC_this->LC_VD_TON1.LC_VD_Q;
      LC_this->LC_VD_TOF15.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(800000000));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF15), pEPDB);
      LC_this->LC_VD_IGNITION_KL15 = LC_this->LC_VD_TOF15.LC_VD_Q;
    }
  }
  /* Network 2 */
  {
    {
      LC_this->LC_VD_TON5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON5.LC_VD_IN = (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_IGNITION_KL15));
      LC_this->LC_VD_TON5.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON5), pEPDB);
      LC_this->LC_VD_CAN_DISABLE = LC_this->LC_VD_TON5.LC_VD_Q;
      LC_this->LC_VD_BATTSTACK_DISABLE = LC_this->LC_VD_TON5.LC_VD_Q;
    }
    {
      LC_this->LC_VD_TON4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON4.LC_VD_IN = LC_this->LC_VD_TON5.LC_VD_Q;
      LC_this->LC_VD_TON4.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON4), pEPDB);
      LC_this->LC_VD_RDY_TO_SLEEP = LC_this->LC_VD_TON4.LC_VD_Q;
    }
  }
  /* Network 3 */
  {
    {
      LC_this->LC_VD_SAFETY_POWER1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SAFETY_POWER1.LC_VD_SLEEP_RDY = LC_this->LC_VD_RDY_TO_SLEEP;
      lcfu___SAFETY_POWER(&(LC_this->LC_VD_SAFETY_POWER1), pEPDB);
    }
  }
  /* Network 4 */
  {
    {
      LC_this->LC_VD_FLASH3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH3.LC_VD_IN = LC_this->LC_VD_IGNITION_KL15;
      LC_this->LC_VD_FLASH3.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(250000000));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH3), pEPDB);
    }
    {
      LC_this->LC_VD_IOWR4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR4.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR4.LC_VD_PIN = (LC_TD_UINT)28;
      LC_this->LC_VD_IOWR4.LC_VD_VAL = LC_this->LC_VD_FLASH3.LC_VD_OUT;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR4), pEPDB);
    }
  }
  /* Network 5 */
  {
    {
      LC_this->LC_VD_GUICFG_INT1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT1.LC_VD_CODE = (LC_TD_UDINT)12UL;
      LC_this->LC_VD_GUICFG_INT1.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT1), pEPDB);
    }
  }
  /* Network 6 */
  {
    {
      LC_this->LC_VD_GUICFG_INT16.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT16.LC_VD_CODE = (LC_TD_UDINT)110UL;
      LC_this->LC_VD_GUICFG_INT16.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT16), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT16.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_DISCHARGEOK = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1567_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 7 */
  {
    {
      LC_this->LC_VD_BCU_ID1.LC_VD_ENO = LC_EL_true;
      lcfu___BCU_ID(&(LC_this->LC_VD_BCU_ID1), pEPDB);
      LC_this->LC_VD_SELECTED_PACK_NUMBER = LC_this->LC_VD_BCU_ID1.LC_VD_PACK_ID;
      LC_this->LC_VD_CAN_ID_10 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_10;
      LC_this->LC_VD_CAN_ID_11 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_11;
      LC_this->LC_VD_CAN_ID_12 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_12;
      LC_this->LC_VD_CAN_ID_13 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_13;
      LC_this->LC_VD_CAN_ID_14 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_14;
      LC_this->LC_VD_CAN_ID_15 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_15;
      LC_this->LC_VD_CAN_ID_16 = LC_this->LC_VD_BCU_ID1.LC_VD_CAN_ID_16;
    }
  }
  /* Network 8 */
  {
    LC_this->LC_VD_NUMBER_OF_PARALLEL_CELL = (LC_TD_USINT)1;
  }
  /* Network 9 */
  {
    {
      LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_CAN_ID = (LC_TD_UDINT)419373086UL;
      LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      lcfu___HVCU_CONTROL_STATE(&(LC_this->LC_VD_HVCU_CONTROL_STATE2), pEPDB);
      LC_this->LC_VD_IMDENABLE = LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_IMDCTRL_BCU0;
      LC_this->LC_VD_CAN_FAULT_07 = LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_CAN_ERROR;
    }
    {
      LC_TD_Function_MUX_USINT__USINT lFunction_MUX_USINT;
      LC_INIT_Function_MUX_USINT__USINT(&lFunction_MUX_USINT);
      lFunction_MUX_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUX_USINT__ANY__5(&lFunction_MUX_USINT, LC_this->LC_VD_SELECTED_PACK_NUMBER, LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_BATTEY_STATE_BCU_00, LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_BATTEY_STATE_BCU_01, LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_BATTEY_STATE_BCU_02, LC_this->LC_VD_HVCU_CONTROL_STATE2.LC_VD_BATTEY_STATE_BCU_03, pEPDB);
      LC_this->LC_VD_HVCU_STATE = lFunction_MUX_USINT.LC_VD_MUX_USINT;
      LC_this->LC_VD___2255_MUX_USINT = lFunction_MUX_USINT.LC_VD_MUX_USINT;
    }
    {
      LC_this->LC_VD_HVCU_CONFIG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CAN_ID = (LC_TD_UDINT)419365363UL;
      lcfu___HVCU_CONFIG(&(LC_this->LC_VD_HVCU_CONFIG1), pEPDB);
      LC_this->LC_VD_CMDTMT = LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CAN_ERROR;
    }
    {
      LC_TD_Function_MUX_USINT__USINT lFunction_MUX_USINT;
      LC_INIT_Function_MUX_USINT__USINT(&lFunction_MUX_USINT);
      lFunction_MUX_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUX_USINT__ANY__5(&lFunction_MUX_USINT, LC_this->LC_VD_SELECTED_PACK_NUMBER, LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CMD0, LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CMD1, LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CMD2, LC_this->LC_VD_HVCU_CONFIG1.LC_VD_CMD3, pEPDB);
      LC_this->LC_VD_CMDBCU = lFunction_MUX_USINT.LC_VD_MUX_USINT;
      LC_this->LC_VD___91_MUX_USINT = lFunction_MUX_USINT.LC_VD_MUX_USINT;
    }
  }
  /* Network 10 */
  {
    {
      LC_this->LC_VD_GUICFG_INT2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT2.LC_VD_CODE = (LC_TD_UDINT)10UL;
      LC_this->LC_VD_GUICFG_INT2.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT2), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT2.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELL_CURRENT_NOMINAL = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___23_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 11 */
  {
    {
      LC_this->LC_VD_GUICFG_INT17.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT17.LC_VD_CODE = (LC_TD_UDINT)111UL;
      LC_this->LC_VD_GUICFG_INT17.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT17), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT17.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_WARNINGUV = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1574_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 12 */
  {
    {
      LC_this->LC_VD_GUICFG_INT3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT3.LC_VD_CODE = (LC_TD_UDINT)261UL;
      LC_this->LC_VD_GUICFG_INT3.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT3), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__DINT(&lFunction_TO_USINT, LC_this->LC_VD_GUICFG_INT3.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_NUMBER_OF_BMU_CFG = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___61_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
  /* Network 13 */
  {
    {
      LC_this->LC_VD_GUICFG_INT18.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT18.LC_VD_CODE = (LC_TD_UDINT)112UL;
      LC_this->LC_VD_GUICFG_INT18.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT18), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD_GUICFG_INT18.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLTEMP_MAXLIM = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___1613_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
  }
  /* Network 14 */
  {
    {
      LC_this->LC_VD_GUICFG_INT7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT7.LC_VD_CODE = (LC_TD_UDINT)101UL;
      LC_this->LC_VD_GUICFG_INT7.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT7), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT7.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_CUTOFFHIGH = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___998_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 15 */
  {
    {
      LC_this->LC_VD_GUICFG_INT19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT19.LC_VD_CODE = (LC_TD_UDINT)113UL;
      LC_this->LC_VD_GUICFG_INT19.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT19), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD_GUICFG_INT19.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLTEMP_WARNINGOT = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___1616_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
  }
  /* Network 16 */
  {
    {
      LC_this->LC_VD_GUICFG_INT8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT8.LC_VD_CODE = (LC_TD_UDINT)102UL;
      LC_this->LC_VD_GUICFG_INT8.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT8), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT8.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_MAX = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1401_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 17 */
  {
    {
      LC_this->LC_VD_GUICFG_INT20.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT20.LC_VD_CODE = (LC_TD_UDINT)114UL;
      LC_this->LC_VD_GUICFG_INT20.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT20), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD_GUICFG_INT20.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLTEMP_MINLIM = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___1623_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
  }
  /* Network 18 */
  {
    {
      LC_this->LC_VD_GUICFG_INT9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT9.LC_VD_CODE = (LC_TD_UDINT)103UL;
      LC_this->LC_VD_GUICFG_INT9.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT9), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT9.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_MAXCHARGE = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1426_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 19 */
  {
    {
      LC_this->LC_VD_GUICFG_INT21.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT21.LC_VD_CODE = (LC_TD_UDINT)115UL;
      LC_this->LC_VD_GUICFG_INT21.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT21), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__DINT(&lFunction_TO_REAL, LC_this->LC_VD_GUICFG_INT21.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLTEMP_WARNINGUT = lFunction_TO_REAL.LC_VD_TO_REAL;
      LC_this->LC_VD___1630_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
  }
  /* Network 20 */
  {
    {
      LC_this->LC_VD_GUICFG_INT10.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT10.LC_VD_CODE = (LC_TD_UDINT)104UL;
      LC_this->LC_VD_GUICFG_INT10.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT10), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT10.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_CHARGEOK = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1466_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 21 */
  {
    {
      LC_this->LC_VD_GUICFG_INT22.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT22.LC_VD_CODE = (LC_TD_UDINT)200UL;
      LC_this->LC_VD_GUICFG_INT22.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT22), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT22.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_NOMINAL = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1731_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 22 */
  {
    {
      LC_this->LC_VD_GUICFG_INT11.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT11.LC_VD_CODE = (LC_TD_UDINT)105UL;
      LC_this->LC_VD_GUICFG_INT11.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT11), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT11.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_WARNINGOV = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1477_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 23 */
  {
    {
      LC_this->LC_VD_GUICFG_INT23.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT23.LC_VD_CODE = (LC_TD_UDINT)253UL;
      LC_this->LC_VD_GUICFG_INT23.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT23), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT23.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_BALANCEDIFF_THRESHOLD = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1745_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 24 */
  {
    {
      LC_this->LC_VD_GUICFG_INT12.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT12.LC_VD_CODE = (LC_TD_UDINT)254UL;
      LC_this->LC_VD_GUICFG_INT12.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT12), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT12.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_BALTHRES = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1486_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 25 */
  {
    {
      LC_this->LC_VD_GUICFG_REAL1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_REAL1.LC_VD_CODE = (LC_TD_UDINT)120UL;
      LC_this->LC_VD_GUICFG_REAL1.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_REAL(&(LC_this->LC_VD_GUICFG_REAL1), pEPDB);
      LC_this->LC_VD_DOD_RATE = LC_this->LC_VD_GUICFG_REAL1.LC_VD_VAL;
    }
  }
  /* Network 26 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_HVCU_STATE, LC_ED__BATTSTATE__CHARGE, pEPDB);
      LC_this->LC_VD_CHARGECMD = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___1658_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_HVCU_STATE, LC_ED__BATTSTATE__DISCHARGE, pEPDB);
      LC_this->LC_VD_DISCHARGECMD = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___1713_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD___1658_EQ, LC_this->LC_VD___1713_EQ, pEPDB);
      LC_this->LC_VD_IGNITION = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1719_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_HVCU_STATE, LC_ED__BATTSTATE__SHUTDOWN, pEPDB);
      LC_this->LC_VD___1268_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_TON15.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON15.LC_VD_IN = LC_this->LC_VD_EMERGENCYBTN;
      LC_this->LC_VD_TON15.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(250000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON15), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD___1268_EQ, LC_this->LC_VD_TON15.LC_VD_Q, pEPDB);
      LC_this->LC_VD_SHUTDOWNCMD = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1412_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 27 */
  {
    {
      LC_this->LC_VD_GUICFG_INT13.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT13.LC_VD_CODE = (LC_TD_UDINT)107UL;
      LC_this->LC_VD_GUICFG_INT13.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT13), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT13.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_CUTOFFLOW = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1497_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 28 */
  {
    {
      LC_this->LC_VD_GUICFG_INT24.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT24.LC_VD_CODE = (LC_TD_UDINT)121UL;
      LC_this->LC_VD_GUICFG_INT24.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT24), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT24.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CYCLESPERSOH = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1799_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 29 */
  {
    {
      LC_this->LC_VD_GUICFG_INT14.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT14.LC_VD_CODE = (LC_TD_UDINT)108UL;
      LC_this->LC_VD_GUICFG_INT14.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT14), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT14.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_MIN = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1509_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 30 */
  {
    {
      LC_this->LC_VD_GUICFG_INT25.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT25.LC_VD_CODE = (LC_TD_UDINT)130UL;
      LC_this->LC_VD_GUICFG_INT25.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT25), pEPDB);
    }
    {
      LC_TD_Function_TO_UDINT lFunction_TO_UDINT;
      LC_INIT_Function_TO_UDINT(&lFunction_TO_UDINT);
      lFunction_TO_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UDINT__DINT(&lFunction_TO_UDINT, LC_this->LC_VD_GUICFG_INT25.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_PRECHARGEINTERVAL = lFunction_TO_UDINT.LC_VD_TO_UDINT;
      LC_this->LC_VD___2174_TO_UDINT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
    }
  }
  /* Network 31 */
  {
    {
      LC_this->LC_VD_GUICFG_INT15.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT15.LC_VD_CODE = (LC_TD_UDINT)109UL;
      LC_this->LC_VD_GUICFG_INT15.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT15), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT15.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_CELLVOLT_MINDISCHARGE = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1534_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 32 */
  {
    {
      LC_this->LC_VD_GUICFG_INT26.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT26.LC_VD_CODE = (LC_TD_UDINT)266UL;
      LC_this->LC_VD_GUICFG_INT26.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT26), pEPDB);
    }
    {
      LC_TD_Function_TO_UDINT lFunction_TO_UDINT;
      LC_INIT_Function_TO_UDINT(&lFunction_TO_UDINT);
      lFunction_TO_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UDINT__DINT(&lFunction_TO_UDINT, LC_this->LC_VD_GUICFG_INT26.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_NTCBETA = lFunction_TO_UDINT.LC_VD_TO_UDINT;
      LC_this->LC_VD___2201_TO_UDINT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
    }
  }
  /* Network 33 */
  {
    {
      LC_this->LC_VD_NUMOFCELLS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_NUMOFCELLS1.LC_VD_NUMOFBMU = LC_this->LC_VD_NUMBER_OF_BMU_CFG;
      LC_ASSIGN_ARRAY_VAR(LC_this->LC_VD_NUMOFCELLS1.LC_VD_CELLMAP[0], LC_this->LC_VD_NUMOFCELLS[0], LC_TD_USINT, 16);
      lcfu___NUMOFCELLS(&(LC_this->LC_VD_NUMOFCELLS1), pEPDB);
      LC_this->LC_VD_NUMBER_OF_CELL = LC_this->LC_VD_NUMOFCELLS1.LC_VD_NUMOFCELL;
    }
  }
  /* Network 34 */
  {
    {
      LC_this->LC_VD_GUICFG_INT27.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT27.LC_VD_CODE = (LC_TD_UDINT)2004UL;
      LC_this->LC_VD_GUICFG_INT27.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT27), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT27.LC_VD_VAL, pEPDB);
      LC_this->LC_VD_OCFAULTAMPR = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___2096_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 35 */
  {
    {
      LC_this->LC_VD_IOWR1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR1.LC_VD_PORT = LC_ED__TMS570_GIO__A;
      LC_this->LC_VD_IOWR1.LC_VD_PIN = (LC_TD_UINT)0;
      LC_this->LC_VD_IOWR1.LC_VD_VAL = LC_EL_false;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR1), pEPDB);
    }
  }
  /* Network 36 */
  {
    {
      LC_this->LC_VD_GUICFG_INT4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT4.LC_VD_CODE = (LC_TD_UDINT)2001UL;
      LC_this->LC_VD_GUICFG_INT4.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT4), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT4.LC_VD_VAL, pEPDB);
      LC_this->LC_VD___1169_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_MIN__UINT lFunction_MIN;
      LC_INIT_Function_MIN__UINT(&lFunction_MIN);
      lFunction_MIN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MIN__ANY__2(&lFunction_MIN, LC_this->LC_VD___1169_TO_UINT, (LC_TD_UINT)200, pEPDB);
      LC_this->LC_VD_MAXCHARGEAMPRCFG = lFunction_MIN.LC_VD_MIN;
      LC_this->LC_VD___1184_MIN = lFunction_MIN.LC_VD_MIN;
    }
  }
  /* Network 37 */
  {
    {
      LC_this->LC_VD_GUICFG_INT28.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT28.LC_VD_CODE = (LC_TD_UDINT)400UL;
      LC_this->LC_VD_GUICFG_INT28.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT28), pEPDB);
    }
    {
      LC_TD_Function_TO_UDINT lFunction_TO_UDINT;
      LC_INIT_Function_TO_UDINT(&lFunction_TO_UDINT);
      lFunction_TO_UDINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UDINT__DINT(&lFunction_TO_UDINT, LC_this->LC_VD_GUICFG_INT28.LC_VD_VAL, pEPDB);
      LC_this->LC_VD___733_TO_UDINT = lFunction_TO_UDINT.LC_VD_TO_UDINT;
    }
    {
      LC_TD_Function_TO_TIME lFunction_TO_TIME;
      LC_INIT_Function_TO_TIME(&lFunction_TO_TIME);
      lFunction_TO_TIME.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_TIME__UDINT(&lFunction_TO_TIME, LC_this->LC_VD___733_TO_UDINT, pEPDB);
      LC_this->LC_VD___1172_TO_TIME = lFunction_TO_TIME.LC_VD_TO_TIME;
    }
    {
      LC_TD_Function_DIV_TIME lFunction_DIV_TIME;
      LC_INIT_Function_DIV_TIME(&lFunction_DIV_TIME);
      lFunction_DIV_TIME.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV_TIME__UINT(&lFunction_DIV_TIME, LC_this->LC_VD___1172_TO_TIME, (LC_TD_UINT)1000, pEPDB);
      LC_this->LC_VD_TESTVALUE0 = lFunction_DIV_TIME.LC_VD_DIV_TIME;
      LC_this->LC_VD___1176_DIV_TIME = lFunction_DIV_TIME.LC_VD_DIV_TIME;
    }
  }
  /* Network 38 */
  {
    {
      LC_this->LC_VD_GUICFG_INT5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT5.LC_VD_CODE = (LC_TD_UDINT)2002UL;
      LC_this->LC_VD_GUICFG_INT5.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT5), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT5.LC_VD_VAL, pEPDB);
      LC_this->LC_VD___1538_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_MIN__UINT lFunction_MIN;
      LC_INIT_Function_MIN__UINT(&lFunction_MIN);
      lFunction_MIN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MIN__ANY__2(&lFunction_MIN, LC_this->LC_VD___1538_TO_UINT, (LC_TD_UINT)300, pEPDB);
      LC_this->LC_VD_MAXDISCHARGEAMPRCFG = lFunction_MIN.LC_VD_MIN;
      LC_this->LC_VD___1194_MIN = lFunction_MIN.LC_VD_MIN;
    }
  }
  /* Network 39 */
  {
    {
      LC_this->LC_VD_IOWR2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR2.LC_VD_PORT = LC_ED__TMS570_GIO__B;
      LC_this->LC_VD_IOWR2.LC_VD_PIN = (LC_TD_UINT)3;
      LC_this->LC_VD_IOWR2.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR2), pEPDB);
    }
  }
  /* Network 40 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_CMDBCU, (LC_TD_USINT)171, pEPDB);
      LC_this->LC_VD_FORCEDISCHARGE = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___384_EQ = lFunction_EQ.LC_VD_EQ;
    }
  }
  /* Network 41 */
  {
    {
      LC_this->LC_VD_GUICFG_INT6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUICFG_INT6.LC_VD_CODE = (LC_TD_UDINT)2003UL;
      LC_this->LC_VD_GUICFG_INT6.LC_VD_R = LC_EL_true;
      lcfu___GUICFG_INT(&(LC_this->LC_VD_GUICFG_INT6), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__DINT(&lFunction_TO_UINT, LC_this->LC_VD_GUICFG_INT6.LC_VD_VAL, pEPDB);
      LC_this->LC_VD___869_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_MIN__UINT lFunction_MIN;
      LC_INIT_Function_MIN__UINT(&lFunction_MIN);
      lFunction_MIN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MIN__ANY__2(&lFunction_MIN, LC_this->LC_VD___869_TO_UINT, (LC_TD_UINT)250, pEPDB);
      LC_this->LC_VD_OCWARNINGAMPR = lFunction_MIN.LC_VD_MIN;
      LC_this->LC_VD___868_MIN = lFunction_MIN.LC_VD_MIN;
    }
  }
  /* Network 42 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_CMDBCU, (LC_TD_USINT)172, pEPDB);
      LC_this->LC_VD_FORCECHARGE = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___859_EQ = lFunction_EQ.LC_VD_EQ;
    }
  }
  /* Network 43 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_CMDBCU, (LC_TD_USINT)173, pEPDB);
      LC_this->LC_VD_FORCENEGATIVE = lFunction_EQ.LC_VD_EQ;
      LC_this->LC_VD___1139_EQ = lFunction_EQ.LC_VD_EQ;
    }
  }
  /* Network 44 */
  {
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__UINT(&lFunction_TO_REAL, LC_this->LC_VD_CELLVOLT_CHARGEOK, pEPDB);
      LC_this->LC_VD___962_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD___962_TO_REAL, pEPDB);
      LC_this->LC_VD___958_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___958_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_CHARGEOK_VOLTAGE_PACK = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___959_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__UINT(&lFunction_TO_REAL, LC_this->LC_VD_CELLVOLT_DISCHARGEOK, pEPDB);
      LC_this->LC_VD___972_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD___972_TO_REAL, pEPDB);
      LC_this->LC_VD___971_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___971_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_DICHARGEOK_VOLTAGE_PACK = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___975_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD_CELLVOLT_MAXCHARGE, pEPDB);
      LC_this->LC_VD___502_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___502_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_PACK_CHARGE_VOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___509_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD_CELLVOLT_MINDISCHARGE, pEPDB);
      LC_this->LC_VD___517_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___517_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_PACK_DISCHARGE_VOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___336_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD_CELLVOLT_CUTOFFLOW, pEPDB);
      LC_this->LC_VD___1353_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___1353_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_PACK_CUTOFFLOW_VOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___1352_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD_CELLVOLT_CUTOFFHIGH, pEPDB);
      LC_this->LC_VD___479_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___479_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_PACK_CUTOFFHIGH_VOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___459_DIV = lFunction_DIV.LC_VD_DIV;
    }
  }
  /* Network 45 */
  {
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)0,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___415_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)1,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___419_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)2,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___420_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)3,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___421_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_CAN_TEST1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CAN_TEST1.LC_VD_IN_1 = LC_this->LC_VD___415_TO_UINT;
      LC_this->LC_VD_CAN_TEST1.LC_VD_IN_2 = LC_this->LC_VD___419_TO_UINT;
      LC_this->LC_VD_CAN_TEST1.LC_VD_IN_3 = LC_this->LC_VD___420_TO_UINT;
      LC_this->LC_VD_CAN_TEST1.LC_VD_IN_4 = LC_this->LC_VD___421_TO_UINT;
      LC_this->LC_VD_CAN_TEST1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_CAN_TEST1.LC_VD_CAN_ID = (LC_TD_UDINT)268435457UL;
      lcfu___CAN_TEST(&(LC_this->LC_VD_CAN_TEST1), pEPDB);
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)4,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___422_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)5,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___423_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__UINT(&lFunction_TO_UINT, LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_BMUCELLVOLT,(LC_TD_USINT)6,(LC_TD_DINT)0,(LC_TD_DINT)15), pEPDB);
      LC_this->LC_VD___424_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__BOOL(&lFunction_TO_UINT, LC_this->LC_VD_SIM100NOTFOUND, pEPDB);
      LC_this->LC_VD___425_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
    {
      LC_this->LC_VD_CAN_TEST2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CAN_TEST2.LC_VD_IN_1 = LC_this->LC_VD___422_TO_UINT;
      LC_this->LC_VD_CAN_TEST2.LC_VD_IN_2 = LC_this->LC_VD___423_TO_UINT;
      LC_this->LC_VD_CAN_TEST2.LC_VD_IN_3 = LC_this->LC_VD___424_TO_UINT;
      LC_this->LC_VD_CAN_TEST2.LC_VD_IN_4 = LC_this->LC_VD___425_TO_UINT;
      LC_this->LC_VD_CAN_TEST2.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_CAN_TEST2.LC_VD_CAN_ID = (LC_TD_UDINT)268435458UL;
      lcfu___CAN_TEST(&(LC_this->LC_VD_CAN_TEST2), pEPDB);
    }
  }
  /* Network 46 */
  {
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_SLAVEMODE, LC_this->LC_VD_CAN_FAULT_07, pEPDB);
      LC_this->LC_VD_FAULT_CAN_COMMUNICATION = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___132_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 47 */
  {
    {
      LC_this->LC_VD_ISABELINIT1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ISABELINIT1.LC_VD_CH = LC_this->LC_VD_PDUCAN;
      LC_this->LC_VD_ISABELINIT1.LC_VD_ENB = LC_EL_true;
      lcfu___ISABELINIT(&(LC_this->LC_VD_ISABELINIT1), pEPDB);
    }
    {
      LC_this->LC_VD_CMS_IVT1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CMS_IVT1.LC_VD_CAN_CH = LC_this->LC_VD_PDUCAN;
      lcfu___CMS_IVT(&(LC_this->LC_VD_CMS_IVT1), pEPDB);
      LC_this->LC_VD_CMD_CURRENT_SENSE = LC_this->LC_VD_CMS_IVT1.LC_VD_CURRENT_MA;
      LC_this->LC_VD_CMD_VOLTAGE_SENSE_1 = LC_this->LC_VD_CMS_IVT1.LC_VD_VOLTAGE1_MV;
      LC_this->LC_VD_CMD_VOLTAGE_SENSE_2 = LC_this->LC_VD_CMS_IVT1.LC_VD_VOLTAGE2_MV;
      LC_this->LC_VD_CMD_VOLTAGE_SENSE_3 = LC_this->LC_VD_CMS_IVT1.LC_VD_VOLTAGE3_MV;
      LC_this->LC_VD_CMD_TEMP = LC_this->LC_VD_CMS_IVT1.LC_VD_TEMP;
      LC_this->LC_VD_CMD_POWER = LC_this->LC_VD_CMS_IVT1.LC_VD_POWER_KWH;
      LC_this->LC_VD_CMD_COUNTER_CURRENT = LC_this->LC_VD_CMS_IVT1.LC_VD_CURRENT_COUNTER_AH;
      LC_this->LC_VD_WHINSTANT = LC_this->LC_VD_CMS_IVT1.LC_VD_POWER_COUNTER_WH;
      LC_this->LC_VD_FAULT_PACK_CMS = LC_this->LC_VD_CMS_IVT1.LC_VD_CAN_ERROR;
      LC_this->LC_VD_CMD_OVERALL_POWER = LC_this->LC_VD_CMS_IVT1.LC_VD_OVERALL_POWER_KWH;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CMD_CURRENT_SENSE, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_BATTERYCURRENT = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___778_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CMD_VOLTAGE_SENSE_1, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_BATTERYVOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___1520_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CMD_VOLTAGE_SENSE_2, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_OUTPUTVOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD_CHARGEINVOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___1880_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_CMD_VOLTAGE_SENSE_3, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_DISCHARGEINVOLTAGE = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___43_DIV = lFunction_DIV.LC_VD_DIV;
    }
  }
  /* Network 48 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)0.5, pEPDB);
      LC_this->LC_VD___2595_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TBUFFER19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER19.LC_VD_I = LC_this->LC_VD___2595_GE;
      LC_this->LC_VD_TBUFFER19.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER19), pEPDB);
      LC_this->LC_VD_BATTERYDISCHARGING = LC_this->LC_VD_TBUFFER19.LC_VD_O;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)-0.5, pEPDB);
      LC_this->LC_VD___2605_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_TBUFFER20.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER20.LC_VD_I = LC_this->LC_VD___2605_LE;
      LC_this->LC_VD_TBUFFER20.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER20), pEPDB);
      LC_this->LC_VD_BATTERYCHARGING = LC_this->LC_VD_TBUFFER20.LC_VD_O;
    }
  }
  /* Network 49 */
  {
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)-0.2, pEPDB);
      LC_this->LC_VD___753_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_this->LC_VD_TBUFFER15.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER15.LC_VD_I = LC_this->LC_VD___753_LT;
      LC_this->LC_VD_TBUFFER15.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER15), pEPDB);
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)0.1, pEPDB);
      LC_this->LC_VD___755_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_this->LC_VD_TBUFFER16.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER16.LC_VD_I = LC_this->LC_VD___755_GT;
      LC_this->LC_VD_TBUFFER16.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(1),RT_CC_CONST_LL(0));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER16), pEPDB);
    }
    {
      LC_this->LC_VD_SR5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SR5.LC_VD_S1 = LC_this->LC_VD_TBUFFER15.LC_VD_O;
      LC_this->LC_VD_SR5.LC_VD_R = LC_this->LC_VD_TBUFFER16.LC_VD_O;
      lcfu_iec61131__SR(&(LC_this->LC_VD_SR5), pEPDB);
      LC_this->LC_VD_BATTERYINCHARGE = LC_this->LC_VD_SR5.LC_VD_Q1;
    }
  }
  /* Network 50 */
  {
    {
      LC_TD_Function_ABS__REAL lFunction_ABS;
      LC_INIT_Function_ABS__REAL(&lFunction_ABS);
      lFunction_ABS.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ABS__REAL(&lFunction_ABS, LC_this->LC_VD_BATTERYCURRENT, pEPDB);
      LC_this->LC_VD___2251_ABS = lFunction_ABS.LC_VD_ABS;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD___2251_ABS, LC_this->LC_VD_OCWARNINGAMPR, pEPDB);
      LC_this->LC_VD___897_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TBUFFER1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER1.LC_VD_I = LC_this->LC_VD___897_GE;
      LC_this->LC_VD_TBUFFER1.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER1), pEPDB);
      LC_this->LC_VD_OC_WARNING = LC_this->LC_VD_TBUFFER1.LC_VD_O;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD___2251_ABS, LC_this->LC_VD_OCFAULTAMPR, pEPDB);
      LC_this->LC_VD___917_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TBUFFER4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER4.LC_VD_I = LC_this->LC_VD___917_GE;
      LC_this->LC_VD_TBUFFER4.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER4), pEPDB);
      LC_this->LC_VD_OC_FAULT = LC_this->LC_VD_TBUFFER4.LC_VD_O;
    }
  }
  /* Network 51 */
  {
    {
      LC_TD_Function_ABS__REAL lFunction_ABS;
      LC_INIT_Function_ABS__REAL(&lFunction_ABS);
      lFunction_ABS.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ABS__REAL(&lFunction_ABS, LC_this->LC_VD_BATTERYCURRENT, pEPDB);
      LC_this->LC_VD___1258_ABS = lFunction_ABS.LC_VD_ABS;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD___1258_ABS, (LC_TD_REAL)3, pEPDB);
      LC_this->LC_VD_SHUTDOWNCOMPLETE = lFunction_LT.LC_VD_LT;
      LC_this->LC_VD___1259_LT = lFunction_LT.LC_VD_LT;
    }
  }
  /* Network 52 */
  {
    {
      LC_this->LC_VD_IOWR13.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR13.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR13.LC_VD_PIN = (LC_TD_UINT)24;
      LC_this->LC_VD_IOWR13.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR13), pEPDB);
    }
  }
  /* Network 53 */
  {
    {
      LC_this->LC_VD_ANLG8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG8.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG8.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG8.LC_VD_CH = (LC_TD_USINT)10;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG8), pEPDB);
    }
  }
  /* Network 54 */
  {
    {
      LC_this->LC_VD_IOWR22.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR22.LC_VD_PORT = LC_ED__TMS570_GIO__A;
      LC_this->LC_VD_IOWR22.LC_VD_PIN = (LC_TD_UINT)7;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR22), pEPDB);
    }
  }
  /* Network 55 */
  {
    {
      LC_this->LC_VD_IOWR23.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR23.LC_VD_PORT = LC_ED__TMS570_GIO__A;
      LC_this->LC_VD_IOWR23.LC_VD_PIN = (LC_TD_UINT)6;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR23), pEPDB);
    }
  }
  /* Network 56 */
  {
    {
      LC_this->LC_VD_IOWR7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR7.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR7.LC_VD_PIN = (LC_TD_UINT)22;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR7), pEPDB);
    }
  }
  /* Network 57 */
  {
    {
      LC_this->LC_VD_IOWR9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR9.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR9.LC_VD_PIN = (LC_TD_UINT)8;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR9), pEPDB);
    }
  }
  /* Network 58 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_HW_VERSION, (LC_TD_BYTE)1, pEPDB);
      LC_this->LC_VD___1957_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD___1957_EQ, LC_EL_false, LC_EL_true, pEPDB);
      LC_this->LC_VD___1958_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_this->LC_VD_IOWR19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR19.LC_VD_PORT = LC_ED__TMS570_GIO__SPI2;
      LC_this->LC_VD_IOWR19.LC_VD_PIN = (LC_TD_UINT)10;
      LC_this->LC_VD_IOWR19.LC_VD_VAL = LC_this->LC_VD___1958_SEL;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR19), pEPDB);
    }
  }
  /* Network 59 */
  {
    {
      LC_this->LC_VD_DGTIN4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_DGTIN4.LC_VD_CH = (LC_TD_USINT)2;
      lcfu___DGTIN(&(LC_this->LC_VD_DGTIN4), pEPDB);
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__USINT(&lFunction_TO_BOOL, LC_this->LC_VD_DGTIN4.LC_VD_STAT, pEPDB);
      LC_this->LC_VD_CONTACTFBKCHARGE = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___330_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
  }
  /* Network 60 */
  {
    {
      LC_this->LC_VD_DGTIN3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_DGTIN3.LC_VD_CH = (LC_TD_USINT)3;
      lcfu___DGTIN(&(LC_this->LC_VD_DGTIN3), pEPDB);
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__USINT(&lFunction_TO_BOOL, LC_this->LC_VD_DGTIN3.LC_VD_STAT, pEPDB);
      LC_this->LC_VD_CONTACTFBKDISCHARGE = lFunction_TO_BOOL.LC_VD_TO_BOOL;
      LC_this->LC_VD___453_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
  }
  /* Network 61 */
  {
    {
      LC_this->LC_VD_DGTIN8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_DGTIN8.LC_VD_CH = (LC_TD_USINT)4;
      lcfu___DGTIN(&(LC_this->LC_VD_DGTIN8), pEPDB);
    }
  }
  /* Network 62 */
  {
    {
      LC_this->LC_VD_IORD1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IORD1.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IORD1.LC_VD_PIN = (LC_TD_UINT)12;
      lcfu___IORD(&(LC_this->LC_VD_IORD1), pEPDB);
    }
  }
  /* Network 63 */
  {
    {
      LC_this->LC_VD_IORD4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IORD4.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IORD4.LC_VD_PIN = (LC_TD_UINT)16;
      lcfu___IORD(&(LC_this->LC_VD_IORD4), pEPDB);
    }
  }
  /* Network 64 */
  {
    {
      LC_this->LC_VD_IOWR5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR5.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR5.LC_VD_PIN = (LC_TD_UINT)24;
      LC_this->LC_VD_IOWR5.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR5), pEPDB);
    }
  }
  /* Network 65 */
  {
    {
      LC_this->LC_VD_IORD5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IORD5.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IORD5.LC_VD_PIN = (LC_TD_UINT)14;
      lcfu___IORD(&(LC_this->LC_VD_IORD5), pEPDB);
    }
  }
  /* Network 66 */
  {
    {
      LC_this->LC_VD_IORD2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IORD2.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IORD2.LC_VD_PIN = (LC_TD_UINT)18;
      lcfu___IORD(&(LC_this->LC_VD_IORD2), pEPDB);
    }
  }
  /* Network 67 */
  {
    LC_this->LC_VD_HVIL1_STATUS = LC_EL_true;
  }
  /* Network 68 */
  {
    {
      LC_TD_Function_NOT__BOOL lFunction_NOT;
      LC_INIT_Function_NOT__BOOL(&lFunction_NOT);
      lFunction_NOT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NOT__BOOL(&lFunction_NOT, LC_this->LC_VD_HVIL1_STATUS, pEPDB);
      LC_this->LC_VD___510_NOT = lFunction_NOT.LC_VD_NOT;
    }
    {
      LC_this->LC_VD_BUFFER10.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER10.LC_VD_I = LC_this->LC_VD___510_NOT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER10), pEPDB);
    }
    {
      LC_this->LC_VD_TOF6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF6.LC_VD_IN = LC_this->LC_VD_BUFFER10.LC_VD_O;
      LC_this->LC_VD_TOF6.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF6), pEPDB);
      LC_this->LC_VD_FAULT_PACK_HVIL_1 = LC_this->LC_VD_TOF6.LC_VD_Q;
    }
  }
  /* Network 69 */
  {
    {
      LC_this->LC_VD_IOWR6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR6.LC_VD_PORT = LC_ED__TMS570_GIO__SPI3;
      LC_this->LC_VD_IOWR6.LC_VD_PIN = (LC_TD_UINT)8;
      LC_this->LC_VD_IOWR6.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR6), pEPDB);
    }
  }
  /* Network 70 */
  {
    LC_this->LC_VD_HVIL2_STATUS = LC_EL_true;
  }
  /* Network 71 */
  {
    {
      LC_TD_Function_NOT__BOOL lFunction_NOT;
      LC_INIT_Function_NOT__BOOL(&lFunction_NOT);
      lFunction_NOT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NOT__BOOL(&lFunction_NOT, LC_this->LC_VD_HVIL2_STATUS, pEPDB);
      LC_this->LC_VD___2154_NOT = lFunction_NOT.LC_VD_NOT;
    }
    {
      LC_this->LC_VD_BUFFER13.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER13.LC_VD_I = LC_this->LC_VD___2154_NOT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER13), pEPDB);
    }
    {
      LC_this->LC_VD_TOF10.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF10.LC_VD_IN = LC_this->LC_VD_BUFFER13.LC_VD_O;
      LC_this->LC_VD_TOF10.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF10), pEPDB);
      LC_this->LC_VD_FAULT_PACK_HVIL_2 = LC_this->LC_VD_TOF10.LC_VD_Q;
    }
  }
  /* Network 72 */
  {
    {
      LC_this->LC_VD_IORD3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IORD3.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IORD3.LC_VD_PIN = (LC_TD_UINT)17;
      lcfu___IORD(&(LC_this->LC_VD_IORD3), pEPDB);
    }
  }
  /* Network 73 */
  {
    {
      LC_this->LC_VD_ANLG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG1.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG1.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG1.LC_VD_CH = (LC_TD_USINT)6;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG1), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__UINT(&lFunction_TO_REAL, LC_this->LC_VD_ANLG1.LC_VD_VAL, pEPDB);
      LC_this->LC_VD___1345_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_this->LC_VD_NTC2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_NTC2.LC_VD_VOLT = LC_this->LC_VD___1345_TO_REAL;
      LC_this->LC_VD_NTC2.LC_VD_VSUP = (LC_TD_REAL)7000;
      LC_this->LC_VD_NTC2.LC_VD_RS = (LC_TD_REAL)10000;
      LC_this->LC_VD_NTC2.LC_VD_BETA = (LC_TD_REAL)3950;
      LC_this->LC_VD_NTC2.LC_VD_TNOM = (LC_TD_REAL)298.15;
      LC_this->LC_VD_NTC2.LC_VD_RNOM = (LC_TD_REAL)10000;
      lcfu___NTC(&(LC_this->LC_VD_NTC2), pEPDB);
      LC_this->LC_VD_PACK_TEMPERATURE = LC_this->LC_VD_NTC2.LC_VD_TEMP;
    }
  }
  /* Network 74 */
  {
    {
      LC_this->LC_VD_IOWR18.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR18.LC_VD_PORT = LC_ED__TMS570_GIO__SPI2;
      LC_this->LC_VD_IOWR18.LC_VD_PIN = (LC_TD_UINT)0;
      LC_this->LC_VD_IOWR18.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR18), pEPDB);
    }
  }
  /* Network 75 */
  {
    {
      LC_this->LC_VD_ANLG2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG2.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG2.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG2.LC_VD_CH = (LC_TD_USINT)5;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG2), pEPDB);
    }
  }
  /* Network 76 */
  {
    {
      LC_this->LC_VD_IOWR20.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR20.LC_VD_PORT = LC_ED__TMS570_GIO__SPI2;
      LC_this->LC_VD_IOWR20.LC_VD_PIN = (LC_TD_UINT)11;
      LC_this->LC_VD_IOWR20.LC_VD_VAL = LC_EL_true;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR20), pEPDB);
    }
  }
  /* Network 77 */
  {
    {
      LC_this->LC_VD_ANLG3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG3.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG3.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG3.LC_VD_CH = (LC_TD_USINT)8;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG3), pEPDB);
    }
  }
  /* Network 78 */
  {
    {
      LC_this->LC_VD_FLASH4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH4.LC_VD_IN = LC_EL_true;
      LC_this->LC_VD_FLASH4.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH4), pEPDB);
    }
    {
      LC_this->LC_VD_IOWR21.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR21.LC_VD_PORT = LC_ED__TMS570_GIO__SPI2;
      LC_this->LC_VD_IOWR21.LC_VD_PIN = (LC_TD_UINT)9;
      LC_this->LC_VD_IOWR21.LC_VD_VAL = LC_this->LC_VD_FLASH4.LC_VD_OUT;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR21), pEPDB);
    }
  }
  /* Network 79 */
  {
    {
      LC_this->LC_VD_ANLG4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ANLG4.LC_VD_ADC = LC_ED__TMSADC__A1;
      LC_this->LC_VD_ANLG4.LC_VD_GRP = LC_ED__TMSADCGRP__G1;
      LC_this->LC_VD_ANLG4.LC_VD_CH = (LC_TD_USINT)11;
      lcfu___ANLG(&(LC_this->LC_VD_ANLG4), pEPDB);
    }
  }
  /* Network 80 */
  {
    {
      LC_this->LC_VD_FLASH1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_FLASH1.LC_VD_IN = LC_EL_true;
      LC_this->LC_VD_FLASH1.LC_VD_PER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(250000000));
      lcfu___FLASH(&(LC_this->LC_VD_FLASH1), pEPDB);
      LC_this->LC_VD_SELCLOCK = LC_this->LC_VD_FLASH1.LC_VD_OUT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__INT(&lFunction_TO_USINT, LC_this->LC_VD_CTU2.LC_VD_CV, pEPDB);
      LC_this->LC_VD_SELECTED_BMU_LOC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___765_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_this->LC_VD_CTU2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CTU2.LC_VD_CU = LC_this->LC_VD_CTU1.LC_VD_Q;
      LC_this->LC_VD_CTU2.LC_VD_R = LC_this->LC_VD_CTU2.LC_VD_Q;
      LC_this->LC_VD_CTU2.LC_VD_PV = LC_this->LC_VD_NUMBER_OF_BMU_CFG;
      lcfu_iec61131__CTU(&(LC_this->LC_VD_CTU2), pEPDB);
    }
    {
      LC_this->LC_VD_CTU1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CTU1.LC_VD_CU = LC_this->LC_VD_FLASH1.LC_VD_OUT;
      LC_this->LC_VD_CTU1.LC_VD_R = LC_this->LC_VD_CTU1.LC_VD_Q;
      LC_this->LC_VD_CTU1.LC_VD_PV = LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_NUMOFCELLS,(LC_TD_USINT)0,(LC_TD_DINT)0,(LC_TD_DINT)15);
      lcfu_iec61131__CTU(&(LC_this->LC_VD_CTU1), pEPDB);
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__INT(&lFunction_TO_USINT, LC_this->LC_VD_CTU1.LC_VD_CV, pEPDB);
      LC_this->LC_VD_SELECTED_CELL_LOC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___766_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
  /* Network 81 */
  {
    {
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_10;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_STATE = LC_this->LC_VD_BMS_STATE;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_CONTACTOR_STATUS = LC_this->LC_VD_CONTACTFBK;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_CHARGECONTACT = LC_this->LC_VD_CONTACTFBKCHARGE;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_AMBIENT_TEMP = LC_this->LC_VD_PACK_TEMPERATURE;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_DMDC = LC_this->LC_VD_PACK_DMDC;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_DMCC = LC_this->LC_VD_PACK_DMCC;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_NEGCONTACT = LC_this->LC_VD_CONTACTFBKDISCHARGE;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_ISOLATIONSTATUS = LC_this->LC_VD_ISOLATIONSTATUS;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_CHARGECOMPLETE = LC_this->LC_VD_CHARGEPROTECT;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_DISCHARGECOMPLETE = LC_this->LC_VD_DISCHARGEPROTECT;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_EMERGENCYBUTTON = LC_this->LC_VD_EMERGENCYBTN;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_IN1STATUS = LC_this->LC_VD_INPUTSGN1STATUS;
      LC_this->LC_VD_BCU_STATE_MESSAGE1.LC_VD_IN2STATUS = LC_this->LC_VD_INPUTSGN2STATUS;
      lcfu___BCU_STATE_MESSAGE(&(LC_this->LC_VD_BCU_STATE_MESSAGE1), pEPDB);
    }
    {
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_SELECTED_BMU_LOC = LC_this->LC_VD_SELECTED_BMU_LOC;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_SELECTED_CELL_LOC = LC_this->LC_VD_SELECTED_CELL_LOC;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_CELL_TEMP = LC_this->LC_VD_CELL_TEMP;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_11;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_TOTAL_VOLTAGE = LC_this->LC_VD_TOTAL_VOLTAGE;
      LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_INSTANT_CURRENT = LC_this->LC_VD_BATTERYCURRENT;
      lcfu___BCU_CELL_STATUS(&(LC_this->LC_VD_BCU_CELL_STATUS1), pEPDB);
      LC_this->LC_VD_CAN_FAULT_03 = LC_this->LC_VD_BCU_CELL_STATUS1.LC_VD_CAN_ERROR;
    }
    {
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MAX_VOLT_BMU_LOC = LC_this->LC_VD_CELL_VOLTAGE_MAX_BMU_LOC;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MAX_VOLT_CELL_LOC = LC_this->LC_VD_CELL_VOLTAGE_MAX_CELL_LOC;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MIN_VOLT_BMU_LOC = LC_this->LC_VD_CELL_VOLTAGE_MIN_BMU_LOC;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MIN_VOLT_CELL_LOC = LC_this->LC_VD_CELL_VOLTAGE_MIN_CELL_LOC;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MAX_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_MAX;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_MIN_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_MIN;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_AVERAGE_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_AVERAGE;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_12;
      LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      lcfu___MAX_MIN_VOLTAGE_STATUS(&(LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1), pEPDB);
      LC_this->LC_VD_CAN_FAULT_04 = LC_this->LC_VD_MAX_MIN_VOLTAGE_STATUS1.LC_VD_CAN_ERROR;
    }
    {
      LC_this->LC_VD_BCU_STATUS21.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MAX_TEMP_BMU_LOC = LC_this->LC_VD_CELL_TEMP_MAX_BMU_LOC;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MAX_TEMP_CELL_LOC = LC_this->LC_VD_CELL_TEMP_MAX_CELL_LOC;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MIN_TEMP_BMU_LOC = LC_this->LC_VD_CELL_TEMP_MIN_BMU_LOC;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MIN_TEMP_CELL_LOC = LC_this->LC_VD_CELL_TEMP_MIN_CELL_LOC;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MAX_CELL_TEMP = LC_this->LC_VD_CELL_TEMP_MAX;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_MIN_CELL_TEMP = LC_this->LC_VD_CELL_TEMP_MIN;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_13;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_BCU_STATUS21.LC_VD_OUTVOLT = LC_this->LC_VD_OUTPUTVOLTAGE;
      lcfu___BCU_STATUS2(&(LC_this->LC_VD_BCU_STATUS21), pEPDB);
      LC_this->LC_VD_CAN_FAULT_05 = LC_this->LC_VD_BCU_STATUS21.LC_VD_CAN_ERROR;
    }
    {
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_SOC = LC_this->LC_VD_SOC_CC;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_SOH = LC_this->LC_VD_SOH;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_DUTY_CYCLE = LC_this->LC_VD_DUTY_CYCLE;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_REMAIN_ENERGY = LC_this->LC_VD_USABLEREMKWH;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_14;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_AVAILABLE_ENERGY = LC_this->LC_VD_USABLECAPKWH;
      lcfu___BCU_BATTERY_STATUS(&(LC_this->LC_VD_BCU_BATTERY_STATUS1), pEPDB);
      LC_this->LC_VD_CAN_FAULT_06 = LC_this->LC_VD_BCU_BATTERY_STATUS1.LC_VD_CAN_ERROR;
    }
  }
  /* Network 82 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_UV_DANGER, LC_this->LC_VD_DISCHARGECOMPLETE, pEPDB);
      LC_this->LC_VD_DISCHARGEPROTECT = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1278_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)5, pEPDB);
      LC_this->LC_VD___1296_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___1296_GT, LC_this->LC_VD___1278_OR, pEPDB);
      LC_this->LC_VD___1291_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON17.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON17.LC_VD_IN = LC_this->LC_VD___1291_AND;
      LC_this->LC_VD_TON17.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON17), pEPDB);
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_BATTERYDISCHARGING, LC_this->LC_VD___1278_OR, pEPDB);
      LC_this->LC_VD___2358_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON2.LC_VD_IN = LC_this->LC_VD___2358_AND;
      LC_this->LC_VD_TON2.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(120),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON2), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_TON17.LC_VD_Q, LC_this->LC_VD_TON2.LC_VD_Q, pEPDB);
      LC_this->LC_VD___1304_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___1278_OR, LC_this->LC_VD___1304_OR, pEPDB);
      LC_this->LC_VD_DISCHARGEOFF = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___1300_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 83 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_OV_DANGER, LC_this->LC_VD_BCU_CHARGE_COMPLETE, pEPDB);
      LC_this->LC_VD_CHARGEPROTECT = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1315_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)-5, pEPDB);
      LC_this->LC_VD___1283_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___1283_LT, LC_this->LC_VD___1315_OR, pEPDB);
      LC_this->LC_VD___1375_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON19.LC_VD_IN = LC_this->LC_VD___1375_AND;
      LC_this->LC_VD_TON19.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON19), pEPDB);
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD_BATTERYCHARGING, LC_this->LC_VD___1315_OR, pEPDB);
      LC_this->LC_VD___1313_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON18.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON18.LC_VD_IN = LC_this->LC_VD___1313_AND;
      LC_this->LC_VD_TON18.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(120),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON18), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_TON19.LC_VD_Q, LC_this->LC_VD_TON18.LC_VD_Q, pEPDB);
      LC_this->LC_VD___1282_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___1315_OR, LC_this->LC_VD___1282_OR, pEPDB);
      LC_this->LC_VD_CHARGEOFF = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___2618_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 84 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__3(&lFunction_OR, LC_this->LC_VD_CHARGEOFF, LC_this->LC_VD_DISCHARGEOFF, LC_this->LC_VD_EMERGENCYBTN, pEPDB);
      LC_this->LC_VD_CURRENTPROTECTION = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___2624_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 85 */
  {
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD_SLAVEMODE, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_BATTERYINCHARGE)), LC_this->LC_VD_DISCHARGECMD, pEPDB);
      LC_this->LC_VD___1642_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CURRENTPROTECTION)), LC_this->LC_VD___1642_SEL, pEPDB);
      LC_this->LC_VD_DISCHARGEENB = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___1646_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD_SLAVEMODE, LC_this->LC_VD_BATTERYINCHARGE, LC_this->LC_VD_CHARGECMD, pEPDB);
      LC_this->LC_VD___1648_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CURRENTPROTECTION)), LC_this->LC_VD___1648_SEL, pEPDB);
      LC_this->LC_VD_CHARGEENB = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___2630_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON3.LC_VD_IN = LC_this->LC_VD_EMERGENCYBTN;
      LC_this->LC_VD_TON3.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(250000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON3), pEPDB);
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD_SLAVEMODE, LC_this->LC_VD_TON3.LC_VD_Q, LC_this->LC_VD_SHUTDOWNCMD, pEPDB);
      LC_this->LC_VD_SHUTDOWNENB = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___2432_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 86 */
  {
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__UDINT(&lFunction_TO_REAL, LC_this->LC_VD_NTCBETA, pEPDB);
      LC_this->LC_VD___265_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_this->LC_VD_BATTSTACK1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BATTSTACK1.LC_VD_NBOARDS = LC_this->LC_VD_NUMBER_OF_BMU_CFG;
      LC_this->LC_VD_BATTSTACK1.LC_VD_BAUD = (LC_TD_UDINT)250000UL;
      LC_this->LC_VD_BATTSTACK1.LC_VD_OVTHRES = LC_this->LC_VD_CELL_VOLTAGE_MAX_CHARGE;
      LC_this->LC_VD_BATTSTACK1.LC_VD_UVTHRES = LC_this->LC_VD_CELL_VOLTAGE_MIN_DISHARGE;
      LC_this->LC_VD_BATTSTACK1.LC_VD_M_ALL_R = LC_this->LC_VD_MEASURE_ALL;
      LC_this->LC_VD_BATTSTACK1.LC_VD_M_AUX_R = LC_this->LC_VD_MEASURE_AUX;
      LC_ASSIGN_ARRAY_VAR(LC_this->LC_VD_BATTSTACK1.LC_VD_N_CELLS[0], LC_this->LC_VD_NUMOFCELLS[0], LC_TD_USINT, 16);
      LC_ASSIGN_ARRAY_VAR(LC_this->LC_VD_BATTSTACK1.LC_VD_T_CELLS[0], LC_this->LC_VD_TAUXCELLS[0], LC_TD_USINT, 16);
      LC_ASSIGN_ARRAY_VAR(LC_this->LC_VD_BATTSTACK1.LC_VD_CHSEL[0], LC_this->LC_VD_CHANNELSELECT[0], LC_TD_DataType_PLCHANNEL, 16);
      LC_this->LC_VD_BATTSTACK1.LC_VD_BRD = LC_this->LC_VD_SELECTED_BMU_LOC;
      LC_this->LC_VD_BATTSTACK1.LC_VD_CELL = LC_this->LC_VD_SELECTED_CELL_LOC;
      LC_this->LC_VD_BATTSTACK1.LC_VD_CH = LC_ED__PLCHANNEL__AUX0;
      LC_this->LC_VD_BATTSTACK1.LC_VD_BALV = LC_this->LC_VD_BALANCE_VOLTAGE;
      LC_this->LC_VD_BATTSTACK1.LC_VD_BALENB = LC_this->LC_VD_BALANCE_ENABLE_RQ;
      LC_this->LC_VD_BATTSTACK1.LC_VD_NTCBETA = LC_this->LC_VD___265_TO_REAL;
      LC_this->LC_VD_BATTSTACK1.LC_VD_NTCNOMT_KLV = (LC_TD_REAL)298.15;
      LC_this->LC_VD_BATTSTACK1.LC_VD_NTCNOMR_OHM = (LC_TD_REAL)10000.0;
      LC_this->LC_VD_BATTSTACK1.LC_VD_ENB = LC_EL_true;
      lcfu___BATTSTACK(&(LC_this->LC_VD_BATTSTACK1), pEPDB);
      LC_this->LC_VD_NUMBER_OF_BMU = LC_this->LC_VD_BATTSTACK1.LC_VD_N_BRD;
      LC_this->LC_VD_CELL_VOLTAGE = LC_this->LC_VD_BATTSTACK1.LC_VD_VCELL;
      LC_this->LC_VD_CELL_VOLTAGE_AVERAGE = LC_this->LC_VD_BATTSTACK1.LC_VD_VAV;
      LC_this->LC_VD_CELL_VOLTAGE_MIN = LC_this->LC_VD_BATTSTACK1.LC_VD_VMINCELL;
      LC_this->LC_VD_CELL_VOLTAGE_MAX = LC_this->LC_VD_BATTSTACK1.LC_VD_VMAXCELL;
      LC_this->LC_VD_TOTAL_VOLTAGE = LC_this->LC_VD_BATTSTACK1.LC_VD_VSTACK;
      LC_this->LC_VD_CELL_VOLTAGE_MAX_BMU_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MAXCELLBRD;
      LC_this->LC_VD_CELL_VOLTAGE_MAX_CELL_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MAXCELLNUM;
      LC_this->LC_VD_CELL_VOLTAGE_MIN_BMU_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MINCELLBRD;
      LC_this->LC_VD_CELL_VOLTAGE_MIN_CELL_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MINCELLNUM;
      LC_this->LC_VD_BALANCE_REGISTER = LC_this->LC_VD_BATTSTACK1.LC_VD_BALREG;
      LC_this->LC_VD_CELL_TEMP = LC_this->LC_VD_BATTSTACK1.LC_VD_TEMPCELL;
      LC_this->LC_VD_CELL_TEMP_MAX = LC_this->LC_VD_BATTSTACK1.LC_VD_MAXTEMP;
      LC_this->LC_VD_CELL_TEMP_MIN = LC_this->LC_VD_BATTSTACK1.LC_VD_MINTEMP;
      LC_this->LC_VD_CELL_TEMP_MAX_BMU_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MAXTEMPBRD;
      LC_this->LC_VD_CELL_TEMP_MAX_CELL_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MAXTEMPCELL;
      LC_this->LC_VD_CELL_TEMP_MIN_BMU_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MINTEMPBRD;
      LC_this->LC_VD_CELL_TEMP_MIN_CELL_LOC = LC_this->LC_VD_BATTSTACK1.LC_VD_MINTEMPCELL;
      LC_this->LC_VD_BOARD_FAULT_MESSAGES = LC_this->LC_VD_BATTSTACK1.LC_VD_FAULT;
      LC_this->LC_VD_BOARD_ERROR_MESSAGES = LC_this->LC_VD_BATTSTACK1.LC_VD_ERR;
    }
  }
  /* Network 87 */
  {
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_CUTOFFLOW, pEPDB);
      LC_this->LC_VD___803_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_this->LC_VD_BUFFER1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER1.LC_VD_I = LC_this->LC_VD___803_LT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER1), pEPDB);
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_TOTAL_VOLTAGE, LC_this->LC_VD_PACK_CUTOFFLOW_VOLTAGE, pEPDB);
      LC_this->LC_VD___1669_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_this->LC_VD_BUFFER3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER3.LC_VD_I = LC_this->LC_VD___1669_LT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER3), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_BUFFER1.LC_VD_O, LC_this->LC_VD_BUFFER3.LC_VD_O, pEPDB);
      LC_this->LC_VD_UV_FAULT = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1819_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_CUTOFFHIGH, pEPDB);
      LC_this->LC_VD___1684_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_this->LC_VD_BUFFER2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER2.LC_VD_I = LC_this->LC_VD___1684_GT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER2), pEPDB);
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_TOTAL_VOLTAGE, LC_this->LC_VD_PACK_CUTOFFHIGH_VOLTAGE, pEPDB);
      LC_this->LC_VD___1825_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_this->LC_VD_BUFFER4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER4.LC_VD_I = LC_this->LC_VD___1825_GT;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER4), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_BUFFER2.LC_VD_O, LC_this->LC_VD_BUFFER4.LC_VD_O, pEPDB);
      LC_this->LC_VD_OV_FAULT = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1706_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 88 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_WARNINGOV, pEPDB);
      LC_this->LC_VD___364_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TON6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON6.LC_VD_IN = LC_this->LC_VD___364_GE;
      LC_this->LC_VD_TON6.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON6), pEPDB);
      LC_this->LC_VD_OV_DANGER_RISK = LC_this->LC_VD_TON6.LC_VD_Q;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_MAX, pEPDB);
      LC_this->LC_VD___1580_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TON8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON8.LC_VD_IN = LC_this->LC_VD___1580_GE;
      LC_this->LC_VD_TON8.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(20),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON8), pEPDB);
      LC_this->LC_VD_OV_DANGER = LC_this->LC_VD_TON8.LC_VD_Q;
    }
  }
  /* Network 89 */
  {
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_WARNINGUV, pEPDB);
      LC_this->LC_VD___404_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_TON7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON7.LC_VD_IN = LC_this->LC_VD___404_LE;
      LC_this->LC_VD_TON7.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(100000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON7), pEPDB);
      LC_this->LC_VD_UV_DANGER_RISK = LC_this->LC_VD_TON7.LC_VD_Q;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_MIN, pEPDB);
      LC_this->LC_VD___1582_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_TON9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON9.LC_VD_IN = LC_this->LC_VD___1582_LE;
      LC_this->LC_VD_TON9.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(20),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON9), pEPDB);
      LC_this->LC_VD_UV_DANGER = LC_this->LC_VD_TON9.LC_VD_Q;
    }
  }
  /* Network 90 */
  {
    {
      LC_TD_Function_SUB__REAL lFunction_SUB;
      LC_INIT_Function_SUB__REAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_CELLTEMP_MAXLIM, (LC_TD_REAL)1, pEPDB);
      LC_this->LC_VD___276_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_TEMP_MAX, LC_this->LC_VD___276_SUB, pEPDB);
      LC_this->LC_VD___279_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TON10.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON10.LC_VD_IN = LC_this->LC_VD___279_GE;
      LC_this->LC_VD_TON10.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON10), pEPDB);
      LC_this->LC_VD_OT_DANGER_RISK = LC_this->LC_VD_TON10.LC_VD_Q;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_TEMP_MAX, LC_this->LC_VD_CELLTEMP_MAXLIM, pEPDB);
      LC_this->LC_VD___920_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_TON12.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON12.LC_VD_IN = LC_this->LC_VD___920_GE;
      LC_this->LC_VD_TON12.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON12), pEPDB);
      LC_this->LC_VD_OT_DANGER = LC_this->LC_VD_TON12.LC_VD_Q;
    }
  }
  /* Network 91 */
  {
    {
      LC_TD_Function_ADD__REAL lFunction_ADD;
      LC_INIT_Function_ADD__REAL(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD_CELLTEMP_MINLIM, (LC_TD_REAL)1, pEPDB);
      LC_this->LC_VD___277_ADD = lFunction_ADD.LC_VD_ADD;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_TEMP_MIN, LC_this->LC_VD___277_ADD, pEPDB);
      LC_this->LC_VD___919_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_TON11.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON11.LC_VD_IN = LC_this->LC_VD___919_LE;
      LC_this->LC_VD_TON11.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON11), pEPDB);
      LC_this->LC_VD_UT_DANGER_RISK = LC_this->LC_VD_TON11.LC_VD_Q;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_TEMP_MIN, LC_this->LC_VD_CELLTEMP_MINLIM, pEPDB);
      LC_this->LC_VD___1073_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_TON13.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON13.LC_VD_IN = LC_this->LC_VD___1073_LE;
      LC_this->LC_VD_TON13.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(2),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON13), pEPDB);
      LC_this->LC_VD_UT_DANGER = LC_this->LC_VD_TON13.LC_VD_Q;
    }
  }
  /* Network 92 */
  {
    {
      LC_this->LC_VD_BUFFER12.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER12.LC_VD_I = LC_this->LC_VD_OV_DANGER_RISK;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER12), pEPDB);
    }
    {
      LC_this->LC_VD_TOF1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF1.LC_VD_IN = LC_this->LC_VD_BUFFER12.LC_VD_O;
      LC_this->LC_VD_TOF1.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF1), pEPDB);
      LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_WARNING = LC_this->LC_VD_TOF1.LC_VD_Q;
    }
  }
  /* Network 93 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_OV_DANGER, LC_this->LC_VD_OV_FAULT, pEPDB);
      LC_this->LC_VD___259_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_TOF12.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF12.LC_VD_IN = LC_this->LC_VD___259_OR;
      LC_this->LC_VD_TOF12.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF12), pEPDB);
      LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_DANGER = LC_this->LC_VD_TOF12.LC_VD_Q;
    }
  }
  /* Network 94 */
  {
    {
      LC_this->LC_VD_BUFFER19.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER19.LC_VD_I = LC_this->LC_VD_UV_DANGER_RISK;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER19), pEPDB);
    }
    {
      LC_this->LC_VD_TOF14.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF14.LC_VD_IN = LC_this->LC_VD_BUFFER19.LC_VD_O;
      LC_this->LC_VD_TOF14.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF14), pEPDB);
      LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_WARNING = LC_this->LC_VD_TOF14.LC_VD_Q;
    }
  }
  /* Network 95 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_UV_DANGER, LC_this->LC_VD_UV_FAULT, pEPDB);
      LC_this->LC_VD___1813_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_TOF13.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF13.LC_VD_IN = LC_this->LC_VD___1813_OR;
      LC_this->LC_VD_TOF13.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF13), pEPDB);
      LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_DANGER = LC_this->LC_VD_TOF13.LC_VD_Q;
    }
  }
  /* Network 96 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_TEMP_MAX, LC_this->LC_VD_CELLTEMP_WARNINGOT, pEPDB);
      LC_this->LC_VD___288_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_this->LC_VD_BUFFER11.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER11.LC_VD_I = LC_this->LC_VD___288_GE;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER11), pEPDB);
    }
    {
      LC_this->LC_VD_TOF3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF3.LC_VD_IN = LC_this->LC_VD_BUFFER11.LC_VD_O;
      LC_this->LC_VD_TOF3.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF3), pEPDB);
      LC_this->LC_VD_FAULT_CELL_OVER_TEMP_WARNING = LC_this->LC_VD_TOF3.LC_VD_Q;
    }
  }
  /* Network 97 */
  {
    {
      LC_this->LC_VD_TOF2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF2.LC_VD_IN = LC_this->LC_VD_OT_DANGER;
      LC_this->LC_VD_TOF2.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF2), pEPDB);
      LC_this->LC_VD_FAULT_CELL_OVER_TEMP_DANGER = LC_this->LC_VD_TOF2.LC_VD_Q;
    }
  }
  /* Network 98 */
  {
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_TEMP_MIN, LC_this->LC_VD_CELLTEMP_WARNINGUT, pEPDB);
      LC_this->LC_VD___286_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_this->LC_VD_BUFFER9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER9.LC_VD_I = LC_this->LC_VD___286_LE;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER9), pEPDB);
    }
    {
      LC_this->LC_VD_TOF5.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF5.LC_VD_IN = LC_this->LC_VD_BUFFER9.LC_VD_O;
      LC_this->LC_VD_TOF5.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF5), pEPDB);
      LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_WARNING = LC_this->LC_VD_TOF5.LC_VD_Q;
    }
  }
  /* Network 99 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__5(&lFunction_OR, LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_WARNING, LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_WARNING, LC_this->LC_VD_FAULT_CELL_OVER_TEMP_WARNING, LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_WARNING, LC_this->LC_VD_WARNINGMDLBALT, pEPDB);
      LC_this->LC_VD_BCU_FAULT_WARNING = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___2011_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 100 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_NUMBER_OF_BMU, LC_this->LC_VD_NUMBER_OF_BMU_CFG, pEPDB);
      LC_this->LC_VD___932_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_TBUFFER2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER2.LC_VD_I = LC_this->LC_VD___932_NE;
      LC_this->LC_VD_TBUFFER2.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER2), pEPDB);
    }
    {
      LC_TD_Function_TO_DWORD lFunction_TO_DWORD;
      LC_INIT_Function_TO_DWORD(&lFunction_TO_DWORD);
      lFunction_TO_DWORD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_DWORD__UDINT(&lFunction_TO_DWORD, LC_this->LC_VD_BOARD_ERROR_MESSAGES, pEPDB);
      LC_this->LC_VD___1213_TO_DWORD = lFunction_TO_DWORD.LC_VD_TO_DWORD;
    }
    {
      LC_TD_Function_AND__DWORD lFunction_AND;
      LC_INIT_Function_AND__DWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_this->LC_VD___1213_TO_DWORD, (LC_TD_DWORD)1UL, pEPDB);
      LC_this->LC_VD___1215_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__DWORD(&lFunction_TO_BOOL, LC_this->LC_VD___1215_AND, pEPDB);
      LC_this->LC_VD___1239_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_AND__DWORD lFunction_AND;
      LC_INIT_Function_AND__DWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_this->LC_VD___1213_TO_DWORD, (LC_TD_DWORD)2UL, pEPDB);
      LC_this->LC_VD___934_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__DWORD(&lFunction_TO_BOOL, LC_this->LC_VD___934_AND, pEPDB);
      LC_this->LC_VD___1233_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_AND__DWORD lFunction_AND;
      LC_INIT_Function_AND__DWORD(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__ANY__2(&lFunction_AND, LC_this->LC_VD___1213_TO_DWORD, (LC_TD_DWORD)4UL, pEPDB);
      LC_this->LC_VD___1229_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_TO_BOOL lFunction_TO_BOOL;
      LC_INIT_Function_TO_BOOL(&lFunction_TO_BOOL);
      lFunction_TO_BOOL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_BOOL__DWORD(&lFunction_TO_BOOL, LC_this->LC_VD___1229_AND, pEPDB);
      LC_this->LC_VD___1227_TO_BOOL = lFunction_TO_BOOL.LC_VD_TO_BOOL;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__3(&lFunction_OR, LC_this->LC_VD___1239_TO_BOOL, LC_this->LC_VD___1233_TO_BOOL, LC_this->LC_VD___1227_TO_BOOL, pEPDB);
      LC_this->LC_VD___1243_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_TBUFFER7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER7.LC_VD_I = LC_this->LC_VD___1243_OR;
      LC_this->LC_VD_TBUFFER7.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER7), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_TBUFFER2.LC_VD_O, LC_this->LC_VD_TBUFFER7.LC_VD_O, pEPDB);
      LC_this->LC_VD_FAULT_PACK_BMU = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1226_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 101 */
  {
    {
      LC_this->LC_VD_TOF4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF4.LC_VD_IN = LC_this->LC_VD_UT_DANGER;
      LC_this->LC_VD_TOF4.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF4), pEPDB);
      LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_DANGER = LC_this->LC_VD_TOF4.LC_VD_Q;
    }
  }
  /* Network 102 */
  {
    {
      LC_this->LC_VD_AMPMULTTEMP1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTTEMP1.LC_VD_TEMP = LC_this->LC_VD_CELL_TEMP_MAX;
      lcfu___AMPMULTTEMP(&(LC_this->LC_VD_AMPMULTTEMP1), pEPDB);
    }
    {
      LC_this->LC_VD_AMPMULTTEMP2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTTEMP2.LC_VD_TEMP = LC_this->LC_VD_CELL_TEMP_MIN;
      lcfu___AMPMULTTEMP(&(LC_this->LC_VD_AMPMULTTEMP2), pEPDB);
    }
    {
      LC_TD_Function_MIN__REAL lFunction_MIN;
      LC_INIT_Function_MIN__REAL(&lFunction_MIN);
      lFunction_MIN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MIN__ANY__2(&lFunction_MIN, LC_this->LC_VD_AMPMULTTEMP1.LC_VD_MULT, LC_this->LC_VD_AMPMULTTEMP2.LC_VD_MULT, pEPDB);
      LC_this->LC_VD___838_MIN = lFunction_MIN.LC_VD_MIN;
    }
    {
      LC_this->LC_VD_AMPMULTVOLTCHAR1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTVOLTCHAR1.LC_VD_CHARGEON = LC_this->LC_VD_BATTERYCHARGING;
      LC_this->LC_VD_AMPMULTVOLTCHAR1.LC_VD_MAXCELL = LC_this->LC_VD_CELL_VOLTAGE_MAX;
      lcfu___AMPMULTVOLTCHAR(&(LC_this->LC_VD_AMPMULTVOLTCHAR1), pEPDB);
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___838_MIN, LC_this->LC_VD_AMPMULTVOLTCHAR1.LC_VD_MULT, pEPDB);
      LC_this->LC_VD_MULTAMPCHAR = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___1016_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
  /* Network 103 */
  {
    {
      LC_this->LC_VD_AMPMULTTEMPDIS1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTTEMPDIS1.LC_VD_TEMP = LC_this->LC_VD_CELL_TEMP_MAX;
      lcfu___AMPMULTTEMPDIS(&(LC_this->LC_VD_AMPMULTTEMPDIS1), pEPDB);
    }
    {
      LC_this->LC_VD_AMPMULTTEMPDIS2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTTEMPDIS2.LC_VD_TEMP = LC_this->LC_VD_CELL_TEMP_MIN;
      lcfu___AMPMULTTEMPDIS(&(LC_this->LC_VD_AMPMULTTEMPDIS2), pEPDB);
    }
    {
      LC_TD_Function_MIN__REAL lFunction_MIN;
      LC_INIT_Function_MIN__REAL(&lFunction_MIN);
      lFunction_MIN.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MIN__ANY__2(&lFunction_MIN, LC_this->LC_VD_AMPMULTTEMPDIS1.LC_VD_MULT, LC_this->LC_VD_AMPMULTTEMPDIS2.LC_VD_MULT, pEPDB);
      LC_this->LC_VD___1195_MIN = lFunction_MIN.LC_VD_MIN;
    }
    {
      LC_this->LC_VD_AMPMULTVOLTDISC1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_AMPMULTVOLTDISC1.LC_VD_DISCON = LC_this->LC_VD_BATTERYDISCHARGING;
      LC_this->LC_VD_AMPMULTVOLTDISC1.LC_VD_MINCELL = LC_this->LC_VD_CELL_VOLTAGE_MIN;
      lcfu___AMPMULTVOLTDISC(&(LC_this->LC_VD_AMPMULTVOLTDISC1), pEPDB);
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___1195_MIN, LC_this->LC_VD_AMPMULTVOLTDISC1.LC_VD_MULT, pEPDB);
      LC_this->LC_VD_MULTAMPDISCH = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___1201_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
  /* Network 104 */
  {
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_MULTAMPCHAR, LC_this->LC_VD_MAXCHARGEAMPRCFG, pEPDB);
      LC_this->LC_VD_MAXCHARGEAMP = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___1872_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
  /* Network 105 */
  {
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_MULTAMPDISCH, LC_this->LC_VD_MAXDISCHARGEAMPRCFG, pEPDB);
      LC_this->LC_VD_MAXDISCHARGEAMP = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___1889_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
  /* Network 106 */
  {
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_CMDBCU, (LC_TD_USINT)170, pEPDB);
      LC_this->LC_VD___657_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_CMDTMT)), LC_this->LC_VD___657_GT, pEPDB);
      LC_this->LC_VD___672_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD___672_AND, LC_this->LC_VD_CONTACTENABLE_BATT, LC_this->LC_VD_FORCEDISCHARGE, pEPDB);
      LC_this->LC_VD_CONTACTENABLE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___659_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD___672_AND, LC_this->LC_VD_CONTACTNEGENABLE_BATT, LC_this->LC_VD_FORCENEGATIVE, pEPDB);
      LC_this->LC_VD_CONTACTNEGENABLE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___2185_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_SEL__BOOL lFunction_SEL;
      LC_INIT_Function_SEL__BOOL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__BOOL(&lFunction_SEL, LC_this->LC_VD___672_AND, LC_this->LC_VD_CONTACTENABLECHARGE_BATT, LC_this->LC_VD_FORCECHARGE, pEPDB);
      LC_this->LC_VD_CONTACTENABLECHARGE = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___543_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 107 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CONTACTENABLECHARGE, LC_this->LC_VD_CONTACTFBKCHARGE, pEPDB);
      LC_this->LC_VD___1109_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_BUFFER23.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER23.LC_VD_I = LC_this->LC_VD___1109_NE;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER23), pEPDB);
    }
    {
      LC_this->LC_VD_TOF9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF9.LC_VD_IN = LC_this->LC_VD_BUFFER23.LC_VD_O;
      LC_this->LC_VD_TOF9.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF9), pEPDB);
      LC_this->LC_VD_FAULT_PACK_CHARGE_CONTACTOR = LC_this->LC_VD_TOF9.LC_VD_Q;
    }
  }
  /* Network 108 */
  {
    {
      LC_TD_Function_MUL__UDINT lFunction_MUL;
      LC_INIT_Function_MUL__UDINT(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__4(&lFunction_MUL, LC_this->LC_VD_NUMBER_OF_CELL, LC_this->LC_VD_NUMBER_OF_PARALLEL_CELL, LC_this->LC_VD_CELL_CURRENT_NOMINAL, LC_this->LC_VD_CELLVOLT_NOMINAL, pEPDB);
      LC_this->LC_VD___74_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__UDINT(&lFunction_TO_REAL, LC_this->LC_VD___74_MUL, pEPDB);
      LC_this->LC_VD___73_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___73_TO_REAL, (LC_TD_REAL)1000000, pEPDB);
      LC_this->LC_VD_KWHCAPACITY = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___75_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_KWHCAPACITY, LC_this->LC_VD_SOCREAL, pEPDB);
      LC_this->LC_VD___2073_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD___2073_MUL, (LC_TD_REAL)100, pEPDB);
      LC_this->LC_VD_PACKREMCAP_KWH = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___2077_DIV = lFunction_DIV.LC_VD_DIV;
    }
  }
  /* Network 109 */
  {
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD_DOD_RATE, LC_this->LC_VD_KWHCAPACITY, pEPDB);
      LC_this->LC_VD_USABLECAPKWH = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___1367_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___1367_MUL, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_USABLECAPWH = lFunction_MUL.LC_VD_MUL;
      LC_this->LC_VD___77_MUL = lFunction_MUL.LC_VD_MUL;
    }
  }
  /* Network 110 */
  {
    {
      LC_TD_Function_DIV__LREAL lFunction_DIV;
      LC_INIT_Function_DIV__LREAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__LREAL(&lFunction_DIV, LC_this->LC_VD_CMD_OVERALL_POWER, LC_this->LC_VD_KWHCAPACITY, pEPDB);
      LC_this->LC_VD___1978_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__LREAL(&lFunction_TO_USINT, LC_this->LC_VD___1978_DIV, pEPDB);
      LC_this->LC_VD_DUTY_CYCLE = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___1981_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
  /* Network 111 */
  {
    {
      LC_TD_Function_DIV__UINT lFunction_DIV;
      LC_INIT_Function_DIV__UINT(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__UINT(&lFunction_DIV, LC_this->LC_VD_DUTY_CYCLE, LC_this->LC_VD_CYCLESPERSOH, pEPDB);
      LC_this->LC_VD___1985_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_SUB__UINT lFunction_SUB;
      LC_INIT_Function_SUB__UINT(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, (LC_TD_UINT)100, LC_this->LC_VD___1985_DIV, pEPDB);
      LC_this->LC_VD___1990_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_LIMIT__UINT lFunction_LIMIT;
      LC_INIT_Function_LIMIT__UINT(&lFunction_LIMIT);
      lFunction_LIMIT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LIMIT__ANY(&lFunction_LIMIT, (LC_TD_UINT)0, LC_this->LC_VD___1990_SUB, (LC_TD_UINT)100, pEPDB);
      LC_this->LC_VD___1993_LIMIT = lFunction_LIMIT.LC_VD_LIMIT;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__UINT(&lFunction_TO_USINT, LC_this->LC_VD___1993_LIMIT, pEPDB);
      LC_this->LC_VD_SOH = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___1995_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
  }
  /* Network 112 */
  {
    {
      LC_this->LC_VD_GUI1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_GUI1.LC_VD_VOLTAGE = LC_this->LC_VD_CMD_VOLTAGE_SENSE_1;
      LC_this->LC_VD_GUI1.LC_VD_CURRENT = LC_this->LC_VD_CMD_CURRENT_SENSE;
      LC_this->LC_VD_GUI1.LC_VD_TEMP = LC_this->LC_VD_PACK_TEMPERATURE;
      LC_this->LC_VD_GUI1.LC_VD_HUMIDITY = LC_this->LC_VD_BMSDMCC_FINAL;
      LC_this->LC_VD_GUI1.LC_VD_FAULT = LC_this->LC_VD_GUI_FAULT;
      LC_this->LC_VD_GUI1.LC_VD_SOC = LC_this->LC_VD_SOC_CC;
      LC_this->LC_VD_GUI1.LC_VD_SOH = LC_this->LC_VD_SOH;
      LC_this->LC_VD_GUI1.LC_VD_CYCLE = LC_this->LC_VD_DUTY_CYCLE;
      LC_this->LC_VD_GUI1.LC_VD_STATE = LC_this->LC_VD_BMS_STATE;
      LC_this->LC_VD_GUI1.LC_VD_ID = LC_this->LC_VD_SELECTED_PACK_NUMBER;
      LC_this->LC_VD_GUI1.LC_VD_CH = LC_this->LC_VD_BCU_CAN_CH;
      lcfu___GUI(&(LC_this->LC_VD_GUI1), pEPDB);
    }
  }
  /* Network 113 */
  {
    {
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_CAN_ID = LC_this->LC_VD_CAN_ID_16;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_00 = LC_this->LC_VD_BCU_FAULT_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_01 = LC_this->LC_VD_BCU_FAULT_DANGER;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_02 = LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_03 = LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_DANGER;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_04 = LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_05 = LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_DANGER;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_06 = LC_this->LC_VD_FAULT_CELL_OVER_TEMP_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_07 = LC_this->LC_VD_FAULT_CELL_OVER_TEMP_DANGER;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_08 = LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_09 = LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_DANGER;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_10 = LC_this->LC_VD_OC_WARNING;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_11 = LC_this->LC_VD_OC_FAULT;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_12 = LC_this->LC_VD_FAULT_PACK_CMS;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_13 = LC_this->LC_VD_FAULT_PACK_DISCHARGE_CONTACTOR;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_14 = LC_this->LC_VD_FAULT_PACK_CHARGE_CONTACTOR;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_15 = LC_this->LC_VD_FAULT_PACK_HVIL_1;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_16 = LC_this->LC_VD_FAULT_PACK_HVIL_2;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_20 = LC_this->LC_VD_FAULT_PACK_BMU;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_21 = LC_this->LC_VD_FAULT_PACK_NEGATIVE_CONTACTOR;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_22 = LC_this->LC_VD_PRECHARGEERROR;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_25 = LC_this->LC_VD_WARNINGMDLBALT;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_26 = LC_this->LC_VD_FAULTMDLBALT;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_33 = LC_this->LC_VD_FAULT_CAN_COMMUNICATION;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_BYTE_5 = LC_this->LC_VD_BOARD_ERROR_MESSAGES;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_CAN_CH = LC_this->LC_VD_BCU_CAN_CH;
      LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_FAULT_BYTE_6_7 = LC_this->LC_VD_BOARD_FAULT_MESSAGES;
      lcfu___BCU_FAULT_CODES(&(LC_this->LC_VD_BCU_FAULT_CODES1), pEPDB);
      LC_this->LC_VD_GUI_FAULT = LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_GUI_FAULT;
      LC_this->LC_VD_FAULTSWORD = LC_this->LC_VD_BCU_FAULT_CODES1.LC_VD_SUM;
    }
  }
  /* Network 114 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_TOTAL_VOLTAGE, LC_this->LC_VD_CHARGEOK_VOLTAGE_PACK, pEPDB);
      LC_this->LC_VD___887_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_CHARGEOK, pEPDB);
      LC_this->LC_VD___544_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD___887_GE, LC_this->LC_VD___544_GE, pEPDB);
      LC_this->LC_VD___542_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_SUB__REAL lFunction_SUB;
      LC_INIT_Function_SUB__REAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_SOCCHCOMP, LC_this->LC_VD_SOCREAL, pEPDB);
      LC_this->LC_VD___582_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD___582_SUB, (LC_TD_REAL)2, pEPDB);
      LC_this->LC_VD___742_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)-5, pEPDB);
      LC_this->LC_VD___757_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___542_OR, LC_this->LC_VD___757_GE, pEPDB);
      LC_this->LC_VD___1702_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TON16.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON16.LC_VD_IN = LC_this->LC_VD___1702_AND;
      LC_this->LC_VD_TON16.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(15),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON16), pEPDB);
    }
    {
      LC_this->LC_VD_SR1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SR1.LC_VD_S1 = LC_this->LC_VD_TON16.LC_VD_Q;
      LC_this->LC_VD_SR1.LC_VD_R = LC_this->LC_VD___742_GT;
      lcfu_iec61131__SR(&(LC_this->LC_VD_SR1), pEPDB);
      LC_this->LC_VD_MAINCHARGECOMPLETE = LC_this->LC_VD_SR1.LC_VD_Q1;
    }
  }
  /* Network 115 */
  {
    {
      LC_this->LC_VD_F_TRIG1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_F_TRIG1.LC_VD_CLK = LC_this->LC_VD_IGNITION;
      lcfu_iec61131__F_TRIG(&(LC_this->LC_VD_F_TRIG1), pEPDB);
    }
    {
      LC_this->LC_VD_F_TRIG2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_F_TRIG2.LC_VD_CLK = LC_this->LC_VD_IGNITION_KL15;
      lcfu_iec61131__F_TRIG(&(LC_this->LC_VD_F_TRIG2), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_F_TRIG1.LC_VD_Q, LC_this->LC_VD_F_TRIG2.LC_VD_Q, pEPDB);
      LC_this->LC_VD___223_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_SOCISZ1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SOCISZ1.LC_VD_CAPACITYWH = LC_this->LC_VD_USABLECAPWH;
      LC_this->LC_VD_SOCISZ1.LC_VD_INSTANTWH = LC_this->LC_VD_WHINSTANT;
      LC_this->LC_VD_SOCISZ1.LC_VD_CHARGECOMPLETED = LC_this->LC_VD_MAINCHARGECOMPLETE;
      LC_this->LC_VD_SOCISZ1.LC_VD_MEMORYWRITE = LC_this->LC_VD___223_OR;
      lcfu___SOCISZ(&(LC_this->LC_VD_SOCISZ1), pEPDB);
      LC_this->LC_VD_SOCREAL = LC_this->LC_VD_SOCISZ1.LC_VD_SOC;
      LC_this->LC_VD_USABLEREMWH = LC_this->LC_VD_SOCISZ1.LC_VD_REMAININGWH;
      LC_this->LC_VD_TESTSOCSTATE = LC_this->LC_VD_SOCISZ1.LC_VD_STATE;
    }
    {
      LC_TD_Function_TO_USINT lFunction_TO_USINT;
      LC_INIT_Function_TO_USINT(&lFunction_TO_USINT);
      lFunction_TO_USINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_USINT__REAL(&lFunction_TO_USINT, LC_this->LC_VD_SOCISZ1.LC_VD_SOC, pEPDB);
      LC_this->LC_VD_SOC_CC = lFunction_TO_USINT.LC_VD_TO_USINT;
      LC_this->LC_VD___933_TO_USINT = lFunction_TO_USINT.LC_VD_TO_USINT;
    }
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_SOCISZ1.LC_VD_REMAININGWH, (LC_TD_REAL)1000, pEPDB);
      LC_this->LC_VD_USABLEREMKWH = lFunction_DIV.LC_VD_DIV;
      LC_this->LC_VD___816_DIV = lFunction_DIV.LC_VD_DIV;
    }
  }
  /* Network 116 */
  {
    {
      LC_this->LC_VD_R_TRIG2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG2.LC_VD_CLK = LC_this->LC_VD_MAINCHARGECOMPLETE;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG2), pEPDB);
    }
    {
      LC_TD_Function_SEL__REAL lFunction_SEL;
      LC_INIT_Function_SEL__REAL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__REAL(&lFunction_SEL, LC_this->LC_VD_R_TRIG2.LC_VD_Q, LC_this->LC_VD_SOCCHCOMP, LC_this->LC_VD_SOCREAL, pEPDB);
      LC_this->LC_VD_SOCCHCOMP = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___435_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 117 */
  {
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_DISCHARGEOK, pEPDB);
      LC_this->LC_VD___246_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_TOTAL_VOLTAGE, LC_this->LC_VD_DICHARGEOK_VOLTAGE_PACK, pEPDB);
      LC_this->LC_VD___1324_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD___246_LT, LC_this->LC_VD___1324_LT, pEPDB);
      LC_this->LC_VD___906_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_SUB__REAL lFunction_SUB;
      LC_INIT_Function_SUB__REAL(&lFunction_SUB);
      lFunction_SUB.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SUB__ANY(&lFunction_SUB, LC_this->LC_VD_SOCREAL, LC_this->LC_VD_SOCDCHCOMP, pEPDB);
      LC_this->LC_VD___944_SUB = lFunction_SUB.LC_VD_SUB;
    }
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD___944_SUB, (LC_TD_REAL)4, pEPDB);
      LC_this->LC_VD___926_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_BATTERYCURRENT, (LC_TD_REAL)10, pEPDB);
      LC_this->LC_VD___341_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___906_OR, LC_this->LC_VD___341_LT, pEPDB);
      LC_this->LC_VD___328_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_this->LC_VD_TBUFFER6.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TBUFFER6.LC_VD_I = LC_this->LC_VD___328_AND;
      LC_this->LC_VD_TBUFFER6.LC_VD_D = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(500000000));
      lcfu___TBUFFER(&(LC_this->LC_VD_TBUFFER6), pEPDB);
    }
    {
      LC_this->LC_VD_SR2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_SR2.LC_VD_S1 = LC_this->LC_VD_TBUFFER6.LC_VD_O;
      LC_this->LC_VD_SR2.LC_VD_R = LC_this->LC_VD___926_GT;
      lcfu_iec61131__SR(&(LC_this->LC_VD_SR2), pEPDB);
      LC_this->LC_VD_DISCHARGECOMPLETE = LC_this->LC_VD_SR2.LC_VD_Q1;
    }
  }
  /* Network 118 */
  {
    {
      LC_this->LC_VD_R_TRIG3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG3.LC_VD_CLK = LC_this->LC_VD_DISCHARGECOMPLETE;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG3), pEPDB);
    }
    {
      LC_TD_Function_SEL__REAL lFunction_SEL;
      LC_INIT_Function_SEL__REAL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__REAL(&lFunction_SEL, LC_this->LC_VD_R_TRIG3.LC_VD_Q, LC_this->LC_VD_SOCDCHCOMP, LC_this->LC_VD_SOCREAL, pEPDB);
      LC_this->LC_VD_SOCDCHCOMP = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___861_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 119 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__14(&lFunction_OR, LC_this->LC_VD_FAULT_CELL_OVER_TEMP_DANGER, LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_DANGER, LC_this->LC_VD_FAULT_CAN_COMMUNICATION, LC_this->LC_VD_FAULT_PACK_HVIL_1, LC_this->LC_VD_FAULT_PACK_BMU, LC_this->LC_VD_FAULT_PACK_DISCHARGE_CONTACTOR, LC_this->LC_VD_FAULT_CELL_OVER_VOLTAGE_DANGER, LC_this->LC_VD_FAULT_CELL_UNDER_VOLTAGE_DANGER, LC_this->LC_VD_OC_FAULT, LC_this->LC_VD_FAULTMDLBALT, LC_this->LC_VD_FAULT_PACK_HVIL_2, LC_this->LC_VD_FAULT_PACK_NEGATIVE_CONTACTOR, LC_this->LC_VD_FAULT_PACK_CHARGE_CONTACTOR, LC_this->LC_VD_FAULT_PACK_CMS, pEPDB);
      LC_this->LC_VD_BCU_FAULT_DANGER = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___2030_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 120 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_BMS_STATE, LC_ED__BATTSTATE__CHARGE, pEPDB);
      LC_this->LC_VD___793_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_CHARGESTATE1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_CHARGEON = LC_this->LC_VD___793_EQ;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_MAINCOMPLETE = LC_this->LC_VD_MAINCHARGECOMPLETE;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_DMCC = LC_this->LC_VD_BMSDMCC_MAIN;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_BATTAMPR = LC_this->LC_VD_BATTERYCURRENT;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_BALAMPR = (LC_TD_REAL)1;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_BALDIFF = LC_this->LC_VD_BALANCEDIFF_THRESHOLD;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_MAXCELL = LC_this->LC_VD_CELL_VOLTAGE_MAX;
      LC_this->LC_VD_CHARGESTATE1.LC_VD_MINCELL = LC_this->LC_VD_CELL_VOLTAGE_MIN;
      lcfu___CHARGESTATE(&(LC_this->LC_VD_CHARGESTATE1), pEPDB);
      LC_this->LC_VD_BCU_CHARGE_COMPLETE = LC_this->LC_VD_CHARGESTATE1.LC_VD_COMPLETE;
      LC_this->LC_VD_BALANCESTATEENB = LC_this->LC_VD_CHARGESTATE1.LC_VD_BALANCE;
      LC_this->LC_VD_BMSDMCC_FINAL = LC_this->LC_VD_CHARGESTATE1.LC_VD_CHARGEAMPR;
      LC_this->LC_VD_BALCHARGEST = LC_this->LC_VD_CHARGESTATE1.LC_VD_CHSTATE;
    }
  }
  /* Network 121 */
  {
    {
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_MAX_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_MAX;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_MIN_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_MIN;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_AVARAGE_CELL_VOLTAGE = LC_this->LC_VD_CELL_VOLTAGE_AVERAGE;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_CHARGE_STATUS = LC_this->LC_VD_BALANCESTATEENB;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_BALLANCE_INTERVAL = LC_TIME_VALUE(RT_CC_CONST_LL(15),RT_CC_CONST_LL(0));
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_DIFFERENCE_TOLERANCE = (LC_TD_UDINT)10UL;
      LC_this->LC_VD_BALANCE_ISZ1.LC_VD_BALANCE_THRESHOLD = LC_this->LC_VD_CELLVOLT_BALTHRES;
      lcfu___BALANCE_ISZ(&(LC_this->LC_VD_BALANCE_ISZ1), pEPDB);
      LC_this->LC_VD_BALANCE_ENABLE_RQ = LC_this->LC_VD_BALANCE_ISZ1.LC_VD_BALANCE_ENABLE;
      LC_this->LC_VD_MEASURE_ALL = LC_this->LC_VD_BALANCE_ISZ1.LC_VD_MEASURE_ALL;
      LC_this->LC_VD_MEASURE_AUX = LC_this->LC_VD_BALANCE_ISZ1.LC_VD_MEASURE_AUX;
      LC_this->LC_VD_BALANCE_VOLTAGE = LC_this->LC_VD_BALANCE_ISZ1.LC_VD_BALLANCE_VOLTAGE;
    }
  }
  /* Network 122 */
  {
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__REAL(&lFunction_TO_UINT, LC_this->LC_VD_BMSDMCC_FINAL, pEPDB);
      LC_this->LC_VD_PACK_DMCC = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1788_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
  /* Network 123 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__13(&lFunction_OR, LC_this->LC_VD_FAULT_CELL_OVER_TEMP_DANGER, LC_this->LC_VD_FAULT_CELL_UNDER_TEMP_DANGER, LC_this->LC_VD_FAULT_CAN_COMMUNICATION, LC_this->LC_VD_FAULT_PACK_HVIL_1, LC_this->LC_VD_FAULT_PACK_BMU, LC_this->LC_VD_FAULT_PACK_DISCHARGE_CONTACTOR, LC_this->LC_VD_OV_FAULT, LC_this->LC_VD_UV_FAULT, LC_this->LC_VD_OC_FAULT, LC_EL_false, LC_this->LC_VD_FAULT_PACK_NEGATIVE_CONTACTOR, LC_this->LC_VD_FAULT_PACK_CHARGE_CONTACTOR, LC_this->LC_VD_FAULT_PACK_CMS, pEPDB);
      LC_this->LC_VD_FAULTFORSTATE = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___2056_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 124 */
  {
    {
      LC_this->LC_VD_ESSSTATE11.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_ESSSTATE11.LC_VD_DISCHARGE = LC_this->LC_VD_DISCHARGEENB;
      LC_this->LC_VD_ESSSTATE11.LC_VD_CHARGE = LC_this->LC_VD_CHARGEENB;
      LC_this->LC_VD_ESSSTATE11.LC_VD_SHUTDOWN = LC_this->LC_VD_SHUTDOWNENB;
      LC_this->LC_VD_ESSSTATE11.LC_VD_PRECHARGEOK = LC_this->LC_VD_PRECHARGECOMPLETE;
      LC_this->LC_VD_ESSSTATE11.LC_VD_CONTACTFBK = LC_this->LC_VD_CONTACTFBK;
      LC_this->LC_VD_ESSSTATE11.LC_VD_CONTACTFBKNEG = LC_this->LC_VD_CONTACTFBKDISCHARGE;
      LC_this->LC_VD_ESSSTATE11.LC_VD_DISCHARGEPROTECT = LC_this->LC_VD_DISCHARGEPROTECT;
      LC_this->LC_VD_ESSSTATE11.LC_VD_CHARGEPROTECT = LC_this->LC_VD_CHARGEPROTECT;
      LC_this->LC_VD_ESSSTATE11.LC_VD_SHUTDOWNCOMPLETE = LC_this->LC_VD_SHUTDOWNCOMPLETE;
      LC_this->LC_VD_ESSSTATE11.LC_VD_FAULT = LC_this->LC_VD_FAULTFORSTATE;
      lcfu___ESSSTATE1(&(LC_this->LC_VD_ESSSTATE11), pEPDB);
      LC_this->LC_VD_BMS_STATE = LC_this->LC_VD_ESSSTATE11.LC_VD_STATE;
      LC_this->LC_VD_PRECHARGEENABLE = LC_this->LC_VD_ESSSTATE11.LC_VD_PRECHARGEON;
      LC_this->LC_VD_CONTACTENABLE_BATT = LC_this->LC_VD_ESSSTATE11.LC_VD_CONTACT;
      LC_this->LC_VD_CONTACTNEGENABLE_BATT = LC_this->LC_VD_ESSSTATE11.LC_VD_CONTACTNEG;
    }
  }
  /* Network 125 */
  {
    LC_this->LC_VD_NEW_CHG_CONTACT = LC_this->LC_VD_CONTACTENABLE_BATT;
  }
  /* Network 126 */
  {
    LC_this->LC_VD_NEW_DCHG_CONTACT = LC_this->LC_VD_CONTACTNEGENABLE_BATT;
  }
  /* Network 127 */
  {
    LC_this->LC_VD_PRECHARGECOMPLETE = LC_this->LC_VD_PRECHARGEENABLE;
  }
  /* Network 128 */
  {
    LC_this->LC_VD_CONTACTFBKDISCHARGE = LC_this->LC_VD_CONTACTNEGENABLE_BATT;
  }
  /* Network 129 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CONTACTNEGENABLE, LC_this->LC_VD_CONTACTFBKDISCHARGE, pEPDB);
      LC_this->LC_VD___1092_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_BUFFER22.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER22.LC_VD_I = LC_this->LC_VD___1092_NE;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER22), pEPDB);
    }
    {
      LC_this->LC_VD_TOF8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF8.LC_VD_IN = LC_this->LC_VD_BUFFER22.LC_VD_O;
      LC_this->LC_VD_TOF8.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF8), pEPDB);
      LC_this->LC_VD_FAULT_PACK_NEGATIVE_CONTACTOR = LC_this->LC_VD_TOF8.LC_VD_Q;
    }
  }
  /* Network 130 */
  {
    {
      LC_this->LC_VD_IOWR24.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR24.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR24.LC_VD_PIN = (LC_TD_UINT)2;
      LC_this->LC_VD_IOWR24.LC_VD_VAL = LC_this->LC_VD_NEW_CHG_CONTACT;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR24), pEPDB);
    }
  }
  /* Network 131 */
  {
    {
      LC_this->LC_VD_IOWR10.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_IOWR10.LC_VD_PORT = LC_ED__TMS570_GIO__HET1;
      LC_this->LC_VD_IOWR10.LC_VD_PIN = (LC_TD_UINT)0;
      LC_this->LC_VD_IOWR10.LC_VD_VAL = LC_this->LC_VD_NEW_DCHG_CONTACT;
      lcfu___IOWR(&(LC_this->LC_VD_IOWR10), pEPDB);
    }
  }
  /* Network 132 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_BMS_STATE, LC_ED__BATTSTATE__DISCHARGE, pEPDB);
      LC_this->LC_VD___303_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_TON21.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON21.LC_VD_IN = LC_this->LC_VD___303_EQ;
      LC_this->LC_VD_TON21.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON21), pEPDB);
      LC_this->LC_VD_DISCHARGEAMPENB = LC_this->LC_VD_TON21.LC_VD_Q;
    }
  }
  /* Network 133 */
  {
    {
      LC_TD_Function_EQ lFunction_EQ;
      LC_INIT_Function_EQ(&lFunction_EQ);
      lFunction_EQ.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__EQ__ANY__2(&lFunction_EQ, LC_this->LC_VD_BMS_STATE, LC_ED__BATTSTATE__CHARGE, pEPDB);
      LC_this->LC_VD___1795_EQ = lFunction_EQ.LC_VD_EQ;
    }
    {
      LC_this->LC_VD_TON22.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TON22.LC_VD_IN = LC_this->LC_VD___1795_EQ;
      LC_this->LC_VD_TON22.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(5),RT_CC_CONST_LL(0));
      lcfu_iec61131__TON(&(LC_this->LC_VD_TON22), pEPDB);
      LC_this->LC_VD_CHARGEAMPENB = LC_this->LC_VD_TON22.LC_VD_Q;
    }
  }
  /* Network 134 */
  {
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_DISCHARGEOK, pEPDB);
      LC_this->LC_VD___874_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___874_GE, LC_this->LC_VD_DISCHARGEAMPENB, pEPDB);
      LC_this->LC_VD_INCREASEDISCHARGEAMP = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___904_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 135 */
  {
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_CHARGEOK, pEPDB);
      LC_this->LC_VD___1847_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__3(&lFunction_AND, LC_this->LC_VD___1847_LE, LC_this->LC_VD_CHARGEAMPENB, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_BALANCE_ENABLE_RQ)), pEPDB);
      LC_this->LC_VD_INCREASECHARGEAMP = lFunction_AND.LC_VD_AND;
      LC_this->LC_VD___1864_AND = lFunction_AND.LC_VD_AND;
    }
  }
  /* Network 136 */
  {
    {
      LC_TD_Function_LT lFunction_LT;
      LC_INIT_Function_LT(&lFunction_LT);
      lFunction_LT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LT__ANY__2(&lFunction_LT, LC_this->LC_VD_BATTERYVOLTAGE, LC_this->LC_VD_PACK_DISCHARGE_VOLTAGE, pEPDB);
      LC_this->LC_VD___1274_LT = lFunction_LT.LC_VD_LT;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_OT_DANGER_RISK, LC_this->LC_VD_UT_DANGER_RISK, pEPDB);
      LC_this->LC_VD___1450_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_LE lFunction_LE;
      LC_INIT_Function_LE(&lFunction_LE);
      lFunction_LE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__LE__ANY__2(&lFunction_LE, LC_this->LC_VD_CELL_VOLTAGE_MIN, LC_this->LC_VD_CELLVOLT_MINDISCHARGE, pEPDB);
      LC_this->LC_VD___1319_LE = lFunction_LE.LC_VD_LE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__2(&lFunction_AND, LC_this->LC_VD___1319_LE, LC_this->LC_VD_DISCHARGEAMPENB, pEPDB);
      LC_this->LC_VD___1640_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__3(&lFunction_OR, LC_this->LC_VD___1274_LT, LC_this->LC_VD___1450_OR, LC_this->LC_VD___1640_AND, pEPDB);
      LC_this->LC_VD_DECREASEDISCHARGEAMP = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___1709_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 137 */
  {
    {
      LC_TD_Function_GT lFunction_GT;
      LC_INIT_Function_GT(&lFunction_GT);
      lFunction_GT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GT__ANY__2(&lFunction_GT, LC_this->LC_VD_BATTERYVOLTAGE, LC_this->LC_VD_PACK_CHARGE_VOLTAGE, pEPDB);
      LC_this->LC_VD___2092_GT = lFunction_GT.LC_VD_GT;
    }
    {
      LC_TD_Function_GE lFunction_GE;
      LC_INIT_Function_GE(&lFunction_GE);
      lFunction_GE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__GE__ANY__2(&lFunction_GE, LC_this->LC_VD_CELL_VOLTAGE_MAX, LC_this->LC_VD_CELLVOLT_MAXCHARGE, pEPDB);
      LC_this->LC_VD___2028_GE = lFunction_GE.LC_VD_GE;
    }
    {
      LC_TD_Function_AND__BOOL lFunction_AND;
      LC_INIT_Function_AND__BOOL(&lFunction_AND);
      lFunction_AND.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__AND__BOOL__3(&lFunction_AND, LC_this->LC_VD___2028_GE, LC_this->LC_VD_CHARGEAMPENB, (lcfu_iec61131__NOT__BOOL__INL(LC_this->LC_VD_BALANCE_ENABLE_RQ)), pEPDB);
      LC_this->LC_VD___2103_AND = lFunction_AND.LC_VD_AND;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_OT_DANGER_RISK, LC_this->LC_VD_UT_DANGER_RISK, pEPDB);
      LC_this->LC_VD___2110_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__3(&lFunction_OR, LC_this->LC_VD___2092_GT, LC_this->LC_VD___2103_AND, LC_this->LC_VD___2110_OR, pEPDB);
      LC_this->LC_VD_DECREASECHARGEAMP = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___2101_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 138 */
  {
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_CONTACTFBKCHARGE, LC_this->LC_VD_CONTACTFBKDISCHARGE, pEPDB);
      LC_this->LC_VD_CONTACTFBK = lFunction_OR.LC_VD_OR;
      LC_this->LC_VD___833_OR = lFunction_OR.LC_VD_OR;
    }
  }
  /* Network 139 */
  {
    {
      LC_TD_Function_NE lFunction_NE;
      LC_INIT_Function_NE(&lFunction_NE);
      lFunction_NE.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__NE__ANY(&lFunction_NE, LC_this->LC_VD_CONTACTENABLE, LC_this->LC_VD_CONTACTFBK, pEPDB);
      LC_this->LC_VD___243_NE = lFunction_NE.LC_VD_NE;
    }
    {
      LC_this->LC_VD_BUFFER21.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_BUFFER21.LC_VD_I = LC_this->LC_VD___243_NE;
      lcfu___BUFFER(&(LC_this->LC_VD_BUFFER21), pEPDB);
    }
    {
      LC_this->LC_VD_TOF7.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_TOF7.LC_VD_IN = LC_this->LC_VD_BUFFER21.LC_VD_O;
      LC_this->LC_VD_TOF7.LC_VD_PT = LC_TIME_VALUE(RT_CC_CONST_LL(3),RT_CC_CONST_LL(0));
      lcfu_iec61131__TOF(&(LC_this->LC_VD_TOF7), pEPDB);
      LC_this->LC_VD_FAULT_PACK_DISCHARGE_CONTACTOR = LC_this->LC_VD_TOF7.LC_VD_Q;
    }
  }
  /* Network 140 */
  {
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_MAXDISCHARGEAMP, LC_this->LC_VD_DISCHARGEUNITAMP, pEPDB);
      LC_this->LC_VD___1762_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_INT lFunction_TO_INT;
      LC_INIT_Function_TO_INT(&lFunction_TO_INT);
      lFunction_TO_INT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_INT__REAL(&lFunction_TO_INT, LC_this->LC_VD___1762_DIV, pEPDB);
      LC_this->LC_VD___1771_TO_INT = lFunction_TO_INT.LC_VD_TO_INT;
    }
    {
      LC_this->LC_VD_R_TRIG9.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG9.LC_VD_CLK = LC_this->LC_VD_DISCHARGEAMPENB;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG9), pEPDB);
    }
    {
      LC_this->LC_VD_F_TRIG4.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_F_TRIG4.LC_VD_CLK = LC_this->LC_VD_DISCHARGEAMPENB;
      lcfu_iec61131__F_TRIG(&(LC_this->LC_VD_F_TRIG4), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_R_TRIG9.LC_VD_Q, LC_this->LC_VD_F_TRIG4.LC_VD_Q, pEPDB);
      LC_this->LC_VD___2322_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_CU = LC_this->LC_VD_INCREASEDISCHARGEAMP;
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_CD = LC_this->LC_VD_DECREASEDISCHARGEAMP;
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_UPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(125000000));
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_DPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(60000000));
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_PV = LC_this->LC_VD___1771_TO_INT;
      LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_RST = LC_this->LC_VD___2322_OR;
      lcfu___UPDOWNCNTTIM(&(LC_this->LC_VD_UPDOWNCNTTIM1), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__INT(&lFunction_TO_REAL, LC_this->LC_VD_UPDOWNCNTTIM1.LC_VD_CV, pEPDB);
      LC_this->LC_VD___1780_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___1780_TO_REAL, LC_this->LC_VD_DISCHARGEUNITAMP, pEPDB);
      LC_this->LC_VD___1783_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_MAX__REAL lFunction_MAX;
      LC_INIT_Function_MAX__REAL(&lFunction_MAX);
      lFunction_MAX.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MAX__ANY__2(&lFunction_MAX, (LC_TD_REAL)2, LC_this->LC_VD___1783_MUL, pEPDB);
      LC_this->LC_VD___64_MAX = lFunction_MAX.LC_VD_MAX;
    }
    {
      LC_TD_Function_SEL__REAL lFunction_SEL;
      LC_INIT_Function_SEL__REAL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__REAL(&lFunction_SEL, LC_this->LC_VD_DISCHARGEAMPENB, (LC_TD_REAL)2, LC_this->LC_VD___64_MAX, pEPDB);
      LC_this->LC_VD_BMSDMDC_FINAL = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___1790_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 141 */
  {
    {
      LC_TD_Function_DIV__REAL lFunction_DIV;
      LC_INIT_Function_DIV__REAL(&lFunction_DIV);
      lFunction_DIV.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__DIV__REAL(&lFunction_DIV, LC_this->LC_VD_MAXCHARGEAMP, LC_this->LC_VD_CHARGEUNITAMP, pEPDB);
      LC_this->LC_VD___1770_DIV = lFunction_DIV.LC_VD_DIV;
    }
    {
      LC_TD_Function_TO_INT lFunction_TO_INT;
      LC_INIT_Function_TO_INT(&lFunction_TO_INT);
      lFunction_TO_INT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_INT__REAL(&lFunction_TO_INT, LC_this->LC_VD___1770_DIV, pEPDB);
      LC_this->LC_VD___1772_TO_INT = lFunction_TO_INT.LC_VD_TO_INT;
    }
    {
      LC_this->LC_VD_R_TRIG8.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_R_TRIG8.LC_VD_CLK = LC_this->LC_VD_CHARGEAMPENB;
      lcfu_iec61131__R_TRIG(&(LC_this->LC_VD_R_TRIG8), pEPDB);
    }
    {
      LC_this->LC_VD_F_TRIG3.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_F_TRIG3.LC_VD_CLK = LC_this->LC_VD_CHARGEAMPENB;
      lcfu_iec61131__F_TRIG(&(LC_this->LC_VD_F_TRIG3), pEPDB);
    }
    {
      LC_TD_Function_OR__BOOL lFunction_OR;
      LC_INIT_Function_OR__BOOL(&lFunction_OR);
      lFunction_OR.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__OR__BOOL__2(&lFunction_OR, LC_this->LC_VD_R_TRIG8.LC_VD_Q, LC_this->LC_VD_F_TRIG3.LC_VD_Q, pEPDB);
      LC_this->LC_VD___1887_OR = lFunction_OR.LC_VD_OR;
    }
    {
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_ENO = LC_EL_true;
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_CU = LC_this->LC_VD_INCREASECHARGEAMP;
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_CD = LC_this->LC_VD_DECREASECHARGEAMP;
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_UPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(125000000));
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_DPER = LC_TIME_VALUE(RT_CC_CONST_LL(0),RT_CC_CONST_LL(60000000));
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_PV = LC_this->LC_VD___1772_TO_INT;
      LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_RST = LC_this->LC_VD___1887_OR;
      lcfu___UPDOWNCNTTIM(&(LC_this->LC_VD_UPDOWNCNTTIM2), pEPDB);
    }
    {
      LC_TD_Function_TO_REAL lFunction_TO_REAL;
      LC_INIT_Function_TO_REAL(&lFunction_TO_REAL);
      lFunction_TO_REAL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_REAL__INT(&lFunction_TO_REAL, LC_this->LC_VD_UPDOWNCNTTIM2.LC_VD_CV, pEPDB);
      LC_this->LC_VD___1781_TO_REAL = lFunction_TO_REAL.LC_VD_TO_REAL;
    }
    {
      LC_TD_Function_MUL__REAL lFunction_MUL;
      LC_INIT_Function_MUL__REAL(&lFunction_MUL);
      lFunction_MUL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MUL__ANY__2(&lFunction_MUL, LC_this->LC_VD___1781_TO_REAL, LC_this->LC_VD_CHARGEUNITAMP, pEPDB);
      LC_this->LC_VD___1782_MUL = lFunction_MUL.LC_VD_MUL;
    }
    {
      LC_TD_Function_MAX__REAL lFunction_MAX;
      LC_INIT_Function_MAX__REAL(&lFunction_MAX);
      lFunction_MAX.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__MAX__ANY__2(&lFunction_MAX, (LC_TD_REAL)2, LC_this->LC_VD___1782_MUL, pEPDB);
      LC_this->LC_VD___1848_MAX = lFunction_MAX.LC_VD_MAX;
    }
    {
      LC_TD_Function_SEL__REAL lFunction_SEL;
      LC_INIT_Function_SEL__REAL(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__REAL(&lFunction_SEL, LC_this->LC_VD_CHARGEAMPENB, (LC_TD_REAL)2, LC_this->LC_VD___1848_MAX, pEPDB);
      LC_this->LC_VD_BMSDMCC_MAIN = lFunction_SEL.LC_VD_SEL;
      LC_this->LC_VD___1787_SEL = lFunction_SEL.LC_VD_SEL;
    }
  }
  /* Network 142 */
  {
    {
      LC_TD_Function_TO_UINT lFunction_TO_UINT;
      LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
      lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__TO_UINT__REAL(&lFunction_TO_UINT, LC_this->LC_VD_BMSDMDC_FINAL, pEPDB);
      LC_this->LC_VD_PACK_DMDC = lFunction_TO_UINT.LC_VD_TO_UINT;
      LC_this->LC_VD___1789_TO_UINT = lFunction_TO_UINT.LC_VD_TO_UINT;
    }
  }
}

#endif
