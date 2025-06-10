#include <RISMD.h>
#include <lcfu___bcu_battery_status.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BCU_BATTERY_STATUS_AVAILABLE_ENERGY[] = "Available_Energy";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_AVAILABLE_ENERGY =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_AVAILABLE_ENERGY, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_AVAILABLE_ENERGY), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_BATTERY_STATUS_CANSEND4[] = "CANSEND4";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS_CANSEND4 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS_CANSEND4, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_CANSEND4));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_BATTERY_STATUS_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_BATTERY_STATUS_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_BATTERY_STATUS_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BCU_BATTERY_STATUS_DUTY_CYCLE[] = "Duty_Cycle";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_DUTY_CYCLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_DUTY_CYCLE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_DUTY_CYCLE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_BATTERY_STATUS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_BATTERY_STATUS_REMAIN_ENERGY[] = "Remain_Energy";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_REMAIN_ENERGY =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_REMAIN_ENERGY, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_REMAIN_ENERGY), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BCU_BATTERY_STATUS_SOC[] = "SoC";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_BATTERY_STATUS_SOH[] = "SoH";
static RISMDInterfaceVariable const lcmd_var_BCU_BATTERY_STATUS_SOH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_BATTERY_STATUS_SOH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD_SOH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BCU_BATTERY_STATUS___10_OUTBIT[] = "__10_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___10_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___10_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___10_OUTBIT));

static char const lcmd_var_name_BCU_BATTERY_STATUS___12_OR[] = "__12_OR";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___12_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___12_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___12_OR));

static char const lcmd_var_name_BCU_BATTERY_STATUS___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___14_OUTBIT));

static char const lcmd_var_name_BCU_BATTERY_STATUS___15_OUTBIT[] = "__15_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___15_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___15_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___15_OUTBIT));

static char const lcmd_var_name_BCU_BATTERY_STATUS___24_TO_LWORD[] = "__24_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___24_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___24_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___24_TO_LWORD));

static char const lcmd_var_name_BCU_BATTERY_STATUS___2_OUTBIT[] = "__2_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___2_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___2_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___2_OUTBIT));

static char const lcmd_var_name_BCU_BATTERY_STATUS___31_TO_LWORD[] = "__31_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___31_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___31_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___31_TO_LWORD));

static char const lcmd_var_name_BCU_BATTERY_STATUS___32_TO_LWORD[] = "__32_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___32_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___32_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___32_TO_LWORD));

static char const lcmd_var_name_BCU_BATTERY_STATUS___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___64_NE));

static char const lcmd_var_name_BCU_BATTERY_STATUS___6_OUTBIT[] = "__6_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___6_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___6_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___6_OUTBIT));

static char const lcmd_var_name_BCU_BATTERY_STATUS___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_BCU_BATTERY_STATUS___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_BATTERY_STATUS___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS,LC_VD___95_NE));

static RISMDReference const lcmd_var_list_BCU_BATTERY_STATUS[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_AVAILABLE_ENERGY),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_CANSEND4),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_DUTY_CYCLE),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_REMAIN_ENERGY),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_SOC),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS_SOH),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___10_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___12_OR),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___15_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___24_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___2_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___31_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___32_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___6_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_BATTERY_STATUS___95_NE),
};

static char const lcmd_type_name_BCU_BATTERY_STATUS[] = "BCU_BATTERY_STATUS";
RISMDPOUType const lcmd_type_BCU_BATTERY_STATUS = INIT_RISMDPOUType(lcmd_type_name_BCU_BATTERY_STATUS, sizeof(LC_TD_FunctionBlock_BCU_BATTERY_STATUS), 21, lcmd_var_list_BCU_BATTERY_STATUS);
