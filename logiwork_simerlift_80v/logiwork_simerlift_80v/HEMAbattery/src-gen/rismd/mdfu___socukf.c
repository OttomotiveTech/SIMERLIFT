#include <RISMD.h>
#include <lcfu___socukf.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_SOCUKF_AMP[] = "AMP";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_AMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_AMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_AMP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SOCUKF_ENB[] = "ENB";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_ENB =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_ENB, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_ENB), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCUKF_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCUKF_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_SOC, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_SOC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SOCUKF_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SOCUKF_VOLT[] = "VOLT";
static RISMDInterfaceVariable const lcmd_var_SOCUKF_VOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_SOCUKF_VOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_SOCUKF,LC_VD_VOLT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_SOCUKF[] =
{
  INIT_RISMDReference(&lcmd_var_SOCUKF_AMP),
  INIT_RISMDReference(&lcmd_var_SOCUKF_ENB),
  INIT_RISMDReference(&lcmd_var_SOCUKF_ENO),
  INIT_RISMDReference(&lcmd_var_SOCUKF_SOC),
  INIT_RISMDReference(&lcmd_var_SOCUKF_TEMP),
  INIT_RISMDReference(&lcmd_var_SOCUKF_VOLT),
};

static char const lcmd_type_name_SOCUKF[] = "SOCUKF";
RISMDPOUType const lcmd_type_SOCUKF = INIT_RISMDPOUType(lcmd_type_name_SOCUKF, sizeof(LC_TD_FunctionBlock_SOCUKF), 6, lcmd_var_list_SOCUKF);
