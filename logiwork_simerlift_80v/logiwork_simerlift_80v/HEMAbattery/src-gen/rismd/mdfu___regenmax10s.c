#include <RISMD.h>
#include <lcfu___regenmax10s.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_REGENMAX10S_A[] = "A";
static RISMDInterfaceVariable const lcmd_var_REGENMAX10S_A =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX10S_A, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX10S,LC_VD_A), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_REGENMAX10S_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_REGENMAX10S_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX10S_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_REGENMAX10S,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_REGENMAX10S_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_REGENMAX10S_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX10S_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX10S,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REGENMAX10S_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_REGENMAX10S_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_REGENMAX10S_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REGENMAX10S,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_REGENMAX10S[] =
{
  INIT_RISMDReference(&lcmd_var_REGENMAX10S_A),
  INIT_RISMDReference(&lcmd_var_REGENMAX10S_ENO),
  INIT_RISMDReference(&lcmd_var_REGENMAX10S_SOC),
  INIT_RISMDReference(&lcmd_var_REGENMAX10S_TEMP),
};

static char const lcmd_type_name_REGENMAX10S[] = "REGENMAX10S";
RISMDPOUType const lcmd_type_REGENMAX10S = INIT_RISMDPOUType(lcmd_type_name_REGENMAX10S, sizeof(LC_TD_FunctionBlock_REGENMAX10S), 4, lcmd_var_list_REGENMAX10S);
