#include <RISMD.h>
#include <lcfu___wbits.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBITS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBITS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBITS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBITS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_WBITS_LEN[] = "len";
static RISMDInterfaceVariable const lcmd_var_WBITS_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBITS_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_WBITS,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_WBITS_OUT[] = "out";
static RISMDInterfaceVariable const lcmd_var_WBITS_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBITS_OUT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_WBITS,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_ULINT;
static char const lcmd_var_name_WBITS_PRM[] = "prm";
static RISMDInterfaceVariable const lcmd_var_WBITS_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBITS_PRM, &risMdType_ULINT, offsetof(LC_TD_FunctionBlock_WBITS,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WBITS_START[] = "start";
static RISMDInterfaceVariable const lcmd_var_WBITS_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBITS_START, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_WBITS,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WBITS[] =
{
  INIT_RISMDReference(&lcmd_var_WBITS_ENO),
  INIT_RISMDReference(&lcmd_var_WBITS_LEN),
  INIT_RISMDReference(&lcmd_var_WBITS_OUT),
  INIT_RISMDReference(&lcmd_var_WBITS_PRM),
  INIT_RISMDReference(&lcmd_var_WBITS_START),
};

static char const lcmd_type_name_WBITS[] = "WBITS";
RISMDPOUType const lcmd_type_WBITS = INIT_RISMDPOUType(lcmd_type_name_WBITS, sizeof(LC_TD_FunctionBlock_WBITS), 5, lcmd_var_list_WBITS);
