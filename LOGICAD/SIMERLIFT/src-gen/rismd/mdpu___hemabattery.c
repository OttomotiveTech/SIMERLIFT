#include <RISMD.h>
#include <lcpu___hemabattery.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HEMABATTERY_ADDRBIT0[] = "ADDRbit0";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ADDRBIT0 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ADDRBIT0, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ADDRBIT0));

static char const lcmd_var_name_HEMABATTERY_ADDRBIT1[] = "ADDRbit1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ADDRBIT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ADDRBIT1, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ADDRBIT1));

static char const lcmd_var_name_HEMABATTERY_ALLCONTACSTENABLE[] = "AllcontacstEnable";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ALLCONTACSTENABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ALLCONTACSTENABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ALLCONTACSTENABLE));

extern RISMDPOUType const lcmd_type_AMPMULTTEMP;
static char const lcmd_var_name_HEMABATTERY_AMPMULTTEMP1[] = "ampMultTemp1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTTEMP1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTTEMP1, &lcmd_type_AMPMULTTEMP, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTTEMP1));

static char const lcmd_var_name_HEMABATTERY_AMPMULTTEMP2[] = "ampMultTemp2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTTEMP2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTTEMP2, &lcmd_type_AMPMULTTEMP, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTTEMP2));

extern RISMDPOUType const lcmd_type_AMPMULTTEMPDIS;
static char const lcmd_var_name_HEMABATTERY_AMPMULTTEMPDIS1[] = "ampMultTempDis1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTTEMPDIS1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTTEMPDIS1, &lcmd_type_AMPMULTTEMPDIS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTTEMPDIS1));

static char const lcmd_var_name_HEMABATTERY_AMPMULTTEMPDIS2[] = "ampMultTempDis2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTTEMPDIS2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTTEMPDIS2, &lcmd_type_AMPMULTTEMPDIS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTTEMPDIS2));

extern RISMDPOUType const lcmd_type_AMPMULTVOLTCHAR;
static char const lcmd_var_name_HEMABATTERY_AMPMULTVOLTCHAR1[] = "ampMultVoltChar1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTVOLTCHAR1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTVOLTCHAR1, &lcmd_type_AMPMULTVOLTCHAR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTVOLTCHAR1));

extern RISMDPOUType const lcmd_type_AMPMULTVOLTDISC;
static char const lcmd_var_name_HEMABATTERY_AMPMULTVOLTDISC1[] = "ampMultVoltDisc1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AMPMULTVOLTDISC1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AMPMULTVOLTDISC1, &lcmd_type_AMPMULTVOLTDISC, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AMPMULTVOLTDISC1));

extern RISMDPOUType const lcmd_type_ANLG;
static char const lcmd_var_name_HEMABATTERY_ANLG1[] = "ANLG1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG1, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG1));

static char const lcmd_var_name_HEMABATTERY_ANLG14[] = "ANLG14";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG14 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG14, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG14));

static char const lcmd_var_name_HEMABATTERY_ANLG2[] = "ANLG2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG2, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG2));

static char const lcmd_var_name_HEMABATTERY_ANLG3[] = "ANLG3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG3, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG3));

static char const lcmd_var_name_HEMABATTERY_ANLG4[] = "ANLG4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG4, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG4));

static char const lcmd_var_name_HEMABATTERY_ANLG8[] = "ANLG8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ANLG8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ANLG8, &lcmd_type_ANLG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ANLG8));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_HEMABATTERY_AN_KL15[] = "AN_KL15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_AN_KL15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_AN_KL15, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_AN_KL15));

extern RISMDPOUType const lcmd_type_ARR2VAL;
static char const lcmd_var_name_HEMABATTERY_ARR2VAL2[] = "ARR2VAL2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ARR2VAL2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ARR2VAL2, &lcmd_type_ARR2VAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ARR2VAL2));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HEMABATTERY_BALANCEDIFF_THRESHOLD[] = "BalanceDiff_Threshold";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCEDIFF_THRESHOLD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCEDIFF_THRESHOLD, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCEDIFF_THRESHOLD));

static char const lcmd_var_name_HEMABATTERY_BALANCESTATEENB[] = "BalanceStateEnb";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCESTATEENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCESTATEENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCESTATEENB));

static char const lcmd_var_name_HEMABATTERY_BALANCE_ENABLE_RQ[] = "Balance_Enable_Rq";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCE_ENABLE_RQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCE_ENABLE_RQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCE_ENABLE_RQ));

extern RISMDPOUType const lcmd_type_BALANCE_ISZ;
static char const lcmd_var_name_HEMABATTERY_BALANCE_ISZ1[] = "Balance_isz1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCE_ISZ1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCE_ISZ1, &lcmd_type_BALANCE_ISZ, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCE_ISZ1));

static char const lcmd_var_name_HEMABATTERY_BALANCE_REGISTER[] = "Balance_Register";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCE_REGISTER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCE_REGISTER, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCE_REGISTER));

static char const lcmd_var_name_HEMABATTERY_BALANCE_VOLTAGE[] = "Balance_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALANCE_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALANCE_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALANCE_VOLTAGE));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_HEMABATTERY_BALCHARGEST[] = "balChargeSt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BALCHARGEST =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BALCHARGEST, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BALCHARGEST));

extern RISMDCompoundType const lcmd_type_BESSALARMS;
static char const lcmd_var_name_HEMABATTERY_BATEPCSALARM[] = "batEpcsAlarm";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATEPCSALARM =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATEPCSALARM, &lcmd_type_BESSALARMS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATEPCSALARM));

static char const lcmd_var_name_HEMABATTERY_BATTERYCHARGING[] = "BatteryCharging";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYCHARGING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYCHARGING));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_HEMABATTERY_BATTERYCURRENT[] = "BatteryCurrent";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYCURRENT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYCURRENT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYCURRENT));

static char const lcmd_var_name_HEMABATTERY_BATTERYDISCHARGING[] = "BatteryDischarging";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYDISCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYDISCHARGING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYDISCHARGING));

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_HEMABATTERY_BATTERYID[] = "batteryID";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYID =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYID, &risMdType_BYTE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYID));

static char const lcmd_var_name_HEMABATTERY_BATTERYINCHARGE[] = "batteryInCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYINCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYINCHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYINCHARGE));

static char const lcmd_var_name_HEMABATTERY_BATTERYVOLTAGE[] = "BatteryVoltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYVOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYVOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYVOLTAGE));

static char const lcmd_var_name_HEMABATTERY_BATTERYWATT[] = "BatteryWatt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTERYWATT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTERYWATT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTERYWATT));

extern RISMDPOUType const lcmd_type_BATTSTACK;
static char const lcmd_var_name_HEMABATTERY_BATTSTACK1[] = "BATTSTACK1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTSTACK1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTSTACK1, &lcmd_type_BATTSTACK, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTSTACK1));

static char const lcmd_var_name_HEMABATTERY_BATTSTACK_DISABLE[] = "BATTSTACK_DISABLE";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BATTSTACK_DISABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BATTSTACK_DISABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BATTSTACK_DISABLE));

extern RISMDPOUType const lcmd_type_BCU_BATTERY_STATUS;
static char const lcmd_var_name_HEMABATTERY_BCU_BATTERY_STATUS1[] = "BCU_Battery_Status1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_BATTERY_STATUS1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_BATTERY_STATUS1, &lcmd_type_BCU_BATTERY_STATUS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_BATTERY_STATUS1));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_HEMABATTERY_BCU_CAN_CH[] = "BCU_CAN_CH";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_CAN_CH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_CAN_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_CAN_CH));

extern RISMDPOUType const lcmd_type_BCU_CELL_STATUS;
static char const lcmd_var_name_HEMABATTERY_BCU_CELL_STATUS1[] = "BCU_Cell_Status1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_CELL_STATUS1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_CELL_STATUS1, &lcmd_type_BCU_CELL_STATUS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_CELL_STATUS1));

static char const lcmd_var_name_HEMABATTERY_BCU_CHARGE_COMPLETE[] = "BCU_Charge_Complete";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_CHARGE_COMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_CHARGE_COMPLETE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_CHARGE_COMPLETE));

extern RISMDPOUType const lcmd_type_BCU_FAULT_CODES;
static char const lcmd_var_name_HEMABATTERY_BCU_FAULT_CODES1[] = "BCU_Fault_Codes1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_FAULT_CODES1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_FAULT_CODES1, &lcmd_type_BCU_FAULT_CODES, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_FAULT_CODES1));

static char const lcmd_var_name_HEMABATTERY_BCU_FAULT_DANGER[] = "BCU_Fault_Danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_FAULT_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_FAULT_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_FAULT_DANGER));

static char const lcmd_var_name_HEMABATTERY_BCU_FAULT_WARNING[] = "BCU_Fault_Warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_FAULT_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_FAULT_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_FAULT_WARNING));

extern RISMDPOUType const lcmd_type_BCU_ID;
static char const lcmd_var_name_HEMABATTERY_BCU_ID1[] = "BCU_ID1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_ID1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_ID1, &lcmd_type_BCU_ID, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_ID1));

extern RISMDPOUType const lcmd_type_BCU_STATE_MESSAGE;
static char const lcmd_var_name_HEMABATTERY_BCU_STATE_MESSAGE1[] = "BCU_State_Message1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_STATE_MESSAGE1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_STATE_MESSAGE1, &lcmd_type_BCU_STATE_MESSAGE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_STATE_MESSAGE1));

extern RISMDPOUType const lcmd_type_BCU_STATUS2;
static char const lcmd_var_name_HEMABATTERY_BCU_STATUS21[] = "BCU_status21";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BCU_STATUS21 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BCU_STATUS21, &lcmd_type_BCU_STATUS2, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BCU_STATUS21));

extern RISMDDerivedType const lcmd_type_BESSOPRSTATUS;
static char const lcmd_var_name_HEMABATTERY_BESSOPERATINGSTATUS[] = "bessOperatingStatus";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BESSOPERATINGSTATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BESSOPERATINGSTATUS, &lcmd_type_BESSOPRSTATUS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BESSOPERATINGSTATUS));

extern RISMDDerivedType const lcmd_type_BESSSYSTEMSTATUS;
static char const lcmd_var_name_HEMABATTERY_BESSSTATUS[] = "bessStatus";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BESSSTATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BESSSTATUS, &lcmd_type_BESSSYSTEMSTATUS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BESSSTATUS));

extern RISMDDerivedType const lcmd_type_BESSWORKMODE;
static char const lcmd_var_name_HEMABATTERY_BESSWORKINGMODE[] = "bessWorkingMode";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BESSWORKINGMODE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BESSWORKINGMODE, &lcmd_type_BESSWORKMODE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BESSWORKINGMODE));

static char const lcmd_var_name_HEMABATTERY_BMSDMCC_FINAL[] = "BMSdmcc_final";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMSDMCC_FINAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMSDMCC_FINAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMSDMCC_FINAL));

static char const lcmd_var_name_HEMABATTERY_BMSDMCC_MAIN[] = "BMSdmcc_main";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMSDMCC_MAIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMSDMCC_MAIN, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMSDMCC_MAIN));

static char const lcmd_var_name_HEMABATTERY_BMSDMDC_FINAL[] = "BMSdmdc_final";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMSDMDC_FINAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMSDMDC_FINAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMSDMDC_FINAL));

extern RISMDDerivedType const lcmd_type_BATTSTATE;
static char const lcmd_var_name_HEMABATTERY_BMS_STATE[] = "BMS_State";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMS_STATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMS_STATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMS_STATE));

extern RISMDSimpleNumType const risMdType_SINT;
RISMDArrayType const lcmd_type_HEMABATTERY_BMUCELLTEMP_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_SINT),&risMdType_SINT);
static char const lcmd_var_name_HEMABATTERY_BMUCELLTEMP[] = "bmuCellTemp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUCELLTEMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUCELLTEMP, &lcmd_type_HEMABATTERY_BMUCELLTEMP_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUCELLTEMP));

RISMDArrayType const lcmd_type_HEMABATTERY_BMUCELLVOLT_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_UINT),&risMdType_UINT);
static char const lcmd_var_name_HEMABATTERY_BMUCELLVOLT[] = "bmuCellVolt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUCELLVOLT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUCELLVOLT, &lcmd_type_HEMABATTERY_BMUCELLVOLT_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUCELLVOLT));

static char const lcmd_var_name_HEMABATTERY_BMUMAXCELLT[] = "bmuMaxCellT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUMAXCELLT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUMAXCELLT, &risMdType_SINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUMAXCELLT));

static char const lcmd_var_name_HEMABATTERY_BMUMAXCELLV[] = "bmuMaxCellV";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUMAXCELLV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUMAXCELLV, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUMAXCELLV));

static char const lcmd_var_name_HEMABATTERY_BMUMINCELLT[] = "bmuMinCellT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUMINCELLT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUMINCELLT, &risMdType_SINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUMINCELLT));

static char const lcmd_var_name_HEMABATTERY_BMUMINCELLV[] = "bmuMinCellV";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BMUMINCELLV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BMUMINCELLV, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BMUMINCELLV));

static char const lcmd_var_name_HEMABATTERY_BOARD_ERROR_MESSAGES[] = "Board_Error_Messages";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BOARD_ERROR_MESSAGES =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BOARD_ERROR_MESSAGES, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BOARD_ERROR_MESSAGES));

static char const lcmd_var_name_HEMABATTERY_BOARD_FAULT_MESSAGES[] = "Board_Fault_Messages";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BOARD_FAULT_MESSAGES =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BOARD_FAULT_MESSAGES, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BOARD_FAULT_MESSAGES));

extern RISMDPOUType const lcmd_type_BUFFER;
static char const lcmd_var_name_HEMABATTERY_BUFFER1[] = "Buffer1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER1, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER1));

static char const lcmd_var_name_HEMABATTERY_BUFFER10[] = "Buffer10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER10, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER10));

static char const lcmd_var_name_HEMABATTERY_BUFFER11[] = "Buffer11";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER11 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER11, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER11));

static char const lcmd_var_name_HEMABATTERY_BUFFER12[] = "Buffer12";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER12 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER12, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER12));

static char const lcmd_var_name_HEMABATTERY_BUFFER13[] = "Buffer13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER13, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER13));

static char const lcmd_var_name_HEMABATTERY_BUFFER19[] = "Buffer19";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER19 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER19, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER19));

static char const lcmd_var_name_HEMABATTERY_BUFFER2[] = "Buffer2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER2, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER2));

static char const lcmd_var_name_HEMABATTERY_BUFFER21[] = "Buffer21";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER21 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER21, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER21));

static char const lcmd_var_name_HEMABATTERY_BUFFER22[] = "Buffer22";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER22 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER22, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER22));

static char const lcmd_var_name_HEMABATTERY_BUFFER23[] = "Buffer23";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER23 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER23, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER23));

static char const lcmd_var_name_HEMABATTERY_BUFFER3[] = "Buffer3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER3, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER3));

static char const lcmd_var_name_HEMABATTERY_BUFFER4[] = "Buffer4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER4, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER4));

static char const lcmd_var_name_HEMABATTERY_BUFFER9[] = "Buffer9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_BUFFER9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_BUFFER9, &lcmd_type_BUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_BUFFER9));

static char const lcmd_var_name_HEMABATTERY_CAN_DISABLE[] = "CAN_DISABLE";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_DISABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_DISABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_DISABLE));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_02[] = "CAN_Fault_02";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_02 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_02, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_02));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_03[] = "CAN_Fault_03";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_03 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_03, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_03));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_04[] = "CAN_Fault_04";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_04 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_04, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_04));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_05[] = "CAN_Fault_05";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_05 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_05, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_05));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_06[] = "CAN_Fault_06";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_06 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_06, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_06));

static char const lcmd_var_name_HEMABATTERY_CAN_FAULT_07[] = "CAN_Fault_07";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_FAULT_07 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_FAULT_07, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_FAULT_07));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_10[] = "CAN_ID_10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_10, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_10));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_11[] = "CAN_ID_11";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_11 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_11, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_11));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_12[] = "CAN_ID_12";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_12 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_12, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_12));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_13[] = "CAN_ID_13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_13, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_13));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_14[] = "CAN_ID_14";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_14 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_14, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_14));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_15[] = "CAN_ID_15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_15, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_15));

static char const lcmd_var_name_HEMABATTERY_CAN_ID_16[] = "CAN_ID_16";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_ID_16 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_ID_16, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_ID_16));

extern RISMDPOUType const lcmd_type_CAN_TEST;
static char const lcmd_var_name_HEMABATTERY_CAN_TEST1[] = "CAN_Test1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_TEST1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_TEST1, &lcmd_type_CAN_TEST, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_TEST1));

static char const lcmd_var_name_HEMABATTERY_CAN_TEST2[] = "CAN_Test2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CAN_TEST2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CAN_TEST2, &lcmd_type_CAN_TEST, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CAN_TEST2));

static char const lcmd_var_name_HEMABATTERY_CELLTEMP_MAXLIM[] = "cellTemp_maxLim";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLTEMP_MAXLIM =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLTEMP_MAXLIM, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLTEMP_MAXLIM));

static char const lcmd_var_name_HEMABATTERY_CELLTEMP_MINLIM[] = "cellTemp_minLim";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLTEMP_MINLIM =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLTEMP_MINLIM, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLTEMP_MINLIM));

static char const lcmd_var_name_HEMABATTERY_CELLTEMP_WARNINGOT[] = "cellTemp_warningOT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLTEMP_WARNINGOT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLTEMP_WARNINGOT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLTEMP_WARNINGOT));

static char const lcmd_var_name_HEMABATTERY_CELLTEMP_WARNINGUT[] = "cellTemp_warningUT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLTEMP_WARNINGUT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLTEMP_WARNINGUT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLTEMP_WARNINGUT));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_BALTHRES[] = "cellVolt_balThres";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_BALTHRES =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_BALTHRES, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_BALTHRES));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_CHARGEOK[] = "cellVolt_chargeOK";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_CHARGEOK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_CHARGEOK, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_CHARGEOK));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_CUTOFFHIGH[] = "cellVolt_cutOffHigh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_CUTOFFHIGH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_CUTOFFHIGH, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_CUTOFFHIGH));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_CUTOFFLOW[] = "cellVolt_cutOffLow";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_CUTOFFLOW =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_CUTOFFLOW, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_CUTOFFLOW));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_DISCHARGEOK[] = "cellVolt_dischargeOK";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_DISCHARGEOK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_DISCHARGEOK, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_DISCHARGEOK));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_MAX[] = "cellVolt_max";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_MAX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_MAX, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_MAX));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_MAXCHARGE[] = "cellVolt_maxCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_MAXCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_MAXCHARGE, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_MAXCHARGE));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_MIN[] = "cellVolt_min";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_MIN, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_MIN));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_MINDISCHARGE[] = "cellVolt_minDischarge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_MINDISCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_MINDISCHARGE, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_MINDISCHARGE));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_NOMINAL[] = "cellVolt_nominal";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_NOMINAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_NOMINAL, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_NOMINAL));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_WARNINGOV[] = "cellVolt_warningOV";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_WARNINGOV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_WARNINGOV, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_WARNINGOV));

static char const lcmd_var_name_HEMABATTERY_CELLVOLT_WARNINGUV[] = "cellVolt_warningUV";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELLVOLT_WARNINGUV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELLVOLT_WARNINGUV, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELLVOLT_WARNINGUV));

static char const lcmd_var_name_HEMABATTERY_CELL_CURRENT_NOMINAL[] = "Cell_Current_Nominal";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_CURRENT_NOMINAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_CURRENT_NOMINAL, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_CURRENT_NOMINAL));

static char const lcmd_var_name_HEMABATTERY_CELL_SERIES_CONNECTION[] = "Cell_Series_Connection";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_SERIES_CONNECTION =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_SERIES_CONNECTION, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_SERIES_CONNECTION));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP[] = "Cell_Temp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX[] = "Cell_Temp_Max";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MAX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MAX));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX_BMU_LOC[] = "Cell_Temp_Max_BMU_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MAX_BMU_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MAX_BMU_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX_CELL_LOC[] = "Cell_Temp_Max_Cell_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MAX_CELL_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MAX_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MAX_CELL_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN[] = "Cell_Temp_Min";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MIN));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN_BMU_LOC[] = "Cell_Temp_Min_BMU_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MIN_BMU_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MIN_BMU_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN_CELL_LOC[] = "Cell_Temp_Min_Cell_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_TEMP_MIN_CELL_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_TEMP_MIN_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_TEMP_MIN_CELL_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE[] = "Cell_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_AVERAGE[] = "Cell_Voltage_Average";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_AVERAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_AVERAGE, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_AVERAGE));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX[] = "Cell_Voltage_Max";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MAX));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_BMU_LOC[] = "Cell_Voltage_Max_BMU_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_BMU_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MAX_BMU_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_CELL_LOC[] = "Cell_Voltage_Max_Cell_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_CELL_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MAX_CELL_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_CHARGE[] = "Cell_Voltage_Max_Charge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_CHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MAX_CHARGE, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MAX_CHARGE));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN[] = "Cell_Voltage_Min";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MIN));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_BMU_LOC[] = "Cell_Voltage_Min_BMU_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_BMU_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MIN_BMU_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_CELL_LOC[] = "Cell_Voltage_Min_Cell_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_CELL_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MIN_CELL_LOC));

static char const lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_DISHARGE[] = "Cell_Voltage_Min_Disharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_DISHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CELL_VOLTAGE_MIN_DISHARGE, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CELL_VOLTAGE_MIN_DISHARGE));

extern RISMDDerivedType const lcmd_type_PLCHANNEL;
#include <lcdt___plchannel.h>
RISMDArrayType const lcmd_type_HEMABATTERY_CHANNELSELECT_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_DataType_PLCHANNEL),&lcmd_type_PLCHANNEL);
static char const lcmd_var_name_HEMABATTERY_CHANNELSELECT[] = "ChannelSelect";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHANNELSELECT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHANNELSELECT, &lcmd_type_HEMABATTERY_CHANNELSELECT_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHANNELSELECT));

#include <lcdt___plchannel.h>
RISMDArrayType const lcmd_type_HEMABATTERY_CHANNELSELECT2_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_DataType_PLCHANNEL),&lcmd_type_PLCHANNEL);
static char const lcmd_var_name_HEMABATTERY_CHANNELSELECT2[] = "ChannelSelect2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHANNELSELECT2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHANNELSELECT2, &lcmd_type_HEMABATTERY_CHANNELSELECT2_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHANNELSELECT2));

static char const lcmd_var_name_HEMABATTERY_CHARGEAMPENB[] = "chargeAmpEnb";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEAMPENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEAMPENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEAMPENB));

static char const lcmd_var_name_HEMABATTERY_CHARGECMD[] = "chargeCMD";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGECMD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGECMD, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGECMD));

static char const lcmd_var_name_HEMABATTERY_CHARGEENB[] = "chargeENB";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEENB));

static char const lcmd_var_name_HEMABATTERY_CHARGEINVOLTAGE[] = "ChargeInVoltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEINVOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEINVOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEINVOLTAGE));

static char const lcmd_var_name_HEMABATTERY_CHARGEOFF[] = "chargeOff";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEOFF =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEOFF, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEOFF));

static char const lcmd_var_name_HEMABATTERY_CHARGEOK_VOLTAGE_PACK[] = "ChargeOK_Voltage_PACK";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEOK_VOLTAGE_PACK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEOK_VOLTAGE_PACK, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEOK_VOLTAGE_PACK));

static char const lcmd_var_name_HEMABATTERY_CHARGEPROTECT[] = "chargeProtect";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEPROTECT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEPROTECT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEPROTECT));

extern RISMDPOUType const lcmd_type_CHARGESTATE;
static char const lcmd_var_name_HEMABATTERY_CHARGESTATE1[] = "chargeState1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGESTATE1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGESTATE1, &lcmd_type_CHARGESTATE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGESTATE1));

static char const lcmd_var_name_HEMABATTERY_CHARGEUNITAMP[] = "chargeUnitAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGEUNITAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGEUNITAMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGEUNITAMP));

static char const lcmd_var_name_HEMABATTERY_CHARGE_CURRENT[] = "Charge_Current";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CHARGE_CURRENT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CHARGE_CURRENT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CHARGE_CURRENT));

static char const lcmd_var_name_HEMABATTERY_CMDBCU[] = "cmdBCU";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMDBCU =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMDBCU, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMDBCU));

static char const lcmd_var_name_HEMABATTERY_CMDTMT[] = "cmdTmt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMDTMT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMDTMT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMDTMT));

static char const lcmd_var_name_HEMABATTERY_CMD_COUNTER_CURRENT[] = "CMD_Counter_Current";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_COUNTER_CURRENT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_COUNTER_CURRENT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_COUNTER_CURRENT));

static char const lcmd_var_name_HEMABATTERY_CMD_CURRENT_SENSE[] = "CMD_Current_Sense";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_CURRENT_SENSE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_CURRENT_SENSE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_CURRENT_SENSE));

static char const lcmd_var_name_HEMABATTERY_CMD_CURRENT_SENSE_AMP[] = "CMD_Current_Sense_Amp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_CURRENT_SENSE_AMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_CURRENT_SENSE_AMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_CURRENT_SENSE_AMP));

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_HEMABATTERY_CMD_OVERALL_POWER[] = "CMD_Overall_Power";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_OVERALL_POWER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_OVERALL_POWER, &risMdType_LREAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_OVERALL_POWER));

static char const lcmd_var_name_HEMABATTERY_CMD_POWER[] = "CMD_Power";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_POWER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_POWER, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_POWER));

static char const lcmd_var_name_HEMABATTERY_CMD_TEMP[] = "CMD_Temp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_TEMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_TEMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_TEMP));

static char const lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE1_VOLT[] = "CMD_Voltage_Sense1_volt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE1_VOLT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE1_VOLT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_VOLTAGE_SENSE1_VOLT));

static char const lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE2_VOLT[] = "CMD_Voltage_Sense2_volt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE2_VOLT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE2_VOLT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_VOLTAGE_SENSE2_VOLT));

static char const lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_1[] = "CMD_Voltage_Sense_1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_1, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_VOLTAGE_SENSE_1));

static char const lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_2[] = "CMD_Voltage_Sense_2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_2, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_VOLTAGE_SENSE_2));

static char const lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_3[] = "CMD_Voltage_Sense_3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMD_VOLTAGE_SENSE_3, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMD_VOLTAGE_SENSE_3));

static char const lcmd_var_name_HEMABATTERY_CMS0VOLT1[] = "CMS0volt1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMS0VOLT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMS0VOLT1, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMS0VOLT1));

static char const lcmd_var_name_HEMABATTERY_CMS1VOLT1[] = "CMS1volt1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMS1VOLT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMS1VOLT1, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMS1VOLT1));

extern RISMDPOUType const lcmd_type_CMS_IVT;
static char const lcmd_var_name_HEMABATTERY_CMS_IVT1[] = "CMS_IVT1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CMS_IVT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CMS_IVT1, &lcmd_type_CMS_IVT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CMS_IVT1));

static char const lcmd_var_name_HEMABATTERY_CONTACTENABLE[] = "contactEnable";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTENABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTENABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTENABLE));

static char const lcmd_var_name_HEMABATTERY_CONTACTENABLECHARGE[] = "contactEnableCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTENABLECHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTENABLECHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTENABLECHARGE));

static char const lcmd_var_name_HEMABATTERY_CONTACTENABLECHARGE_BATT[] = "contactEnableCharge_batt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTENABLECHARGE_BATT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTENABLECHARGE_BATT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTENABLECHARGE_BATT));

static char const lcmd_var_name_HEMABATTERY_CONTACTENABLE_BATT[] = "contactEnable_batt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTENABLE_BATT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTENABLE_BATT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTENABLE_BATT));

static char const lcmd_var_name_HEMABATTERY_CONTACTFBK[] = "contactFbk";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTFBK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTFBK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTFBK));

static char const lcmd_var_name_HEMABATTERY_CONTACTFBKCHARGE[] = "contactFbkCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTFBKCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTFBKCHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTFBKCHARGE));

static char const lcmd_var_name_HEMABATTERY_CONTACTFBKDISCHARGE[] = "contactFbkDischarge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTFBKDISCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTFBKDISCHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTFBKDISCHARGE));

static char const lcmd_var_name_HEMABATTERY_CONTACTNEGENABLE[] = "contactNegEnable";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTNEGENABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTNEGENABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTNEGENABLE));

static char const lcmd_var_name_HEMABATTERY_CONTACTNEGENABLE_BATT[] = "contactNegEnable_batt";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CONTACTNEGENABLE_BATT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CONTACTNEGENABLE_BATT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CONTACTNEGENABLE_BATT));

extern RISMDPOUType const lcmd_type_CTU;
static char const lcmd_var_name_HEMABATTERY_CTU1[] = "CTU1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CTU1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CTU1, &lcmd_type_CTU, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CTU1));

static char const lcmd_var_name_HEMABATTERY_CTU2[] = "CTU2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CTU2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CTU2, &lcmd_type_CTU, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CTU2));

static char const lcmd_var_name_HEMABATTERY_CURRENTPROTECTION[] = "currentProtection";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CURRENTPROTECTION =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CURRENTPROTECTION, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CURRENTPROTECTION));

static char const lcmd_var_name_HEMABATTERY_CYCLESPERSOH[] = "cyclesPerSOH";
static RISMDStdVariable const lcmd_var_HEMABATTERY_CYCLESPERSOH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_CYCLESPERSOH, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_CYCLESPERSOH));

static char const lcmd_var_name_HEMABATTERY_DECREASECHARGEAMP[] = "decreaseChargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DECREASECHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DECREASECHARGEAMP, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DECREASECHARGEAMP));

static char const lcmd_var_name_HEMABATTERY_DECREASEDISCHARGEAMP[] = "decreaseDischargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DECREASEDISCHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DECREASEDISCHARGEAMP, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DECREASEDISCHARGEAMP));

extern RISMDPOUType const lcmd_type_DGTIN;
static char const lcmd_var_name_HEMABATTERY_DGTIN3[] = "dgtIn3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DGTIN3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DGTIN3, &lcmd_type_DGTIN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DGTIN3));

static char const lcmd_var_name_HEMABATTERY_DGTIN4[] = "dgtIn4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DGTIN4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DGTIN4, &lcmd_type_DGTIN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DGTIN4));

static char const lcmd_var_name_HEMABATTERY_DGTIN8[] = "dgtIn8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DGTIN8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DGTIN8, &lcmd_type_DGTIN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DGTIN8));

static char const lcmd_var_name_HEMABATTERY_DICHARGEOK_VOLTAGE_PACK[] = "DichargeOK_Voltage_PACK";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DICHARGEOK_VOLTAGE_PACK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DICHARGEOK_VOLTAGE_PACK, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DICHARGEOK_VOLTAGE_PACK));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEAMPENB[] = "dischargeAmpEnb";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEAMPENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEAMPENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEAMPENB));

static char const lcmd_var_name_HEMABATTERY_DISCHARGECMD[] = "dischargeCMD";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGECMD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGECMD, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGECMD));

static char const lcmd_var_name_HEMABATTERY_DISCHARGECOMPLETE[] = "dischargeComplete";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGECOMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGECOMPLETE));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEENB[] = "dischargeENB";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEENB));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEINVOLTAGE[] = "DischargeInVoltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEINVOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEINVOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEINVOLTAGE));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEOFF[] = "dischargeOff";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEOFF =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEOFF, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEOFF));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEPROTECT[] = "dischargeProtect";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEPROTECT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEPROTECT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEPROTECT));

static char const lcmd_var_name_HEMABATTERY_DISCHARGETERMINATE[] = "dischargeTerminate";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGETERMINATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGETERMINATE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGETERMINATE));

static char const lcmd_var_name_HEMABATTERY_DISCHARGEUNITAMP[] = "dischargeUnitAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DISCHARGEUNITAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DISCHARGEUNITAMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DISCHARGEUNITAMP));

static char const lcmd_var_name_HEMABATTERY_DOD_RATE[] = "DoD_rate";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DOD_RATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DOD_RATE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DOD_RATE));

static char const lcmd_var_name_HEMABATTERY_DUTY_CYCLE[] = "Duty_Cycle";
static RISMDStdVariable const lcmd_var_HEMABATTERY_DUTY_CYCLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_DUTY_CYCLE, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_DUTY_CYCLE));

static char const lcmd_var_name_HEMABATTERY_EMERGENCYBTN[] = "emergencyBtn";
static RISMDStdVariable const lcmd_var_HEMABATTERY_EMERGENCYBTN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_EMERGENCYBTN, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_EMERGENCYBTN));

static char const lcmd_var_name_HEMABATTERY_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HEMABATTERY_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HEMABATTERY_ENO, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HEMABATTERY_EPCSREQDATA[] = "epcsReqData";
static RISMDStdVariable const lcmd_var_HEMABATTERY_EPCSREQDATA =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_EPCSREQDATA, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_EPCSREQDATA));

static char const lcmd_var_name_HEMABATTERY_EPCS_CAN_CH[] = "EPCS_CAN_CH";
static RISMDStdVariable const lcmd_var_HEMABATTERY_EPCS_CAN_CH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_EPCS_CAN_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_EPCS_CAN_CH));

extern RISMDPOUType const lcmd_type_ESSSTATE1;
static char const lcmd_var_name_HEMABATTERY_ESSSTATE11[] = "essState11";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ESSSTATE11 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ESSSTATE11, &lcmd_type_ESSSTATE1, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ESSSTATE11));

static char const lcmd_var_name_HEMABATTERY_FAULTFORSTATE[] = "FaultForState";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULTFORSTATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULTFORSTATE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULTFORSTATE));

static char const lcmd_var_name_HEMABATTERY_FAULTMDLBALT[] = "faultMdlBalT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULTMDLBALT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULTMDLBALT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULTMDLBALT));

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_HEMABATTERY_FAULTSWORD[] = "faultsWord";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULTSWORD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULTSWORD, &risMdType_LWORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULTSWORD));

static char const lcmd_var_name_HEMABATTERY_FAULT_CAN_COMMUNICATION[] = "Fault_CAN_Communication";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CAN_COMMUNICATION =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CAN_COMMUNICATION, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CAN_COMMUNICATION));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_TEMP_DANGER[] = "Fault_Cell_Over_Temp_Danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_OVER_TEMP_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_TEMP_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_OVER_TEMP_DANGER));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_TEMP_WARNING[] = "Fault_Cell_Over_Temp_Warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_OVER_TEMP_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_TEMP_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_OVER_TEMP_WARNING));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_DANGER[] = "Fault_Cell_Over_Voltage_Danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_OVER_VOLTAGE_DANGER));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_WARNING[] = "Fault_Cell_Over_Voltage_Warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_OVER_VOLTAGE_WARNING));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_TEMP_DANGER[] = "Fault_Cell_Under_Temp_Danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_TEMP_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_TEMP_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_UNDER_TEMP_DANGER));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_TEMP_WARNING[] = "Fault_Cell_Under_Temp_Warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_TEMP_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_TEMP_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_UNDER_TEMP_WARNING));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_DANGER[] = "Fault_Cell_Under_Voltage_Danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_UNDER_VOLTAGE_DANGER));

static char const lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_WARNING[] = "Fault_Cell_Under_Voltage_Warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_CELL_UNDER_VOLTAGE_WARNING));

static char const lcmd_var_name_HEMABATTERY_FAULT_DMCC_EXCEED[] = "Fault_DMCC_Exceed";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_DMCC_EXCEED =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_DMCC_EXCEED, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_DMCC_EXCEED));

static char const lcmd_var_name_HEMABATTERY_FAULT_DMDC_EXCEED[] = "Fault_DMDC_Exceed";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_DMDC_EXCEED =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_DMDC_EXCEED, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_DMDC_EXCEED));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_BMU[] = "Fault_Pack_BMU";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_BMU =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_BMU, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_BMU));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_CHARGE_CONTACTOR[] = "Fault_Pack_Charge_Contactor";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_CHARGE_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_CHARGE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_CHARGE_CONTACTOR));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_CMS[] = "Fault_Pack_CMS";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_CMS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_CMS, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_CMS));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_DISCHARGE_CONTACTOR[] = "Fault_Pack_Discharge_Contactor";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_DISCHARGE_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_DISCHARGE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_DISCHARGE_CONTACTOR));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_HVIL_1[] = "Fault_Pack_HVIL_1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_HVIL_1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_HVIL_1, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_HVIL_1));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_HVIL_2[] = "Fault_Pack_HVIL_2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_HVIL_2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_HVIL_2, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_HVIL_2));

static char const lcmd_var_name_HEMABATTERY_FAULT_PACK_NEGATIVE_CONTACTOR[] = "Fault_Pack_Negative_Contactor";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FAULT_PACK_NEGATIVE_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FAULT_PACK_NEGATIVE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FAULT_PACK_NEGATIVE_CONTACTOR));

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_HEMABATTERY_FLASH1[] = "FLASH1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FLASH1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FLASH1, &lcmd_type_FLASH, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FLASH1));

static char const lcmd_var_name_HEMABATTERY_FLASH3[] = "FLASH3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FLASH3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FLASH3, &lcmd_type_FLASH, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FLASH3));

static char const lcmd_var_name_HEMABATTERY_FLASH4[] = "FLASH4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FLASH4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FLASH4, &lcmd_type_FLASH, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FLASH4));

static char const lcmd_var_name_HEMABATTERY_FORCECHARGE[] = "forceCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FORCECHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FORCECHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FORCECHARGE));

static char const lcmd_var_name_HEMABATTERY_FORCEDISCHARGE[] = "forceDischarge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FORCEDISCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FORCEDISCHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FORCEDISCHARGE));

static char const lcmd_var_name_HEMABATTERY_FORCENEGATIVE[] = "forceNegative";
static RISMDStdVariable const lcmd_var_HEMABATTERY_FORCENEGATIVE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_FORCENEGATIVE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_FORCENEGATIVE));

extern RISMDPOUType const lcmd_type_F_TRIG;
static char const lcmd_var_name_HEMABATTERY_F_TRIG1[] = "F_TRIG1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_F_TRIG1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_F_TRIG1, &lcmd_type_F_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_F_TRIG1));

static char const lcmd_var_name_HEMABATTERY_F_TRIG2[] = "F_TRIG2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_F_TRIG2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_F_TRIG2, &lcmd_type_F_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_F_TRIG2));

static char const lcmd_var_name_HEMABATTERY_F_TRIG3[] = "F_TRIG3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_F_TRIG3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_F_TRIG3, &lcmd_type_F_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_F_TRIG3));

static char const lcmd_var_name_HEMABATTERY_F_TRIG4[] = "F_TRIG4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_F_TRIG4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_F_TRIG4, &lcmd_type_F_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_F_TRIG4));

extern RISMDPOUType const lcmd_type_GUI;
static char const lcmd_var_name_HEMABATTERY_GUI1[] = "GUI1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUI1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUI1, &lcmd_type_GUI, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUI1));

extern RISMDPOUType const lcmd_type_GUICFG_INT;
static char const lcmd_var_name_HEMABATTERY_GUICFG_INT1[] = "GUICFG_INT1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT1, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT1));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT10[] = "GUICFG_INT10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT10, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT10));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT11[] = "GUICFG_INT11";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT11 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT11, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT11));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT12[] = "GUICFG_INT12";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT12 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT12, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT12));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT13[] = "GUICFG_INT13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT13, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT13));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT14[] = "GUICFG_INT14";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT14 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT14, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT14));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT15[] = "GUICFG_INT15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT15, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT15));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT16[] = "GUICFG_INT16";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT16 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT16, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT16));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT17[] = "GUICFG_INT17";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT17 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT17, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT17));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT18[] = "GUICFG_INT18";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT18 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT18, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT18));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT19[] = "GUICFG_INT19";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT19 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT19, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT19));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT2[] = "GUICFG_INT2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT2, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT2));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT20[] = "GUICFG_INT20";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT20 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT20, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT20));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT21[] = "GUICFG_INT21";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT21 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT21, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT21));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT22[] = "GUICFG_INT22";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT22 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT22, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT22));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT23[] = "GUICFG_INT23";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT23 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT23, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT23));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT24[] = "GUICFG_INT24";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT24 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT24, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT24));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT25[] = "GUICFG_INT25";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT25 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT25, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT25));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT26[] = "GUICFG_INT26";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT26 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT26, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT26));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT27[] = "GUICFG_INT27";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT27 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT27, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT27));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT28[] = "GUICFG_INT28";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT28 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT28, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT28));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT3[] = "GUICFG_INT3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT3, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT3));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT4[] = "GUICFG_INT4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT4, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT4));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT5[] = "GUICFG_INT5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT5, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT5));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT6[] = "GUICFG_INT6";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT6 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT6, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT6));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT7[] = "GUICFG_INT7";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT7 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT7, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT7));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT8[] = "GUICFG_INT8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT8, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT8));

static char const lcmd_var_name_HEMABATTERY_GUICFG_INT9[] = "GUICFG_INT9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_INT9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_INT9, &lcmd_type_GUICFG_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_INT9));

extern RISMDPOUType const lcmd_type_GUICFG_REAL;
static char const lcmd_var_name_HEMABATTERY_GUICFG_REAL1[] = "GUICFG_REAL1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUICFG_REAL1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUICFG_REAL1, &lcmd_type_GUICFG_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUICFG_REAL1));

static char const lcmd_var_name_HEMABATTERY_GUI_FAULT[] = "GUI_Fault";
static RISMDStdVariable const lcmd_var_HEMABATTERY_GUI_FAULT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_GUI_FAULT, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_GUI_FAULT));

static char const lcmd_var_name_HEMABATTERY_HKM_DISCHARGECONTACT[] = "hkm_DischargeContact";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HKM_DISCHARGECONTACT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HKM_DISCHARGECONTACT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HKM_DISCHARGECONTACT));

static char const lcmd_var_name_HEMABATTERY_HKM_DISCHARGEINVOLTAGE[] = "hkm_DischargeInVoltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HKM_DISCHARGEINVOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HKM_DISCHARGEINVOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HKM_DISCHARGEINVOLTAGE));

extern RISMDPOUType const lcmd_type_HVCU_CONFIG;
static char const lcmd_var_name_HEMABATTERY_HVCU_CONFIG1[] = "HVCU_Config1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HVCU_CONFIG1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HVCU_CONFIG1, &lcmd_type_HVCU_CONFIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HVCU_CONFIG1));

extern RISMDPOUType const lcmd_type_HVCU_CONTROL_STATE;
static char const lcmd_var_name_HEMABATTERY_HVCU_CONTROL_STATE2[] = "HVCU_Control_State2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HVCU_CONTROL_STATE2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HVCU_CONTROL_STATE2, &lcmd_type_HVCU_CONTROL_STATE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HVCU_CONTROL_STATE2));

static char const lcmd_var_name_HEMABATTERY_HVCU_STATE[] = "HVCU_State";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HVCU_STATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HVCU_STATE, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HVCU_STATE));

static char const lcmd_var_name_HEMABATTERY_HVIL1_STATUS[] = "HVIL1_status";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HVIL1_STATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HVIL1_STATUS, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HVIL1_STATUS));

static char const lcmd_var_name_HEMABATTERY_HVIL2_STATUS[] = "HVIL2_status";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HVIL2_STATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HVIL2_STATUS, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HVIL2_STATUS));

static char const lcmd_var_name_HEMABATTERY_HW_VERSION[] = "HW_version";
static RISMDStdVariable const lcmd_var_HEMABATTERY_HW_VERSION =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_HW_VERSION, &risMdType_BYTE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_HW_VERSION));

static char const lcmd_var_name_HEMABATTERY_IGNITION[] = "IGNITION";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IGNITION =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IGNITION, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IGNITION));

static char const lcmd_var_name_HEMABATTERY_IGNITION_KL15[] = "IGNITION_KL15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IGNITION_KL15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IGNITION_KL15, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IGNITION_KL15));

static char const lcmd_var_name_HEMABATTERY_IMDENABLE[] = "IMDenable";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IMDENABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IMDENABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IMDENABLE));

static char const lcmd_var_name_HEMABATTERY_INCREASECHARGEAMP[] = "increaseChargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INCREASECHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INCREASECHARGEAMP, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INCREASECHARGEAMP));

static char const lcmd_var_name_HEMABATTERY_INCREASEDISCHARGEAMP[] = "increaseDischargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INCREASEDISCHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INCREASEDISCHARGEAMP, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INCREASEDISCHARGEAMP));

static char const lcmd_var_name_HEMABATTERY_INPUTSGN1[] = "inputSgn1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INPUTSGN1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INPUTSGN1, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INPUTSGN1));

static char const lcmd_var_name_HEMABATTERY_INPUTSGN1STATUS[] = "inputSgn1Status";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INPUTSGN1STATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INPUTSGN1STATUS, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INPUTSGN1STATUS));

static char const lcmd_var_name_HEMABATTERY_INPUTSGN2[] = "inputSgn2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INPUTSGN2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INPUTSGN2, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INPUTSGN2));

static char const lcmd_var_name_HEMABATTERY_INPUTSGN2STATUS[] = "inputSgn2Status";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INPUTSGN2STATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INPUTSGN2STATUS, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INPUTSGN2STATUS));

static char const lcmd_var_name_HEMABATTERY_INPUTSGN3[] = "inputSgn3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INPUTSGN3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INPUTSGN3, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INPUTSGN3));

static char const lcmd_var_name_HEMABATTERY_INSTANTPOWER[] = "instantPower";
static RISMDStdVariable const lcmd_var_HEMABATTERY_INSTANTPOWER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_INSTANTPOWER, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_INSTANTPOWER));

extern RISMDPOUType const lcmd_type_IORD;
static char const lcmd_var_name_HEMABATTERY_IORD1[] = "IORD1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IORD1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IORD1, &lcmd_type_IORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IORD1));

static char const lcmd_var_name_HEMABATTERY_IORD2[] = "IORD2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IORD2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IORD2, &lcmd_type_IORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IORD2));

static char const lcmd_var_name_HEMABATTERY_IORD3[] = "IORD3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IORD3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IORD3, &lcmd_type_IORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IORD3));

static char const lcmd_var_name_HEMABATTERY_IORD4[] = "IORD4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IORD4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IORD4, &lcmd_type_IORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IORD4));

static char const lcmd_var_name_HEMABATTERY_IORD5[] = "IORD5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IORD5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IORD5, &lcmd_type_IORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IORD5));

extern RISMDPOUType const lcmd_type_IOWR;
static char const lcmd_var_name_HEMABATTERY_IOWR1[] = "IOWR1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR1, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR1));

static char const lcmd_var_name_HEMABATTERY_IOWR10[] = "IOWR10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR10, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR10));

static char const lcmd_var_name_HEMABATTERY_IOWR13[] = "IOWR13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR13, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR13));

static char const lcmd_var_name_HEMABATTERY_IOWR18[] = "IOWR18";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR18 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR18, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR18));

static char const lcmd_var_name_HEMABATTERY_IOWR19[] = "IOWR19";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR19 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR19, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR19));

static char const lcmd_var_name_HEMABATTERY_IOWR2[] = "IOWR2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR2, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR2));

static char const lcmd_var_name_HEMABATTERY_IOWR20[] = "IOWR20";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR20 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR20, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR20));

static char const lcmd_var_name_HEMABATTERY_IOWR21[] = "IOWR21";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR21 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR21, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR21));

static char const lcmd_var_name_HEMABATTERY_IOWR22[] = "IOWR22";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR22 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR22, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR22));

static char const lcmd_var_name_HEMABATTERY_IOWR23[] = "IOWR23";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR23 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR23, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR23));

static char const lcmd_var_name_HEMABATTERY_IOWR24[] = "IOWR24";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR24 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR24, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR24));

static char const lcmd_var_name_HEMABATTERY_IOWR4[] = "IOWR4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR4, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR4));

static char const lcmd_var_name_HEMABATTERY_IOWR5[] = "IOWR5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR5, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR5));

static char const lcmd_var_name_HEMABATTERY_IOWR6[] = "IOWR6";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR6 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR6, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR6));

static char const lcmd_var_name_HEMABATTERY_IOWR7[] = "IOWR7";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR7 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR7, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR7));

static char const lcmd_var_name_HEMABATTERY_IOWR9[] = "IOWR9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_IOWR9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_IOWR9, &lcmd_type_IOWR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_IOWR9));

extern RISMDPOUType const lcmd_type_ISABELINIT;
static char const lcmd_var_name_HEMABATTERY_ISABELINIT1[] = "ISABELinit1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ISABELINIT1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ISABELINIT1, &lcmd_type_ISABELINIT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ISABELINIT1));

static char const lcmd_var_name_HEMABATTERY_ISOLATIONSTATUS[] = "isolationStatus";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ISOLATIONSTATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ISOLATIONSTATUS, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ISOLATIONSTATUS));

static char const lcmd_var_name_HEMABATTERY_ISOOHMPERV[] = "isoOhmPerV";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ISOOHMPERV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ISOOHMPERV, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ISOOHMPERV));

static char const lcmd_var_name_HEMABATTERY_ISORN[] = "isoRn";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ISORN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ISORN, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ISORN));

static char const lcmd_var_name_HEMABATTERY_ISORP[] = "isoRp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_ISORP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_ISORP, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_ISORP));

static char const lcmd_var_name_HEMABATTERY_KWHCAPACITY[] = "kWhCapacity";
static RISMDStdVariable const lcmd_var_HEMABATTERY_KWHCAPACITY =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_KWHCAPACITY, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_KWHCAPACITY));

static char const lcmd_var_name_HEMABATTERY_MAINCHARGECOMPLETE[] = "mainChargeComplete";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAINCHARGECOMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAINCHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAINCHARGECOMPLETE));

static char const lcmd_var_name_HEMABATTERY_MASTERID[] = "masterID";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MASTERID =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MASTERID, &risMdType_BYTE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MASTERID));

static char const lcmd_var_name_HEMABATTERY_MAXCHARGEAMP[] = "maxChargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAXCHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAXCHARGEAMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAXCHARGEAMP));

static char const lcmd_var_name_HEMABATTERY_MAXCHARGEAMPRCFG[] = "maxChargeAmprCfg";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAXCHARGEAMPRCFG =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAXCHARGEAMPRCFG, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAXCHARGEAMPRCFG));

static char const lcmd_var_name_HEMABATTERY_MAXDISCHARGEAMP[] = "maxDischargeAmp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAXDISCHARGEAMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAXDISCHARGEAMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAXDISCHARGEAMP));

static char const lcmd_var_name_HEMABATTERY_MAXDISCHARGEAMPRCFG[] = "maxDischargeAmprCfg";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAXDISCHARGEAMPRCFG =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAXDISCHARGEAMPRCFG, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAXDISCHARGEAMPRCFG));

extern RISMDPOUType const lcmd_type_MAX_MIN_VOLTAGE_STATUS;
static char const lcmd_var_name_HEMABATTERY_MAX_MIN_VOLTAGE_STATUS1[] = "Max_Min_Voltage_Status1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MAX_MIN_VOLTAGE_STATUS1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MAX_MIN_VOLTAGE_STATUS1, &lcmd_type_MAX_MIN_VOLTAGE_STATUS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MAX_MIN_VOLTAGE_STATUS1));

static char const lcmd_var_name_HEMABATTERY_MEASURE_ALL[] = "Measure_All";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MEASURE_ALL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MEASURE_ALL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MEASURE_ALL));

static char const lcmd_var_name_HEMABATTERY_MEASURE_AUX[] = "Measure_Aux";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MEASURE_AUX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MEASURE_AUX, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MEASURE_AUX));

static char const lcmd_var_name_HEMABATTERY_MULTAMPCHAR[] = "multAmpChar";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MULTAMPCHAR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MULTAMPCHAR, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MULTAMPCHAR));

static char const lcmd_var_name_HEMABATTERY_MULTAMPDISCH[] = "multAmpDisch";
static RISMDStdVariable const lcmd_var_HEMABATTERY_MULTAMPDISCH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_MULTAMPDISCH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_MULTAMPDISCH));

static char const lcmd_var_name_HEMABATTERY_NEWBMU_RESET[] = "NEWBMU_RESET";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NEWBMU_RESET =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NEWBMU_RESET, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NEWBMU_RESET));

static char const lcmd_var_name_HEMABATTERY_NEW_CHG_CONTACT[] = "new_CHG_CONTACT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NEW_CHG_CONTACT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NEW_CHG_CONTACT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NEW_CHG_CONTACT));

static char const lcmd_var_name_HEMABATTERY_NEW_CONTACTFBK1[] = "new_contactFbk1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NEW_CONTACTFBK1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NEW_CONTACTFBK1, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NEW_CONTACTFBK1));

static char const lcmd_var_name_HEMABATTERY_NEW_CONTACTFBK2[] = "new_contactFbk2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NEW_CONTACTFBK2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NEW_CONTACTFBK2, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NEW_CONTACTFBK2));

static char const lcmd_var_name_HEMABATTERY_NEW_DCHG_CONTACT[] = "new_DCHG_CONTACT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NEW_DCHG_CONTACT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NEW_DCHG_CONTACT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NEW_DCHG_CONTACT));

extern RISMDPOUType const lcmd_type_NTC;
static char const lcmd_var_name_HEMABATTERY_NTC2[] = "NTC2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NTC2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NTC2, &lcmd_type_NTC, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NTC2));

static char const lcmd_var_name_HEMABATTERY_NTCBETA[] = "ntcBETA";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NTCBETA =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NTCBETA, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NTCBETA));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_BMU[] = "Number_Of_BMU";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_BMU =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_BMU, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_BMU));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_BMU_CFG[] = "Number_Of_BMU_cfg";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_BMU_CFG =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_BMU_CFG, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_BMU_CFG));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_CELL[] = "Number_Of_Cell";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_CELL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_CELL, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_CELL));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_MAXCELL[] = "Number_Of_MaxCell";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_MAXCELL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_MAXCELL, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_MAXCELL));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_MAXCELL2[] = "Number_Of_MaxCell2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_MAXCELL2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_MAXCELL2, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_MAXCELL2));

static char const lcmd_var_name_HEMABATTERY_NUMBER_OF_PARALLEL_CELL[] = "Number_Of_Parallel_Cell";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMBER_OF_PARALLEL_CELL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMBER_OF_PARALLEL_CELL, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMBER_OF_PARALLEL_CELL));

RISMDArrayType const lcmd_type_HEMABATTERY_NUMOFCELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_HEMABATTERY_NUMOFCELLS[] = "NumOfCells";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMOFCELLS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMOFCELLS, &lcmd_type_HEMABATTERY_NUMOFCELLS_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMOFCELLS));

extern RISMDPOUType const lcmd_type_NUMOFCELLS;
static char const lcmd_var_name_HEMABATTERY_NUMOFCELLS1[] = "numOfCells1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_NUMOFCELLS1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_NUMOFCELLS1, &lcmd_type_NUMOFCELLS, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_NUMOFCELLS1));

static char const lcmd_var_name_HEMABATTERY_OCFAULTAMPR[] = "OCfaultAmpr";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OCFAULTAMPR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OCFAULTAMPR, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OCFAULTAMPR));

static char const lcmd_var_name_HEMABATTERY_OCWARNINGAMPR[] = "OCwarningAmpr";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OCWARNINGAMPR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OCWARNINGAMPR, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OCWARNINGAMPR));

static char const lcmd_var_name_HEMABATTERY_OC_FAULT[] = "OC_fault";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OC_FAULT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OC_FAULT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OC_FAULT));

static char const lcmd_var_name_HEMABATTERY_OC_WARNING[] = "OC_warning";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OC_WARNING =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OC_WARNING, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OC_WARNING));

static char const lcmd_var_name_HEMABATTERY_OT_DANGER[] = "OT_danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OT_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OT_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OT_DANGER));

static char const lcmd_var_name_HEMABATTERY_OT_DANGER_RISK[] = "OT_danger_risk";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OT_DANGER_RISK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OT_DANGER_RISK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OT_DANGER_RISK));

static char const lcmd_var_name_HEMABATTERY_OUTPUTSGN1[] = "outputSgn1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OUTPUTSGN1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OUTPUTSGN1, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OUTPUTSGN1));

static char const lcmd_var_name_HEMABATTERY_OUTPUTSGN2[] = "outputSgn2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OUTPUTSGN2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OUTPUTSGN2, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OUTPUTSGN2));

static char const lcmd_var_name_HEMABATTERY_OUTPUTVOLTAGE[] = "OutputVoltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OUTPUTVOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OUTPUTVOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OUTPUTVOLTAGE));

static char const lcmd_var_name_HEMABATTERY_OV_DANGER[] = "OV_danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OV_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OV_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OV_DANGER));

static char const lcmd_var_name_HEMABATTERY_OV_DANGER_RISK[] = "OV_danger_risk";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OV_DANGER_RISK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OV_DANGER_RISK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OV_DANGER_RISK));

static char const lcmd_var_name_HEMABATTERY_OV_FAULT[] = "OV_fault";
static RISMDStdVariable const lcmd_var_HEMABATTERY_OV_FAULT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_OV_FAULT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_OV_FAULT));

static char const lcmd_var_name_HEMABATTERY_PACKREMCAP_KWH[] = "PackRemCap_kWh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACKREMCAP_KWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACKREMCAP_KWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACKREMCAP_KWH));

static char const lcmd_var_name_HEMABATTERY_PACK_CHARGE_VOLTAGE[] = "Pack_Charge_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_CHARGE_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_CHARGE_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_CHARGE_VOLTAGE));

static char const lcmd_var_name_HEMABATTERY_PACK_CUTOFFHIGH_VOLTAGE[] = "Pack_CutoffHigh_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_CUTOFFHIGH_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_CUTOFFHIGH_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_CUTOFFHIGH_VOLTAGE));

static char const lcmd_var_name_HEMABATTERY_PACK_CUTOFFLOW_VOLTAGE[] = "Pack_CutoffLow_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_CUTOFFLOW_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_CUTOFFLOW_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_CUTOFFLOW_VOLTAGE));

static char const lcmd_var_name_HEMABATTERY_PACK_CUTOFFV_LOW[] = "Pack_CutoffV_Low";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_CUTOFFV_LOW =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_CUTOFFV_LOW, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_CUTOFFV_LOW));

static char const lcmd_var_name_HEMABATTERY_PACK_DISCHARGE_VOLTAGE[] = "Pack_Discharge_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_DISCHARGE_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_DISCHARGE_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_DISCHARGE_VOLTAGE));

static char const lcmd_var_name_HEMABATTERY_PACK_DMCC[] = "Pack_DMCC";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_DMCC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_DMCC, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_DMCC));

static char const lcmd_var_name_HEMABATTERY_PACK_DMDC[] = "Pack_DMDC";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_DMDC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_DMDC, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_DMDC));

static char const lcmd_var_name_HEMABATTERY_PACK_TEMPERATURE[] = "Pack_Temperature";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PACK_TEMPERATURE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PACK_TEMPERATURE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PACK_TEMPERATURE));

static char const lcmd_var_name_HEMABATTERY_PDUCAN[] = "PDUCAN";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PDUCAN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PDUCAN, &lcmd_type_TMS570_CAN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PDUCAN));

static char const lcmd_var_name_HEMABATTERY_PDULED[] = "pduLED";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PDULED =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PDULED, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PDULED));

static char const lcmd_var_name_HEMABATTERY_PRECHARGEBOARDERR[] = "prechargeBoardErr";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGEBOARDERR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGEBOARDERR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGEBOARDERR));

extern RISMDPOUType const lcmd_type_PRECHARGECAN;
static char const lcmd_var_name_HEMABATTERY_PRECHARGECAN1[] = "prechargeCAN1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGECAN1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGECAN1, &lcmd_type_PRECHARGECAN, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGECAN1));

static char const lcmd_var_name_HEMABATTERY_PRECHARGECANERR[] = "prechargeCanErr";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGECANERR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGECANERR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGECANERR));

static char const lcmd_var_name_HEMABATTERY_PRECHARGECOMPLETE[] = "prechargeComplete";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGECOMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGECOMPLETE));

static char const lcmd_var_name_HEMABATTERY_PRECHARGECOMPLETECHARGE[] = "prechargeCompleteCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGECOMPLETECHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGECOMPLETECHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGECOMPLETECHARGE));

static char const lcmd_var_name_HEMABATTERY_PRECHARGEENABLE[] = "prechargeEnable";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGEENABLE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGEENABLE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGEENABLE));

static char const lcmd_var_name_HEMABATTERY_PRECHARGEENABLECHARGE[] = "prechargeEnableCharge";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGEENABLECHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGEENABLECHARGE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGEENABLECHARGE));

static char const lcmd_var_name_HEMABATTERY_PRECHARGEERROR[] = "prechargeError";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGEERROR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGEERROR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGEERROR));

static char const lcmd_var_name_HEMABATTERY_PRECHARGEINTERVAL[] = "prechargeInterval";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGEINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGEINTERVAL, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGEINTERVAL));

static char const lcmd_var_name_HEMABATTERY_PRECHARGESTATUS[] = "prechargeStatus";
static RISMDStdVariable const lcmd_var_HEMABATTERY_PRECHARGESTATUS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_PRECHARGESTATUS, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_PRECHARGESTATUS));

static char const lcmd_var_name_HEMABATTERY_RDY_TO_SLEEP[] = "RDY_TO_SLEEP";
static RISMDStdVariable const lcmd_var_HEMABATTERY_RDY_TO_SLEEP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_RDY_TO_SLEEP, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_RDY_TO_SLEEP));

extern RISMDPOUType const lcmd_type_R_TRIG;
static char const lcmd_var_name_HEMABATTERY_R_TRIG2[] = "R_TRIG2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_R_TRIG2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_R_TRIG2, &lcmd_type_R_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_R_TRIG2));

static char const lcmd_var_name_HEMABATTERY_R_TRIG3[] = "R_TRIG3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_R_TRIG3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_R_TRIG3, &lcmd_type_R_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_R_TRIG3));

static char const lcmd_var_name_HEMABATTERY_R_TRIG8[] = "R_TRIG8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_R_TRIG8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_R_TRIG8, &lcmd_type_R_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_R_TRIG8));

static char const lcmd_var_name_HEMABATTERY_R_TRIG9[] = "R_TRIG9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_R_TRIG9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_R_TRIG9, &lcmd_type_R_TRIG, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_R_TRIG9));

extern RISMDPOUType const lcmd_type_SAFETY_POWER;
static char const lcmd_var_name_HEMABATTERY_SAFETY_POWER1[] = "SAFETY_POWER1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SAFETY_POWER1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SAFETY_POWER1, &lcmd_type_SAFETY_POWER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SAFETY_POWER1));

static char const lcmd_var_name_HEMABATTERY_SELCLOCK[] = "selClock";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SELCLOCK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SELCLOCK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SELCLOCK));

static char const lcmd_var_name_HEMABATTERY_SELECTED_BMU_LOC[] = "Selected_BMU_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SELECTED_BMU_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SELECTED_BMU_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SELECTED_BMU_LOC));

static char const lcmd_var_name_HEMABATTERY_SELECTED_CELL_LOC[] = "Selected_Cell_Loc";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SELECTED_CELL_LOC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SELECTED_CELL_LOC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SELECTED_CELL_LOC));

static char const lcmd_var_name_HEMABATTERY_SELECTED_PACK_NUMBER[] = "Selected_Pack_Number";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SELECTED_PACK_NUMBER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SELECTED_PACK_NUMBER, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SELECTED_PACK_NUMBER));

static char const lcmd_var_name_HEMABATTERY_SELECTLASTONE[] = "selectLastOne";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SELECTLASTONE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SELECTLASTONE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SELECTLASTONE));

static char const lcmd_var_name_HEMABATTERY_SHUTDOWNCMD[] = "shutdownCMD";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SHUTDOWNCMD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SHUTDOWNCMD, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SHUTDOWNCMD));

static char const lcmd_var_name_HEMABATTERY_SHUTDOWNCOMPLETE[] = "shutdownComplete";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SHUTDOWNCOMPLETE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SHUTDOWNCOMPLETE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SHUTDOWNCOMPLETE));

static char const lcmd_var_name_HEMABATTERY_SHUTDOWNENB[] = "shutdownEnb";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SHUTDOWNENB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SHUTDOWNENB, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SHUTDOWNENB));

static char const lcmd_var_name_HEMABATTERY_SIM100NOTFOUND[] = "sim100NotFound";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SIM100NOTFOUND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SIM100NOTFOUND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SIM100NOTFOUND));

static char const lcmd_var_name_HEMABATTERY_SIM100_ERRBYTE[] = "sim100_ErrByte";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SIM100_ERRBYTE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SIM100_ERRBYTE, &risMdType_BYTE, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SIM100_ERRBYTE));

static char const lcmd_var_name_HEMABATTERY_SLAVEMODE[] = "slaveMode";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SLAVEMODE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SLAVEMODE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SLAVEMODE));

static char const lcmd_var_name_HEMABATTERY_SOCCHCOMP[] = "socChComp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOCCHCOMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOCCHCOMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOCCHCOMP));

static char const lcmd_var_name_HEMABATTERY_SOCDCHCOMP[] = "socDchComp";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOCDCHCOMP =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOCDCHCOMP, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOCDCHCOMP));

extern RISMDPOUType const lcmd_type_SOCISZ;
static char const lcmd_var_name_HEMABATTERY_SOCISZ1[] = "SOCisz1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOCISZ1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOCISZ1, &lcmd_type_SOCISZ, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOCISZ1));

static char const lcmd_var_name_HEMABATTERY_SOCREAL[] = "SoCreal";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOCREAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOCREAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOCREAL));

static char const lcmd_var_name_HEMABATTERY_SOC_CC[] = "SoC_CC";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOC_CC =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOC_CC, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOC_CC));

static char const lcmd_var_name_HEMABATTERY_SOH[] = "SoH";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SOH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SOH, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SOH));

extern RISMDPOUType const lcmd_type_SR;
static char const lcmd_var_name_HEMABATTERY_SR1[] = "SR1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SR1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SR1, &lcmd_type_SR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SR1));

static char const lcmd_var_name_HEMABATTERY_SR2[] = "SR2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SR2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SR2, &lcmd_type_SR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SR2));

static char const lcmd_var_name_HEMABATTERY_SR5[] = "SR5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_SR5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_SR5, &lcmd_type_SR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_SR5));

RISMDArrayType const lcmd_type_HEMABATTERY_TAUXCELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_HEMABATTERY_TAUXCELLS[] = "tauxCells";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TAUXCELLS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TAUXCELLS, &lcmd_type_HEMABATTERY_TAUXCELLS_ARR, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TAUXCELLS));

extern RISMDPOUType const lcmd_type_TBUFFER;
static char const lcmd_var_name_HEMABATTERY_TBUFFER1[] = "Tbuffer1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER1, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER1));

static char const lcmd_var_name_HEMABATTERY_TBUFFER15[] = "Tbuffer15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER15, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER15));

static char const lcmd_var_name_HEMABATTERY_TBUFFER16[] = "Tbuffer16";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER16 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER16, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER16));

static char const lcmd_var_name_HEMABATTERY_TBUFFER19[] = "Tbuffer19";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER19 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER19, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER19));

static char const lcmd_var_name_HEMABATTERY_TBUFFER2[] = "Tbuffer2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER2, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER2));

static char const lcmd_var_name_HEMABATTERY_TBUFFER20[] = "Tbuffer20";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER20 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER20, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER20));

static char const lcmd_var_name_HEMABATTERY_TBUFFER4[] = "Tbuffer4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER4, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER4));

static char const lcmd_var_name_HEMABATTERY_TBUFFER6[] = "Tbuffer6";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER6 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER6, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER6));

static char const lcmd_var_name_HEMABATTERY_TBUFFER7[] = "Tbuffer7";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TBUFFER7 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TBUFFER7, &lcmd_type_TBUFFER, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TBUFFER7));

static char const lcmd_var_name_HEMABATTERY_TESTREMWH[] = "testRemWh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TESTREMWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TESTREMWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TESTREMWH));

static char const lcmd_var_name_HEMABATTERY_TESTSOCSTATE[] = "testSocState";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TESTSOCSTATE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TESTSOCSTATE, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TESTSOCSTATE));

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_HEMABATTERY_TESTVALUE0[] = "testValue0";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TESTVALUE0 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TESTVALUE0, &risMdType_TIME, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TESTVALUE0));

extern RISMDPOUType const lcmd_type_TOF;
static char const lcmd_var_name_HEMABATTERY_TOF1[] = "TOF1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF1, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF1));

static char const lcmd_var_name_HEMABATTERY_TOF10[] = "TOF10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF10, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF10));

static char const lcmd_var_name_HEMABATTERY_TOF12[] = "TOF12";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF12 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF12, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF12));

static char const lcmd_var_name_HEMABATTERY_TOF13[] = "TOF13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF13, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF13));

static char const lcmd_var_name_HEMABATTERY_TOF14[] = "TOF14";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF14 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF14, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF14));

static char const lcmd_var_name_HEMABATTERY_TOF15[] = "TOF15";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF15 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF15, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF15));

static char const lcmd_var_name_HEMABATTERY_TOF2[] = "TOF2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF2, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF2));

static char const lcmd_var_name_HEMABATTERY_TOF3[] = "TOF3";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF3 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF3, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF3));

static char const lcmd_var_name_HEMABATTERY_TOF4[] = "TOF4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF4, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF4));

static char const lcmd_var_name_HEMABATTERY_TOF5[] = "TOF5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF5, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF5));

static char const lcmd_var_name_HEMABATTERY_TOF6[] = "TOF6";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF6 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF6, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF6));

static char const lcmd_var_name_HEMABATTERY_TOF7[] = "TOF7";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF7 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF7, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF7));

static char const lcmd_var_name_HEMABATTERY_TOF8[] = "TOF8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF8, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF8));

static char const lcmd_var_name_HEMABATTERY_TOF9[] = "TOF9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOF9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOF9, &lcmd_type_TOF, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOF9));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_HEMABATTERY_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON1, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON1));

static char const lcmd_var_name_HEMABATTERY_TON10[] = "TON10";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON10 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON10, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON10));

static char const lcmd_var_name_HEMABATTERY_TON11[] = "TON11";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON11 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON11, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON11));

static char const lcmd_var_name_HEMABATTERY_TON12[] = "TON12";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON12 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON12, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON12));

static char const lcmd_var_name_HEMABATTERY_TON13[] = "TON13";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON13 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON13, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON13));

static char const lcmd_var_name_HEMABATTERY_TON16[] = "TON16";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON16 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON16, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON16));

static char const lcmd_var_name_HEMABATTERY_TON17[] = "TON17";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON17 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON17, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON17));

static char const lcmd_var_name_HEMABATTERY_TON18[] = "TON18";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON18 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON18, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON18));

static char const lcmd_var_name_HEMABATTERY_TON19[] = "TON19";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON19 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON19, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON19));

static char const lcmd_var_name_HEMABATTERY_TON2[] = "TON2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON2, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON2));

static char const lcmd_var_name_HEMABATTERY_TON21[] = "TON21";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON21 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON21, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON21));

static char const lcmd_var_name_HEMABATTERY_TON22[] = "TON22";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON22 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON22, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON22));

static char const lcmd_var_name_HEMABATTERY_TON26[] = "TON26";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON26 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON26, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON26));

static char const lcmd_var_name_HEMABATTERY_TON27[] = "TON27";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON27 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON27, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON27));

static char const lcmd_var_name_HEMABATTERY_TON4[] = "TON4";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON4 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON4, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON4));

static char const lcmd_var_name_HEMABATTERY_TON5[] = "TON5";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON5 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON5, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON5));

static char const lcmd_var_name_HEMABATTERY_TON6[] = "TON6";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON6 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON6, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON6));

static char const lcmd_var_name_HEMABATTERY_TON7[] = "TON7";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON7 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON7, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON7));

static char const lcmd_var_name_HEMABATTERY_TON8[] = "TON8";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON8 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON8, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON8));

static char const lcmd_var_name_HEMABATTERY_TON9[] = "TON9";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TON9 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TON9, &lcmd_type_TON, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TON9));

static char const lcmd_var_name_HEMABATTERY_TOTAL_VOLTAGE[] = "Total_Voltage";
static RISMDStdVariable const lcmd_var_HEMABATTERY_TOTAL_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_TOTAL_VOLTAGE, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_TOTAL_VOLTAGE));

extern RISMDPOUType const lcmd_type_UPDOWNCNTTIM;
static char const lcmd_var_name_HEMABATTERY_UPDOWNCNTTIM1[] = "UpDownCntTim1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UPDOWNCNTTIM1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UPDOWNCNTTIM1, &lcmd_type_UPDOWNCNTTIM, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UPDOWNCNTTIM1));

static char const lcmd_var_name_HEMABATTERY_UPDOWNCNTTIM2[] = "UpDownCntTim2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UPDOWNCNTTIM2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UPDOWNCNTTIM2, &lcmd_type_UPDOWNCNTTIM, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UPDOWNCNTTIM2));

static char const lcmd_var_name_HEMABATTERY_USABLECAPKWH[] = "usableCapkwh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_USABLECAPKWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_USABLECAPKWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_USABLECAPKWH));

static char const lcmd_var_name_HEMABATTERY_USABLECAPWH[] = "usableCapwh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_USABLECAPWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_USABLECAPWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_USABLECAPWH));

static char const lcmd_var_name_HEMABATTERY_USABLEREMKWH[] = "usableRemkwh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_USABLEREMKWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_USABLEREMKWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_USABLEREMKWH));

static char const lcmd_var_name_HEMABATTERY_USABLEREMWH[] = "usableRemWh";
static RISMDStdVariable const lcmd_var_HEMABATTERY_USABLEREMWH =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_USABLEREMWH, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_USABLEREMWH));

static char const lcmd_var_name_HEMABATTERY_UT_DANGER[] = "UT_danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UT_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UT_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UT_DANGER));

static char const lcmd_var_name_HEMABATTERY_UT_DANGER_RISK[] = "UT_danger_risk";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UT_DANGER_RISK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UT_DANGER_RISK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UT_DANGER_RISK));

static char const lcmd_var_name_HEMABATTERY_UV_DANGER[] = "UV_danger";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UV_DANGER =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UV_DANGER, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UV_DANGER));

static char const lcmd_var_name_HEMABATTERY_UV_DANGER_RISK[] = "UV_danger_risk";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UV_DANGER_RISK =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UV_DANGER_RISK, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UV_DANGER_RISK));

static char const lcmd_var_name_HEMABATTERY_UV_FAULT[] = "UV_fault";
static RISMDStdVariable const lcmd_var_HEMABATTERY_UV_FAULT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_UV_FAULT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_UV_FAULT));

static char const lcmd_var_name_HEMABATTERY_VOLTSAMPLE1[] = "voltSample1";
static RISMDStdVariable const lcmd_var_HEMABATTERY_VOLTSAMPLE1 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_VOLTSAMPLE1, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_VOLTSAMPLE1));

static char const lcmd_var_name_HEMABATTERY_VOLTSAMPLE2[] = "voltsample2";
static RISMDStdVariable const lcmd_var_HEMABATTERY_VOLTSAMPLE2 =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_VOLTSAMPLE2, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_VOLTSAMPLE2));

static char const lcmd_var_name_HEMABATTERY_WARNINGMDLBALT[] = "warningMdlBalT";
static RISMDStdVariable const lcmd_var_HEMABATTERY_WARNINGMDLBALT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_WARNINGMDLBALT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_WARNINGMDLBALT));

static char const lcmd_var_name_HEMABATTERY_WHCAPACITY[] = "whCapacity";
static RISMDStdVariable const lcmd_var_HEMABATTERY_WHCAPACITY =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_WHCAPACITY, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_WHCAPACITY));

static char const lcmd_var_name_HEMABATTERY_WHINSTANT[] = "whInstant";
static RISMDStdVariable const lcmd_var_HEMABATTERY_WHINSTANT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY_WHINSTANT, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD_WHINSTANT));

static char const lcmd_var_name_HEMABATTERY___1002_TO_USINT[] = "__1002_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1002_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1002_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1002_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___1016_MUL[] = "__1016_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1016_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1016_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1016_MUL));

static char const lcmd_var_name_HEMABATTERY___1073_LE[] = "__1073_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1073_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1073_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1073_LE));

static char const lcmd_var_name_HEMABATTERY___1079_TO_USINT[] = "__1079_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1079_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1079_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1079_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___1082_SEL[] = "__1082_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1082_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1082_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1082_SEL));

static char const lcmd_var_name_HEMABATTERY___1083_AND[] = "__1083_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1083_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1083_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1083_AND));

static char const lcmd_var_name_HEMABATTERY___1092_NE[] = "__1092_NE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1092_NE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1092_NE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1092_NE));

static char const lcmd_var_name_HEMABATTERY___1109_NE[] = "__1109_NE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1109_NE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1109_NE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1109_NE));

static char const lcmd_var_name_HEMABATTERY___1139_EQ[] = "__1139_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1139_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1139_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1139_EQ));

static char const lcmd_var_name_HEMABATTERY___1169_TO_UINT[] = "__1169_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1169_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1169_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1169_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1172_TO_TIME[] = "__1172_TO_TIME";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1172_TO_TIME =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1172_TO_TIME, &risMdType_TIME, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1172_TO_TIME));

static char const lcmd_var_name_HEMABATTERY___1176_DIV_TIME[] = "__1176_DIV_TIME";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1176_DIV_TIME =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1176_DIV_TIME, &risMdType_TIME, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1176_DIV_TIME));

static char const lcmd_var_name_HEMABATTERY___1184_MIN[] = "__1184_MIN";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1184_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1184_MIN, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1184_MIN));

static char const lcmd_var_name_HEMABATTERY___1194_MIN[] = "__1194_MIN";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1194_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1194_MIN, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1194_MIN));

static char const lcmd_var_name_HEMABATTERY___1195_MIN[] = "__1195_MIN";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1195_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1195_MIN, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1195_MIN));

static char const lcmd_var_name_HEMABATTERY___1201_MUL[] = "__1201_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1201_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1201_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1201_MUL));

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_HEMABATTERY___1213_TO_DWORD[] = "__1213_TO_DWORD";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1213_TO_DWORD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1213_TO_DWORD, &risMdType_DWORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1213_TO_DWORD));

static char const lcmd_var_name_HEMABATTERY___1215_AND[] = "__1215_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1215_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1215_AND, &risMdType_DWORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1215_AND));

static char const lcmd_var_name_HEMABATTERY___1226_OR[] = "__1226_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1226_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1226_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1226_OR));

static char const lcmd_var_name_HEMABATTERY___1227_TO_BOOL[] = "__1227_TO_BOOL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1227_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1227_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1227_TO_BOOL));

static char const lcmd_var_name_HEMABATTERY___1229_AND[] = "__1229_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1229_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1229_AND, &risMdType_DWORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1229_AND));

static char const lcmd_var_name_HEMABATTERY___1233_TO_BOOL[] = "__1233_TO_BOOL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1233_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1233_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1233_TO_BOOL));

static char const lcmd_var_name_HEMABATTERY___1239_TO_BOOL[] = "__1239_TO_BOOL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1239_TO_BOOL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1239_TO_BOOL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1239_TO_BOOL));

static char const lcmd_var_name_HEMABATTERY___1243_OR[] = "__1243_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1243_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1243_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1243_OR));

static char const lcmd_var_name_HEMABATTERY___1258_ABS[] = "__1258_ABS";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1258_ABS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1258_ABS, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1258_ABS));

static char const lcmd_var_name_HEMABATTERY___1259_LT[] = "__1259_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1259_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1259_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1259_LT));

static char const lcmd_var_name_HEMABATTERY___1274_LT[] = "__1274_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1274_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1274_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1274_LT));

static char const lcmd_var_name_HEMABATTERY___1278_OR[] = "__1278_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1278_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1278_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1278_OR));

static char const lcmd_var_name_HEMABATTERY___1282_OR[] = "__1282_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1282_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1282_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1282_OR));

static char const lcmd_var_name_HEMABATTERY___1283_LT[] = "__1283_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1283_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1283_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1283_LT));

static char const lcmd_var_name_HEMABATTERY___1291_AND[] = "__1291_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1291_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1291_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1291_AND));

static char const lcmd_var_name_HEMABATTERY___1296_GT[] = "__1296_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1296_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1296_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1296_GT));

static char const lcmd_var_name_HEMABATTERY___1300_AND[] = "__1300_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1300_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1300_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1300_AND));

static char const lcmd_var_name_HEMABATTERY___1304_OR[] = "__1304_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1304_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1304_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1304_OR));

static char const lcmd_var_name_HEMABATTERY___1313_AND[] = "__1313_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1313_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1313_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1313_AND));

static char const lcmd_var_name_HEMABATTERY___1315_OR[] = "__1315_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1315_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1315_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1315_OR));

static char const lcmd_var_name_HEMABATTERY___1319_LE[] = "__1319_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1319_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1319_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1319_LE));

static char const lcmd_var_name_HEMABATTERY___1324_LT[] = "__1324_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1324_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1324_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1324_LT));

static char const lcmd_var_name_HEMABATTERY___132_AND[] = "__132_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___132_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___132_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___132_AND));

static char const lcmd_var_name_HEMABATTERY___1352_DIV[] = "__1352_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1352_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1352_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1352_DIV));

static char const lcmd_var_name_HEMABATTERY___1353_MUL[] = "__1353_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1353_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1353_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1353_MUL));

static char const lcmd_var_name_HEMABATTERY___1367_MUL[] = "__1367_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1367_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1367_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1367_MUL));

static char const lcmd_var_name_HEMABATTERY___1375_AND[] = "__1375_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1375_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1375_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1375_AND));

static char const lcmd_var_name_HEMABATTERY___1379_GT[] = "__1379_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1379_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1379_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1379_GT));

static char const lcmd_var_name_HEMABATTERY___1401_TO_UINT[] = "__1401_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1401_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1401_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1401_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1426_TO_UINT[] = "__1426_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1426_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1426_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1426_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1450_OR[] = "__1450_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1450_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1450_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1450_OR));

static char const lcmd_var_name_HEMABATTERY___1466_TO_UINT[] = "__1466_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1466_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1466_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1466_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1477_TO_UINT[] = "__1477_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1477_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1477_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1477_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1486_TO_UINT[] = "__1486_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1486_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1486_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1486_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1497_TO_UINT[] = "__1497_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1497_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1497_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1497_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1509_TO_UINT[] = "__1509_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1509_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1509_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1509_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1520_DIV[] = "__1520_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1520_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1520_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1520_DIV));

static char const lcmd_var_name_HEMABATTERY___1534_TO_UINT[] = "__1534_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1534_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1534_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1534_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1538_TO_UINT[] = "__1538_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1538_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1538_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1538_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1567_TO_UINT[] = "__1567_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1567_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1567_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1567_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1574_TO_UINT[] = "__1574_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1574_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1574_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1574_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1580_GE[] = "__1580_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1580_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1580_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1580_GE));

static char const lcmd_var_name_HEMABATTERY___1582_LE[] = "__1582_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1582_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1582_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1582_LE));

static char const lcmd_var_name_HEMABATTERY___1613_TO_REAL[] = "__1613_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1613_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1613_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1613_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1616_TO_REAL[] = "__1616_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1616_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1616_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1616_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1623_TO_REAL[] = "__1623_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1623_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1623_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1623_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1630_TO_REAL[] = "__1630_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1630_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1630_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1630_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1640_AND[] = "__1640_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1640_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1640_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1640_AND));

static char const lcmd_var_name_HEMABATTERY___1642_SEL[] = "__1642_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1642_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1642_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1642_SEL));

static char const lcmd_var_name_HEMABATTERY___1646_AND[] = "__1646_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1646_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1646_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1646_AND));

static char const lcmd_var_name_HEMABATTERY___1648_SEL[] = "__1648_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1648_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1648_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1648_SEL));

static char const lcmd_var_name_HEMABATTERY___1658_EQ[] = "__1658_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1658_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1658_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1658_EQ));

static char const lcmd_var_name_HEMABATTERY___1669_LT[] = "__1669_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1669_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1669_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1669_LT));

static char const lcmd_var_name_HEMABATTERY___1684_GT[] = "__1684_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1684_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1684_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1684_GT));

static char const lcmd_var_name_HEMABATTERY___1702_AND[] = "__1702_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1702_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1702_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1702_AND));

static char const lcmd_var_name_HEMABATTERY___1706_OR[] = "__1706_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1706_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1706_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1706_OR));

static char const lcmd_var_name_HEMABATTERY___1709_OR[] = "__1709_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1709_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1709_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1709_OR));

static char const lcmd_var_name_HEMABATTERY___1713_EQ[] = "__1713_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1713_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1713_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1713_EQ));

static char const lcmd_var_name_HEMABATTERY___1719_OR[] = "__1719_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1719_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1719_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1719_OR));

static char const lcmd_var_name_HEMABATTERY___1731_TO_UINT[] = "__1731_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1731_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1731_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1731_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1745_TO_UINT[] = "__1745_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1745_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1745_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1745_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___175_EQ[] = "__175_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___175_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___175_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___175_EQ));

static char const lcmd_var_name_HEMABATTERY___1762_DIV[] = "__1762_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1762_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1762_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1762_DIV));

static char const lcmd_var_name_HEMABATTERY___1770_DIV[] = "__1770_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1770_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1770_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1770_DIV));

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_HEMABATTERY___1771_TO_INT[] = "__1771_TO_INT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1771_TO_INT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1771_TO_INT, &risMdType_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1771_TO_INT));

static char const lcmd_var_name_HEMABATTERY___1772_TO_INT[] = "__1772_TO_INT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1772_TO_INT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1772_TO_INT, &risMdType_INT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1772_TO_INT));

static char const lcmd_var_name_HEMABATTERY___1780_TO_REAL[] = "__1780_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1780_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1780_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1780_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1781_TO_REAL[] = "__1781_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1781_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1781_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1781_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___1782_MUL[] = "__1782_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1782_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1782_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1782_MUL));

static char const lcmd_var_name_HEMABATTERY___1783_MUL[] = "__1783_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1783_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1783_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1783_MUL));

static char const lcmd_var_name_HEMABATTERY___1787_SEL[] = "__1787_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1787_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1787_SEL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1787_SEL));

static char const lcmd_var_name_HEMABATTERY___1788_TO_UINT[] = "__1788_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1788_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1788_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1788_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1789_TO_UINT[] = "__1789_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1789_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1789_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1789_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1790_SEL[] = "__1790_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1790_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1790_SEL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1790_SEL));

static char const lcmd_var_name_HEMABATTERY___1795_EQ[] = "__1795_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1795_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1795_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1795_EQ));

static char const lcmd_var_name_HEMABATTERY___1799_TO_UINT[] = "__1799_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1799_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1799_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1799_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___1813_OR[] = "__1813_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1813_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1813_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1813_OR));

static char const lcmd_var_name_HEMABATTERY___1819_OR[] = "__1819_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1819_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1819_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1819_OR));

static char const lcmd_var_name_HEMABATTERY___1825_GT[] = "__1825_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1825_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1825_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1825_GT));

static char const lcmd_var_name_HEMABATTERY___1847_LE[] = "__1847_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1847_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1847_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1847_LE));

static char const lcmd_var_name_HEMABATTERY___1848_MAX[] = "__1848_MAX";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1848_MAX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1848_MAX, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1848_MAX));

static char const lcmd_var_name_HEMABATTERY___1864_AND[] = "__1864_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1864_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1864_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1864_AND));

static char const lcmd_var_name_HEMABATTERY___1872_MUL[] = "__1872_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1872_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1872_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1872_MUL));

static char const lcmd_var_name_HEMABATTERY___1880_DIV[] = "__1880_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1880_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1880_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1880_DIV));

static char const lcmd_var_name_HEMABATTERY___1887_OR[] = "__1887_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1887_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1887_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1887_OR));

static char const lcmd_var_name_HEMABATTERY___1889_MUL[] = "__1889_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1889_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1889_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1889_MUL));

static char const lcmd_var_name_HEMABATTERY___1957_EQ[] = "__1957_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1957_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1957_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1957_EQ));

static char const lcmd_var_name_HEMABATTERY___1958_SEL[] = "__1958_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1958_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1958_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1958_SEL));

static char const lcmd_var_name_HEMABATTERY___1978_DIV[] = "__1978_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1978_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1978_DIV, &risMdType_LREAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1978_DIV));

static char const lcmd_var_name_HEMABATTERY___1981_TO_USINT[] = "__1981_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1981_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1981_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1981_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___1985_DIV[] = "__1985_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1985_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1985_DIV, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1985_DIV));

static char const lcmd_var_name_HEMABATTERY___1990_SUB[] = "__1990_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1990_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1990_SUB, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1990_SUB));

static char const lcmd_var_name_HEMABATTERY___1993_LIMIT[] = "__1993_LIMIT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1993_LIMIT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1993_LIMIT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1993_LIMIT));

static char const lcmd_var_name_HEMABATTERY___1995_TO_USINT[] = "__1995_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___1995_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___1995_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___1995_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___2011_OR[] = "__2011_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2011_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2011_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2011_OR));

static char const lcmd_var_name_HEMABATTERY___2028_GE[] = "__2028_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2028_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2028_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2028_GE));

static char const lcmd_var_name_HEMABATTERY___2030_OR[] = "__2030_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2030_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2030_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2030_OR));

static char const lcmd_var_name_HEMABATTERY___2056_OR[] = "__2056_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2056_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2056_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2056_OR));

static char const lcmd_var_name_HEMABATTERY___2073_MUL[] = "__2073_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2073_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2073_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2073_MUL));

static char const lcmd_var_name_HEMABATTERY___2077_DIV[] = "__2077_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2077_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2077_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2077_DIV));

static char const lcmd_var_name_HEMABATTERY___2092_GT[] = "__2092_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2092_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2092_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2092_GT));

static char const lcmd_var_name_HEMABATTERY___2096_TO_UINT[] = "__2096_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2096_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2096_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2096_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___2101_OR[] = "__2101_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2101_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2101_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2101_OR));

static char const lcmd_var_name_HEMABATTERY___2103_AND[] = "__2103_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2103_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2103_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2103_AND));

static char const lcmd_var_name_HEMABATTERY___2110_OR[] = "__2110_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2110_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2110_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2110_OR));

static char const lcmd_var_name_HEMABATTERY___2154_NOT[] = "__2154_NOT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2154_NOT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2154_NOT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2154_NOT));

static char const lcmd_var_name_HEMABATTERY___2174_TO_UDINT[] = "__2174_TO_UDINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2174_TO_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2174_TO_UDINT, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2174_TO_UDINT));

static char const lcmd_var_name_HEMABATTERY___2185_SEL[] = "__2185_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2185_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2185_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2185_SEL));

static char const lcmd_var_name_HEMABATTERY___2201_TO_UDINT[] = "__2201_TO_UDINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2201_TO_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2201_TO_UDINT, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2201_TO_UDINT));

static char const lcmd_var_name_HEMABATTERY___223_OR[] = "__223_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___223_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___223_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___223_OR));

static char const lcmd_var_name_HEMABATTERY___2251_ABS[] = "__2251_ABS";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2251_ABS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2251_ABS, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2251_ABS));

static char const lcmd_var_name_HEMABATTERY___2255_MUX_USINT[] = "__2255_MUX_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2255_MUX_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2255_MUX_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2255_MUX_USINT));

static char const lcmd_var_name_HEMABATTERY___2322_OR[] = "__2322_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2322_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2322_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2322_OR));

static char const lcmd_var_name_HEMABATTERY___2358_AND[] = "__2358_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2358_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2358_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2358_AND));

static char const lcmd_var_name_HEMABATTERY___23_TO_UINT[] = "__23_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___23_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___23_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___23_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___243_NE[] = "__243_NE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___243_NE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___243_NE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___243_NE));

static char const lcmd_var_name_HEMABATTERY___246_LT[] = "__246_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___246_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___246_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___246_LT));

static char const lcmd_var_name_HEMABATTERY___2595_GE[] = "__2595_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2595_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2595_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2595_GE));

static char const lcmd_var_name_HEMABATTERY___259_OR[] = "__259_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___259_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___259_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___259_OR));

static char const lcmd_var_name_HEMABATTERY___2605_LE[] = "__2605_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2605_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2605_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2605_LE));

static char const lcmd_var_name_HEMABATTERY___2618_AND[] = "__2618_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2618_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2618_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2618_AND));

static char const lcmd_var_name_HEMABATTERY___2624_OR[] = "__2624_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2624_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2624_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2624_OR));

static char const lcmd_var_name_HEMABATTERY___2630_AND[] = "__2630_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___2630_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___2630_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___2630_AND));

static char const lcmd_var_name_HEMABATTERY___265_TO_REAL[] = "__265_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___265_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___265_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___265_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___276_SUB[] = "__276_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___276_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___276_SUB, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___276_SUB));

static char const lcmd_var_name_HEMABATTERY___277_ADD[] = "__277_ADD";
static RISMDStdVariable const lcmd_var_HEMABATTERY___277_ADD =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___277_ADD, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___277_ADD));

static char const lcmd_var_name_HEMABATTERY___279_GE[] = "__279_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___279_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___279_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___279_GE));

static char const lcmd_var_name_HEMABATTERY___286_LE[] = "__286_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___286_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___286_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___286_LE));

static char const lcmd_var_name_HEMABATTERY___288_GE[] = "__288_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___288_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___288_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___288_GE));

static char const lcmd_var_name_HEMABATTERY___303_EQ[] = "__303_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___303_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___303_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___303_EQ));

static char const lcmd_var_name_HEMABATTERY___3224_TO_TIME[] = "__3224_TO_TIME";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3224_TO_TIME =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3224_TO_TIME, &risMdType_TIME, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3224_TO_TIME));

static char const lcmd_var_name_HEMABATTERY___3225_DIV_TIME[] = "__3225_DIV_TIME";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3225_DIV_TIME =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3225_DIV_TIME, &risMdType_TIME, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3225_DIV_TIME));

static char const lcmd_var_name_HEMABATTERY___3227_AND[] = "__3227_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3227_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3227_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3227_AND));

static char const lcmd_var_name_HEMABATTERY___3228_GT[] = "__3228_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3228_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3228_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3228_GT));

static char const lcmd_var_name_HEMABATTERY___3229_ABS[] = "__3229_ABS";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3229_ABS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3229_ABS, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3229_ABS));

static char const lcmd_var_name_HEMABATTERY___3231_SUB[] = "__3231_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3231_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3231_SUB, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3231_SUB));

static char const lcmd_var_name_HEMABATTERY___3232_LT[] = "__3232_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3232_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3232_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3232_LT));

static char const lcmd_var_name_HEMABATTERY___3233_GT[] = "__3233_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3233_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3233_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3233_GT));

static char const lcmd_var_name_HEMABATTERY___3234_AND[] = "__3234_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3234_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3234_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3234_AND));

static char const lcmd_var_name_HEMABATTERY___3235_ABS[] = "__3235_ABS";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3235_ABS =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3235_ABS, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3235_ABS));

static char const lcmd_var_name_HEMABATTERY___3236_SUB[] = "__3236_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3236_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3236_SUB, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3236_SUB));

static char const lcmd_var_name_HEMABATTERY___3237_LT[] = "__3237_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___3237_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___3237_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___3237_LT));

static char const lcmd_var_name_HEMABATTERY___328_AND[] = "__328_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___328_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___328_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___328_AND));

static char const lcmd_var_name_HEMABATTERY___336_DIV[] = "__336_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___336_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___336_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___336_DIV));

static char const lcmd_var_name_HEMABATTERY___341_LT[] = "__341_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___341_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___341_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___341_LT));

static char const lcmd_var_name_HEMABATTERY___364_GE[] = "__364_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___364_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___364_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___364_GE));

static char const lcmd_var_name_HEMABATTERY___384_EQ[] = "__384_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___384_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___384_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___384_EQ));

static char const lcmd_var_name_HEMABATTERY___404_LE[] = "__404_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___404_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___404_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___404_LE));

static char const lcmd_var_name_HEMABATTERY___415_TO_UINT[] = "__415_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___415_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___415_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___415_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___419_TO_UINT[] = "__419_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___419_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___419_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___419_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___420_TO_UINT[] = "__420_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___420_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___420_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___420_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___421_TO_UINT[] = "__421_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___421_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___421_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___421_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___422_TO_UINT[] = "__422_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___422_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___422_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___422_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___423_TO_UINT[] = "__423_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___423_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___423_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___423_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___424_TO_UINT[] = "__424_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___424_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___424_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___424_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___425_TO_UINT[] = "__425_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___425_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___425_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___425_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___435_SEL[] = "__435_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___435_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___435_SEL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___435_SEL));

static char const lcmd_var_name_HEMABATTERY___43_DIV[] = "__43_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___43_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___43_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___43_DIV));

static char const lcmd_var_name_HEMABATTERY___459_DIV[] = "__459_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___459_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___459_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___459_DIV));

static char const lcmd_var_name_HEMABATTERY___479_MUL[] = "__479_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___479_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___479_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___479_MUL));

static char const lcmd_var_name_HEMABATTERY___502_MUL[] = "__502_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___502_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___502_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___502_MUL));

static char const lcmd_var_name_HEMABATTERY___509_DIV[] = "__509_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___509_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___509_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___509_DIV));

static char const lcmd_var_name_HEMABATTERY___510_NOT[] = "__510_NOT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___510_NOT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___510_NOT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___510_NOT));

static char const lcmd_var_name_HEMABATTERY___517_MUL[] = "__517_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___517_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___517_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___517_MUL));

static char const lcmd_var_name_HEMABATTERY___542_OR[] = "__542_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___542_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___542_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___542_OR));

static char const lcmd_var_name_HEMABATTERY___543_SEL[] = "__543_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___543_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___543_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___543_SEL));

static char const lcmd_var_name_HEMABATTERY___544_GE[] = "__544_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___544_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___544_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___544_GE));

static char const lcmd_var_name_HEMABATTERY___582_SUB[] = "__582_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___582_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___582_SUB, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___582_SUB));

static char const lcmd_var_name_HEMABATTERY___61_TO_USINT[] = "__61_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___61_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___61_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___61_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___64_MAX[] = "__64_MAX";
static RISMDStdVariable const lcmd_var_HEMABATTERY___64_MAX =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___64_MAX, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___64_MAX));

static char const lcmd_var_name_HEMABATTERY___657_GT[] = "__657_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___657_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___657_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___657_GT));

static char const lcmd_var_name_HEMABATTERY___659_SEL[] = "__659_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___659_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___659_SEL, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___659_SEL));

static char const lcmd_var_name_HEMABATTERY___672_AND[] = "__672_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___672_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___672_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___672_AND));

static char const lcmd_var_name_HEMABATTERY___733_TO_UDINT[] = "__733_TO_UDINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___733_TO_UDINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___733_TO_UDINT, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___733_TO_UDINT));

static char const lcmd_var_name_HEMABATTERY___73_TO_REAL[] = "__73_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___73_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___73_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___73_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___742_GT[] = "__742_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___742_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___742_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___742_GT));

static char const lcmd_var_name_HEMABATTERY___74_MUL[] = "__74_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___74_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___74_MUL, &risMdType_UDINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___74_MUL));

static char const lcmd_var_name_HEMABATTERY___753_LT[] = "__753_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___753_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___753_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___753_LT));

static char const lcmd_var_name_HEMABATTERY___755_GT[] = "__755_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___755_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___755_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___755_GT));

static char const lcmd_var_name_HEMABATTERY___757_GE[] = "__757_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___757_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___757_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___757_GE));

static char const lcmd_var_name_HEMABATTERY___75_DIV[] = "__75_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___75_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___75_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___75_DIV));

static char const lcmd_var_name_HEMABATTERY___765_TO_USINT[] = "__765_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___765_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___765_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___765_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___766_TO_USINT[] = "__766_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___766_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___766_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___766_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___778_DIV[] = "__778_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___778_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___778_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___778_DIV));

static char const lcmd_var_name_HEMABATTERY___77_MUL[] = "__77_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___77_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___77_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___77_MUL));

static char const lcmd_var_name_HEMABATTERY___793_EQ[] = "__793_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___793_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___793_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___793_EQ));

static char const lcmd_var_name_HEMABATTERY___803_LT[] = "__803_LT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___803_LT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___803_LT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___803_LT));

static char const lcmd_var_name_HEMABATTERY___816_DIV[] = "__816_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___816_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___816_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___816_DIV));

static char const lcmd_var_name_HEMABATTERY___833_OR[] = "__833_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___833_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___833_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___833_OR));

static char const lcmd_var_name_HEMABATTERY___838_MIN[] = "__838_MIN";
static RISMDStdVariable const lcmd_var_HEMABATTERY___838_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___838_MIN, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___838_MIN));

static char const lcmd_var_name_HEMABATTERY___850_EQ[] = "__850_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___850_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___850_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___850_EQ));

static char const lcmd_var_name_HEMABATTERY___859_EQ[] = "__859_EQ";
static RISMDStdVariable const lcmd_var_HEMABATTERY___859_EQ =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___859_EQ, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___859_EQ));

static char const lcmd_var_name_HEMABATTERY___861_SEL[] = "__861_SEL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___861_SEL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___861_SEL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___861_SEL));

static char const lcmd_var_name_HEMABATTERY___868_MIN[] = "__868_MIN";
static RISMDStdVariable const lcmd_var_HEMABATTERY___868_MIN =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___868_MIN, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___868_MIN));

static char const lcmd_var_name_HEMABATTERY___869_TO_UINT[] = "__869_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___869_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___869_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___869_TO_UINT));

static char const lcmd_var_name_HEMABATTERY___874_GE[] = "__874_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___874_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___874_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___874_GE));

static char const lcmd_var_name_HEMABATTERY___887_GE[] = "__887_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___887_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___887_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___887_GE));

static char const lcmd_var_name_HEMABATTERY___897_GE[] = "__897_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___897_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___897_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___897_GE));

static char const lcmd_var_name_HEMABATTERY___904_AND[] = "__904_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___904_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___904_AND, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___904_AND));

static char const lcmd_var_name_HEMABATTERY___906_OR[] = "__906_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___906_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___906_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___906_OR));

static char const lcmd_var_name_HEMABATTERY___908_OR[] = "__908_OR";
static RISMDStdVariable const lcmd_var_HEMABATTERY___908_OR =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___908_OR, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___908_OR));

static char const lcmd_var_name_HEMABATTERY___917_GE[] = "__917_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___917_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___917_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___917_GE));

static char const lcmd_var_name_HEMABATTERY___919_LE[] = "__919_LE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___919_LE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___919_LE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___919_LE));

static char const lcmd_var_name_HEMABATTERY___91_MUX_USINT[] = "__91_MUX_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___91_MUX_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___91_MUX_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___91_MUX_USINT));

static char const lcmd_var_name_HEMABATTERY___920_GE[] = "__920_GE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___920_GE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___920_GE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___920_GE));

static char const lcmd_var_name_HEMABATTERY___926_GT[] = "__926_GT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___926_GT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___926_GT, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___926_GT));

static char const lcmd_var_name_HEMABATTERY___932_NE[] = "__932_NE";
static RISMDStdVariable const lcmd_var_HEMABATTERY___932_NE =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___932_NE, &risMdType_BOOL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___932_NE));

static char const lcmd_var_name_HEMABATTERY___933_TO_USINT[] = "__933_TO_USINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___933_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___933_TO_USINT, &risMdType_USINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___933_TO_USINT));

static char const lcmd_var_name_HEMABATTERY___934_AND[] = "__934_AND";
static RISMDStdVariable const lcmd_var_HEMABATTERY___934_AND =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___934_AND, &risMdType_DWORD, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___934_AND));

static char const lcmd_var_name_HEMABATTERY___944_SUB[] = "__944_SUB";
static RISMDStdVariable const lcmd_var_HEMABATTERY___944_SUB =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___944_SUB, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___944_SUB));

static char const lcmd_var_name_HEMABATTERY___958_MUL[] = "__958_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___958_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___958_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___958_MUL));

static char const lcmd_var_name_HEMABATTERY___959_DIV[] = "__959_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___959_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___959_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___959_DIV));

static char const lcmd_var_name_HEMABATTERY___962_TO_REAL[] = "__962_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___962_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___962_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___962_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___971_MUL[] = "__971_MUL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___971_MUL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___971_MUL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___971_MUL));

static char const lcmd_var_name_HEMABATTERY___972_TO_REAL[] = "__972_TO_REAL";
static RISMDStdVariable const lcmd_var_HEMABATTERY___972_TO_REAL =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___972_TO_REAL, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___972_TO_REAL));

static char const lcmd_var_name_HEMABATTERY___975_DIV[] = "__975_DIV";
static RISMDStdVariable const lcmd_var_HEMABATTERY___975_DIV =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___975_DIV, &risMdType_REAL, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___975_DIV));

static char const lcmd_var_name_HEMABATTERY___998_TO_UINT[] = "__998_TO_UINT";
static RISMDStdVariable const lcmd_var_HEMABATTERY___998_TO_UINT =
INIT_RISMDStdVariable(lcmd_var_name_HEMABATTERY___998_TO_UINT, &risMdType_UINT, offsetof(LC_TD_Program_HEMABATTERY,LC_VD___998_TO_UINT));

static RISMDReference const lcmd_var_list_HEMABATTERY[] =
{
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ADDRBIT0),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ADDRBIT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ALLCONTACSTENABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTTEMP1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTTEMP2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTTEMPDIS1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTTEMPDIS2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTVOLTCHAR1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AMPMULTVOLTDISC1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG14),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ANLG8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_AN_KL15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ARR2VAL2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCEDIFF_THRESHOLD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCESTATEENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCE_ENABLE_RQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCE_ISZ1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCE_REGISTER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALANCE_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BALCHARGEST),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATEPCSALARM),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYCHARGING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYCURRENT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYDISCHARGING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYID),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYINCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYVOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTERYWATT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTSTACK1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BATTSTACK_DISABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_BATTERY_STATUS1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_CELL_STATUS1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_CHARGE_COMPLETE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_FAULT_CODES1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_FAULT_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_FAULT_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_ID1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_STATE_MESSAGE1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BCU_STATUS21),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BESSOPERATINGSTATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BESSSTATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BESSWORKINGMODE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMSDMCC_FINAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMSDMCC_MAIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMSDMDC_FINAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMS_STATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUCELLTEMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUCELLVOLT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUMAXCELLT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUMAXCELLV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUMINCELLT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BMUMINCELLV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BOARD_ERROR_MESSAGES),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BOARD_FAULT_MESSAGES),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER11),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER12),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER19),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER21),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER22),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER23),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_BUFFER9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_DISABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_02),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_03),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_04),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_05),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_06),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_FAULT_07),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_11),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_12),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_14),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_ID_16),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_TEST1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CAN_TEST2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLTEMP_MAXLIM),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLTEMP_MINLIM),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLTEMP_WARNINGOT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLTEMP_WARNINGUT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_BALTHRES),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_CHARGEOK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_CUTOFFHIGH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_CUTOFFLOW),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_DISCHARGEOK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_MAX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_MAXCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_MINDISCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_NOMINAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_WARNINGOV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELLVOLT_WARNINGUV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_CURRENT_NOMINAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_SERIES_CONNECTION),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MAX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MAX_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MAX_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MIN_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_TEMP_MIN_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_AVERAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MAX_CHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CELL_VOLTAGE_MIN_DISHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHANNELSELECT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHANNELSELECT2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEAMPENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGECMD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEINVOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEOFF),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEOK_VOLTAGE_PACK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEPROTECT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGESTATE1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGEUNITAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CHARGE_CURRENT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMDBCU),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMDTMT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_COUNTER_CURRENT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_CURRENT_SENSE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_CURRENT_SENSE_AMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_OVERALL_POWER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_POWER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_TEMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE1_VOLT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE2_VOLT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMD_VOLTAGE_SENSE_3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMS0VOLT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMS1VOLT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CMS_IVT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTENABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTENABLECHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTENABLECHARGE_BATT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTENABLE_BATT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTFBK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTFBKCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTFBKDISCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTNEGENABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CONTACTNEGENABLE_BATT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CTU1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CTU2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CURRENTPROTECTION),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_CYCLESPERSOH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DECREASECHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DECREASEDISCHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DGTIN3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DGTIN4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DGTIN8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DICHARGEOK_VOLTAGE_PACK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEAMPENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGECMD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEINVOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEOFF),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEPROTECT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGETERMINATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DISCHARGEUNITAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DOD_RATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_DUTY_CYCLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_EMERGENCYBTN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ENO),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_EPCSREQDATA),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_EPCS_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ESSSTATE11),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULTFORSTATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULTMDLBALT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULTSWORD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CAN_COMMUNICATION),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_OVER_TEMP_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_OVER_TEMP_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_OVER_VOLTAGE_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_TEMP_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_TEMP_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_CELL_UNDER_VOLTAGE_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_DMCC_EXCEED),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_DMDC_EXCEED),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_BMU),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_CHARGE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_CMS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_DISCHARGE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_HVIL_1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_HVIL_2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FAULT_PACK_NEGATIVE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FLASH1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FLASH3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FLASH4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FORCECHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FORCEDISCHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_FORCENEGATIVE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_F_TRIG1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_F_TRIG2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_F_TRIG3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_F_TRIG4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUI1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT11),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT12),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT14),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT16),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT17),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT18),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT19),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT20),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT21),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT22),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT23),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT24),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT25),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT26),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT27),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT28),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT6),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT7),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_INT9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUICFG_REAL1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_GUI_FAULT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HKM_DISCHARGECONTACT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HKM_DISCHARGEINVOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HVCU_CONFIG1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HVCU_CONTROL_STATE2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HVCU_STATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HVIL1_STATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HVIL2_STATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_HW_VERSION),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IGNITION),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IGNITION_KL15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IMDENABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INCREASECHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INCREASEDISCHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INPUTSGN1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INPUTSGN1STATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INPUTSGN2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INPUTSGN2STATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INPUTSGN3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_INSTANTPOWER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IORD1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IORD2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IORD3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IORD4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IORD5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR18),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR19),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR20),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR21),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR22),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR23),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR24),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR6),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR7),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_IOWR9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ISABELINIT1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ISOLATIONSTATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ISOOHMPERV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ISORN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_ISORP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_KWHCAPACITY),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAINCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MASTERID),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAXCHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAXCHARGEAMPRCFG),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAXDISCHARGEAMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAXDISCHARGEAMPRCFG),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MAX_MIN_VOLTAGE_STATUS1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MEASURE_ALL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MEASURE_AUX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MULTAMPCHAR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_MULTAMPDISCH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NEWBMU_RESET),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NEW_CHG_CONTACT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NEW_CONTACTFBK1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NEW_CONTACTFBK2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NEW_DCHG_CONTACT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NTC2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NTCBETA),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_BMU),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_BMU_CFG),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_CELL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_MAXCELL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_MAXCELL2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMBER_OF_PARALLEL_CELL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMOFCELLS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_NUMOFCELLS1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OCFAULTAMPR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OCWARNINGAMPR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OC_FAULT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OC_WARNING),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OT_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OT_DANGER_RISK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OUTPUTSGN1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OUTPUTSGN2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OUTPUTVOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OV_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OV_DANGER_RISK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_OV_FAULT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACKREMCAP_KWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_CHARGE_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_CUTOFFHIGH_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_CUTOFFLOW_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_CUTOFFV_LOW),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_DISCHARGE_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_DMCC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_DMDC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PACK_TEMPERATURE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PDUCAN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PDULED),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGEBOARDERR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGECAN1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGECANERR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGECOMPLETECHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGEENABLE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGEENABLECHARGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGEERROR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGEINTERVAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_PRECHARGESTATUS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_RDY_TO_SLEEP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_R_TRIG2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_R_TRIG3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_R_TRIG8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_R_TRIG9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SAFETY_POWER1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SELCLOCK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SELECTED_BMU_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SELECTED_CELL_LOC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SELECTED_PACK_NUMBER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SELECTLASTONE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SHUTDOWNCMD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SHUTDOWNCOMPLETE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SHUTDOWNENB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SIM100NOTFOUND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SIM100_ERRBYTE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SLAVEMODE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOCCHCOMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOCDCHCOMP),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOCISZ1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOCREAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOC_CC),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SOH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SR1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SR2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_SR5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TAUXCELLS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER16),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER19),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER20),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER6),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TBUFFER7),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TESTREMWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TESTSOCSTATE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TESTVALUE0),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF12),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF14),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF15),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF3),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF6),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF7),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOF9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON10),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON11),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON12),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON13),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON16),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON17),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON18),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON19),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON21),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON22),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON26),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON27),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON4),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON5),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON6),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON7),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON8),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TON9),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_TOTAL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UPDOWNCNTTIM1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UPDOWNCNTTIM2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_USABLECAPKWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_USABLECAPWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_USABLEREMKWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_USABLEREMWH),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UT_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UT_DANGER_RISK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UV_DANGER),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UV_DANGER_RISK),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_UV_FAULT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_VOLTSAMPLE1),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_VOLTSAMPLE2),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_WARNINGMDLBALT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_WHCAPACITY),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY_WHINSTANT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1002_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1016_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1073_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1079_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1082_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1083_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1092_NE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1109_NE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1139_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1169_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1172_TO_TIME),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1176_DIV_TIME),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1184_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1194_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1195_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1201_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1213_TO_DWORD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1215_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1226_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1227_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1229_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1233_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1239_TO_BOOL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1243_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1258_ABS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1259_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1274_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1278_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1282_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1283_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1291_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1296_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1300_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1304_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1313_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1315_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1319_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1324_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___132_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1352_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1353_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1367_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1375_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1379_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1401_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1426_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1450_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1466_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1477_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1486_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1497_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1509_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1520_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1534_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1538_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1567_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1574_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1580_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1582_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1613_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1616_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1623_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1630_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1640_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1642_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1646_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1648_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1658_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1669_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1684_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1702_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1706_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1709_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1713_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1719_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1731_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1745_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___175_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1762_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1770_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1771_TO_INT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1772_TO_INT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1780_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1781_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1782_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1783_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1787_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1788_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1789_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1790_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1795_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1799_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1813_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1819_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1825_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1847_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1848_MAX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1864_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1872_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1880_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1887_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1889_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1957_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1958_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1978_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1981_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1985_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1990_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1993_LIMIT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___1995_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2011_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2028_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2030_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2056_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2073_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2077_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2092_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2096_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2101_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2103_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2110_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2154_NOT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2174_TO_UDINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2185_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2201_TO_UDINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___223_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2251_ABS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2255_MUX_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2322_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2358_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___23_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___243_NE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___246_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2595_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___259_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2605_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2618_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2624_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___2630_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___265_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___276_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___277_ADD),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___279_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___286_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___288_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___303_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3224_TO_TIME),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3225_DIV_TIME),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3227_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3228_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3229_ABS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3231_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3232_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3233_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3234_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3235_ABS),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3236_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___3237_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___328_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___336_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___341_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___364_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___384_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___404_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___415_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___419_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___420_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___421_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___422_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___423_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___424_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___425_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___435_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___43_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___459_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___479_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___502_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___509_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___510_NOT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___517_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___542_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___543_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___544_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___582_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___61_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___64_MAX),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___657_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___659_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___672_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___733_TO_UDINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___73_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___742_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___74_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___753_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___755_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___757_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___75_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___765_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___766_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___778_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___77_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___793_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___803_LT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___816_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___833_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___838_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___850_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___859_EQ),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___861_SEL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___868_MIN),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___869_TO_UINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___874_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___887_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___897_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___904_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___906_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___908_OR),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___917_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___919_LE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___91_MUX_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___920_GE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___926_GT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___932_NE),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___933_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___934_AND),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___944_SUB),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___958_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___959_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___962_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___971_MUL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___972_TO_REAL),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___975_DIV),
  INIT_RISMDReference(&lcmd_var_HEMABATTERY___998_TO_UINT),
};

static char const lcmd_type_name_HEMABATTERY[] = "HEMABATTERY";
RISMDPOUType const lcmd_type_HEMABATTERY = INIT_RISMDPOUType(lcmd_type_name_HEMABATTERY, sizeof(LC_TD_Program_HEMABATTERY), 676, lcmd_var_list_HEMABATTERY);
