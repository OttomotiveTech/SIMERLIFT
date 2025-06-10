#include <RISMD.h>
#include <lcfu___regenmax.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_REGENMAX_A[] = "A";
static RISMDInterfaceVariable const lcmd_var_REGENMAX_A =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX_A, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX,LC_VD_A), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_REGENMAX_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_REGENMAX_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_REGENMAX,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_REGENMAX_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_REGENMAX_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REGENMAX_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_REGENMAX_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_REGENMAX[] =
{
  INIT_RISMDReference(&lcmd_var_REGENMAX_A),
  INIT_RISMDReference(&lcmd_var_REGENMAX_ENO),
  INIT_RISMDReference(&lcmd_var_REGENMAX_SOC),
  INIT_RISMDReference(&lcmd_var_REGENMAX_TEMP),
};

static char const lcmd_type_name_REGENMAX[] = "REGENMAX";
RISMDPOUType const lcmd_type_REGENMAX = INIT_RISMDPOUType(lcmd_type_name_REGENMAX, sizeof(LC_TD_FunctionBlock_REGENMAX), 4, lcmd_var_list_REGENMAX);
