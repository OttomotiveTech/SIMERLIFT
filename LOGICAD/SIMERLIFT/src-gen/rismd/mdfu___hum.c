#include <RISMD.h>
#include <lcfu___hum.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HUM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HUM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HUM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HUM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_HUM_HUM[] = "HUM";
static RISMDInterfaceVariable const lcmd_var_HUM_HUM =
INIT_RISMDInterfaceVariable(lcmd_var_name_HUM_HUM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_HUM,LC_VD_HUM), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HUM_TEMP[] = "TEMP";
static RISMDInterfaceVariable const lcmd_var_HUM_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_HUM_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_HUM,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_HUM_VOLT[] = "VOLT";
static RISMDInterfaceVariable const lcmd_var_HUM_VOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_HUM_VOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_HUM,LC_VD_VOLT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_HUM[] =
{
  INIT_RISMDReference(&lcmd_var_HUM_ENO),
  INIT_RISMDReference(&lcmd_var_HUM_HUM),
  INIT_RISMDReference(&lcmd_var_HUM_TEMP),
  INIT_RISMDReference(&lcmd_var_HUM_VOLT),
};

static char const lcmd_type_name_HUM[] = "HUM";
RISMDPOUType const lcmd_type_HUM = INIT_RISMDPOUType(lcmd_type_name_HUM, sizeof(LC_TD_FunctionBlock_HUM), 4, lcmd_var_list_HUM);
