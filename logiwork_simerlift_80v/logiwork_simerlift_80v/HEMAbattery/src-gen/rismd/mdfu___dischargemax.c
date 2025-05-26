#include <RISMD.h>
#include <lcfu___dischargemax.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_DISCHARGEMAX_A[] = "A";
static RISMDInterfaceVariable const lcmd_var_DISCHARGEMAX_A =
INIT_RISMDInterfaceVariable(lcmd_var_name_DISCHARGEMAX_A, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_DISCHARGEMAX,LC_VD_A), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_DISCHARGEMAX_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_DISCHARGEMAX_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_DISCHARGEMAX_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_DISCHARGEMAX,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_DISCHARGEMAX_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_DISCHARGEMAX_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_DISCHARGEMAX_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_DISCHARGEMAX,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_DISCHARGEMAX_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_DISCHARGEMAX_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_DISCHARGEMAX_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_DISCHARGEMAX,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_DISCHARGEMAX[] =
{
  INIT_RISMDReference(&lcmd_var_DISCHARGEMAX_A),
  INIT_RISMDReference(&lcmd_var_DISCHARGEMAX_ENO),
  INIT_RISMDReference(&lcmd_var_DISCHARGEMAX_SOC),
  INIT_RISMDReference(&lcmd_var_DISCHARGEMAX_TEMP),
};

static char const lcmd_type_name_DISCHARGEMAX[] = "DISCHARGEMAX";
RISMDPOUType const lcmd_type_DISCHARGEMAX = INIT_RISMDPOUType(lcmd_type_name_DISCHARGEMAX, sizeof(LC_TD_FunctionBlock_DISCHARGEMAX), 4, lcmd_var_list_DISCHARGEMAX);
