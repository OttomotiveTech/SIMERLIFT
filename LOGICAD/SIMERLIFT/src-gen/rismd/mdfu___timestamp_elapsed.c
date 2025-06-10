#include <RISMD.h>
#include <lcfu___timestamp_elapsed.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_TIMESTAMP_ELAPSED_ELAPSED[] = "ELAPSED";
static RISMDInterfaceVariable const lcmd_var_TIMESTAMP_ELAPSED_ELAPSED =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMESTAMP_ELAPSED_ELAPSED, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED,LC_VD_ELAPSED), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_TIMESTAMP_ELAPSED_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_TIMESTAMP_ELAPSED_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMESTAMP_ELAPSED_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_TIMESTAMP_ELAPSED_START[] = "START";
static RISMDInterfaceVariable const lcmd_var_TIMESTAMP_ELAPSED_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_TIMESTAMP_ELAPSED_START, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_TIMESTAMP_ELAPSED[] =
{
  INIT_RISMDReference(&lcmd_var_TIMESTAMP_ELAPSED_ELAPSED),
  INIT_RISMDReference(&lcmd_var_TIMESTAMP_ELAPSED_ENO),
  INIT_RISMDReference(&lcmd_var_TIMESTAMP_ELAPSED_START),
};

static char const lcmd_type_name_TIMESTAMP_ELAPSED[] = "TIMESTAMP_ELAPSED";
RISMDPOUType const lcmd_type_TIMESTAMP_ELAPSED = INIT_RISMDPOUType(lcmd_type_name_TIMESTAMP_ELAPSED, sizeof(LC_TD_FunctionBlock_TIMESTAMP_ELAPSED), 3, lcmd_var_list_TIMESTAMP_ELAPSED);
