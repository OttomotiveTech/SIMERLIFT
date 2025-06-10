#include <RISMD.h>
#include <lcfu___balance_isz.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BALANCE_ISZ_AVARAGE_CELL_VOLTAGE[] = "Avarage_Cell_Voltage";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_AVARAGE_CELL_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_AVARAGE_CELL_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_AVARAGE_CELL_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BALANCE_ISZ_BALANCE_ENABLE[] = "Balance_Enable";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_BALANCE_ENABLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_BALANCE_ENABLE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_BALANCE_ENABLE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BALANCE_ISZ_BALANCE_THRESHOLD[] = "Balance_Threshold";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_BALANCE_THRESHOLD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_BALANCE_THRESHOLD, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_BALANCE_THRESHOLD), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_BALANCE_ISZ_BALLANCE_INTERVAL[] = "Ballance_Interval";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_BALLANCE_INTERVAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_BALLANCE_INTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_BALLANCE_INTERVAL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BALANCE_ISZ_BALLANCE_PENDING[] = "Ballance_Pending";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_BALLANCE_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_BALLANCE_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_BALLANCE_PENDING));

static char const lcmd_var_name_BALANCE_ISZ_BALLANCE_VOLTAGE[] = "Ballance_Voltage";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_BALLANCE_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_BALLANCE_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_BALLANCE_VOLTAGE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BALANCE_ISZ_CHARGE_STATUS[] = "Charge_Status";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_CHARGE_STATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_CHARGE_STATUS, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_CHARGE_STATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BALANCE_ISZ_DIFFERENCE_TOLERANCE[] = "Difference_Tolerance";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_DIFFERENCE_TOLERANCE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_DIFFERENCE_TOLERANCE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_DIFFERENCE_TOLERANCE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BALANCE_ISZ_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_BALANCE_ISZ_FLASH1[] = "FLASH1";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_FLASH1 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_FLASH1, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_FLASH1));

static char const lcmd_var_name_BALANCE_ISZ_FLASH2[] = "FLASH2";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_FLASH2 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_FLASH2, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_FLASH2));

static char const lcmd_var_name_BALANCE_ISZ_MAXVOLT[] = "maxVolt";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_MAXVOLT =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_MAXVOLT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MAXVOLT));

static char const lcmd_var_name_BALANCE_ISZ_MAX_CELL_VOLTAGE[] = "Max_Cell_Voltage";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_MAX_CELL_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_MAX_CELL_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MAX_CELL_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BALANCE_ISZ_MEASURE_ALL[] = "Measure_All";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_MEASURE_ALL =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_MEASURE_ALL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MEASURE_ALL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BALANCE_ISZ_MEASURE_AUX[] = "Measure_Aux";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_MEASURE_AUX =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_MEASURE_AUX, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MEASURE_AUX), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BALANCE_ISZ_MEAS_PERIOD[] = "Meas_Period";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_MEAS_PERIOD =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_MEAS_PERIOD, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MEAS_PERIOD));

static char const lcmd_var_name_BALANCE_ISZ_MINVOLT[] = "minVolt";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_MINVOLT =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_MINVOLT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MINVOLT));

static char const lcmd_var_name_BALANCE_ISZ_MIN_CELL_VOLTAGE[] = "Min_Cell_Voltage";
static RISMDInterfaceVariable const lcmd_var_BALANCE_ISZ_MIN_CELL_VOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BALANCE_ISZ_MIN_CELL_VOLTAGE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_MIN_CELL_VOLTAGE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_RS;
static char const lcmd_var_name_BALANCE_ISZ_RS3[] = "RS3";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_RS3 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_RS3, &lcmd_type_RS, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_RS3));

extern RISMDPOUType const lcmd_type_R_TRIG;
static char const lcmd_var_name_BALANCE_ISZ_R_TRIG5[] = "R_TRIG5";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_R_TRIG5 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_R_TRIG5, &lcmd_type_R_TRIG, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_R_TRIG5));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_BALANCE_ISZ_TON4[] = "TON4";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_TON4 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_TON4, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_TON4));

extern RISMDPOUType const lcmd_type_TP;
static char const lcmd_var_name_BALANCE_ISZ_TP3[] = "TP3";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ_TP3 =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ_TP3, &lcmd_type_TP, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD_TP3));

static char const lcmd_var_name_BALANCE_ISZ___11_AND[] = "__11_AND";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___11_AND =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___11_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___11_AND));

static char const lcmd_var_name_BALANCE_ISZ___20_SUB[] = "__20_SUB";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___20_SUB =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___20_SUB, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___20_SUB));

static char const lcmd_var_name_BALANCE_ISZ___29_GE[] = "__29_GE";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___29_GE =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___29_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___29_GE));

static char const lcmd_var_name_BALANCE_ISZ___33_SEL[] = "__33_SEL";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___33_SEL =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___33_SEL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___33_SEL));

static char const lcmd_var_name_BALANCE_ISZ___41_GE[] = "__41_GE";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___41_GE =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___41_GE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___41_GE));

static char const lcmd_var_name_BALANCE_ISZ___45_GT[] = "__45_GT";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___45_GT =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___45_GT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___45_GT));

static char const lcmd_var_name_BALANCE_ISZ___4_ADD[] = "__4_ADD";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___4_ADD =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___4_ADD, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___4_ADD));

static char const lcmd_var_name_BALANCE_ISZ___50_MUL_TIME[] = "__50_MUL_TIME";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___50_MUL_TIME =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___50_MUL_TIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___50_MUL_TIME));

static char const lcmd_var_name_BALANCE_ISZ___54_ADD[] = "__54_ADD";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___54_ADD =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___54_ADD, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___54_ADD));

static char const lcmd_var_name_BALANCE_ISZ___8_AND[] = "__8_AND";
static RISMDStdVariable const lcmd_var_BALANCE_ISZ___8_AND =
INIT_RISMDStdVariable(lcmd_var_name_BALANCE_ISZ___8_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BALANCE_ISZ,LC_VD___8_AND));

static RISMDReference const lcmd_var_list_BALANCE_ISZ[] =
{
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_AVARAGE_CELL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_BALANCE_ENABLE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_BALANCE_THRESHOLD),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_BALLANCE_INTERVAL),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_BALLANCE_PENDING),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_BALLANCE_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_CHARGE_STATUS),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_DIFFERENCE_TOLERANCE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_ENO),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_FLASH1),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_FLASH2),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MAXVOLT),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MAX_CELL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MEASURE_ALL),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MEASURE_AUX),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MEAS_PERIOD),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MINVOLT),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_MIN_CELL_VOLTAGE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_RS3),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_R_TRIG5),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_TON4),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ_TP3),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___11_AND),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___20_SUB),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___29_GE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___33_SEL),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___41_GE),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___45_GT),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___4_ADD),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___50_MUL_TIME),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___54_ADD),
  INIT_RISMDReference(&lcmd_var_BALANCE_ISZ___8_AND),
};

static char const lcmd_type_name_BALANCE_ISZ[] = "BALANCE_ISZ";
RISMDPOUType const lcmd_type_BALANCE_ISZ = INIT_RISMDPOUType(lcmd_type_name_BALANCE_ISZ, sizeof(LC_TD_FunctionBlock_BALANCE_ISZ), 32, lcmd_var_list_BALANCE_ISZ);
