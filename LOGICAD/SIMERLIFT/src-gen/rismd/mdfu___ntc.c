#include <RISMD.h>
#include <lcfu___ntc.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_NTC_BETA[] = "BETA";
static RISMDInterfaceVariable const lcmd_var_NTC_BETA =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_BETA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_BETA), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_NTC_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_NTC_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_NTC_RNOM[] = "RNOM";
static RISMDInterfaceVariable const lcmd_var_NTC_RNOM =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_RNOM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_RNOM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_NTC_RS[] = "RS";
static RISMDInterfaceVariable const lcmd_var_NTC_RS =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_RS, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_RS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_NTC_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_NTC_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_TEMP), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_NTC_TNOM[] = "TNOM";
static RISMDInterfaceVariable const lcmd_var_NTC_TNOM =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_TNOM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_TNOM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_NTC_VOLT[] = "VOLT";
static RISMDInterfaceVariable const lcmd_var_NTC_VOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_VOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_VOLT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_NTC_VSUP[] = "VSUP";
static RISMDInterfaceVariable const lcmd_var_NTC_VSUP =
INIT_RISMDInterfaceVariable(lcmd_var_name_NTC_VSUP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_NTC,LC_VD_VSUP), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_NTC[] =
{
  INIT_RISMDReference(&lcmd_var_NTC_BETA),
  INIT_RISMDReference(&lcmd_var_NTC_ENO),
  INIT_RISMDReference(&lcmd_var_NTC_RNOM),
  INIT_RISMDReference(&lcmd_var_NTC_RS),
  INIT_RISMDReference(&lcmd_var_NTC_TEMP),
  INIT_RISMDReference(&lcmd_var_NTC_TNOM),
  INIT_RISMDReference(&lcmd_var_NTC_VOLT),
  INIT_RISMDReference(&lcmd_var_NTC_VSUP),
};

static char const lcmd_type_name_NTC[] = "NTC";
RISMDPOUType const lcmd_type_NTC = INIT_RISMDPOUType(lcmd_type_name_NTC, sizeof(LC_TD_FunctionBlock_NTC), 8, lcmd_var_list_NTC);
