#include <RISMD.h>
#include <lcfu___chargemax.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_CHARGEMAX_A[] = "A";
static RISMDInterfaceVariable const lcmd_var_CHARGEMAX_A =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGEMAX_A, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGEMAX,LC_VD_A), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_CHARGEMAX_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_CHARGEMAX_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGEMAX_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_CHARGEMAX,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_CHARGEMAX_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_CHARGEMAX_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGEMAX_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGEMAX,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_CHARGEMAX_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_CHARGEMAX_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_CHARGEMAX_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_CHARGEMAX,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_CHARGEMAX[] =
{
  INIT_RISMDReference(&lcmd_var_CHARGEMAX_A),
  INIT_RISMDReference(&lcmd_var_CHARGEMAX_ENO),
  INIT_RISMDReference(&lcmd_var_CHARGEMAX_SOC),
  INIT_RISMDReference(&lcmd_var_CHARGEMAX_TEMP),
};

static char const lcmd_type_name_CHARGEMAX[] = "CHARGEMAX";
RISMDPOUType const lcmd_type_CHARGEMAX = INIT_RISMDPOUType(lcmd_type_name_CHARGEMAX, sizeof(LC_TD_FunctionBlock_CHARGEMAX), 4, lcmd_var_list_CHARGEMAX);
