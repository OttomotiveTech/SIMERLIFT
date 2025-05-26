#include <RISMD.h>
#include <lcfu___safety_power.h>

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_SAFETY_POWER_DEV_STATE[] = "DEV_STATE";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_DEV_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_DEV_STATE, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_DEV_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SAFETY_POWER_DRV_STAT[] = "DRV_STAT";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_DRV_STAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_DRV_STAT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_DRV_STAT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SAFETY_POWER_ENDRV[] = "ENDRV";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_ENDRV =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_ENDRV, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_ENDRV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SAFETY_POWER_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SAFETY_POWER_EN_VSOUT1[] = "EN_VSOUT1";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_EN_VSOUT1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_EN_VSOUT1, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_EN_VSOUT1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SAFETY_POWER_SLEEP_RDY[] = "SLEEP_RDY";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_SLEEP_RDY =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_SLEEP_RDY, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_SLEEP_RDY), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SAFETY_POWER_VSOUT1_STAT[] = "VSOUT1_STAT";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_VSOUT1_STAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_VSOUT1_STAT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_VSOUT1_STAT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SAFETY_POWER_WD_FAIL[] = "WD_FAIL";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_WD_FAIL =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_WD_FAIL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_WD_FAIL), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_SAFETY_POWER_WD_PER[] = "WD_PER";
static RISMDInterfaceVariable const lcmd_var_SAFETY_POWER_WD_PER =
INIT_RISMDInterfaceVariable(lcmd_var_name_SAFETY_POWER_WD_PER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_SAFETY_POWER,LC_VD_WD_PER), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_SAFETY_POWER[] =
{
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_DEV_STATE),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_DRV_STAT),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_ENDRV),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_ENO),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_EN_VSOUT1),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_SLEEP_RDY),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_VSOUT1_STAT),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_WD_FAIL),
  INIT_RISMDReference(&lcmd_var_SAFETY_POWER_WD_PER),
};

static char const lcmd_type_name_SAFETY_POWER[] = "SAFETY_POWER";
RISMDPOUType const lcmd_type_SAFETY_POWER = INIT_RISMDPOUType(lcmd_type_name_SAFETY_POWER, sizeof(LC_TD_FunctionBlock_SAFETY_POWER), 9, lcmd_var_list_SAFETY_POWER);
