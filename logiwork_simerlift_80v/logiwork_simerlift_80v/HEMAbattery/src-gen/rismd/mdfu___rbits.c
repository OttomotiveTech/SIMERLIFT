#include <RISMD.h>
#include <lcfu___rbits.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBITS_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBITS_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBITS_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBITS,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_RBITS_IN[] = "in";
static RISMDInterfaceVariable const lcmd_var_RBITS_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBITS_IN, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_RBITS,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_RBITS_LEN[] = "len";
static RISMDInterfaceVariable const lcmd_var_RBITS_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBITS_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_RBITS,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RBITS_OUT[] = "out";
static RISMDInterfaceVariable const lcmd_var_RBITS_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBITS_OUT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_RBITS,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RBITS_START[] = "start";
static RISMDInterfaceVariable const lcmd_var_RBITS_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBITS_START, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_RBITS,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_RBITS[] =
{
  INIT_RISMDReference(&lcmd_var_RBITS_ENO),
  INIT_RISMDReference(&lcmd_var_RBITS_IN),
  INIT_RISMDReference(&lcmd_var_RBITS_LEN),
  INIT_RISMDReference(&lcmd_var_RBITS_OUT),
  INIT_RISMDReference(&lcmd_var_RBITS_START),
};

static char const lcmd_type_name_RBITS[] = "RBITS";
RISMDPOUType const lcmd_type_RBITS = INIT_RISMDPOUType(lcmd_type_name_RBITS, sizeof(LC_TD_FunctionBlock_RBITS), 5, lcmd_var_list_RBITS);
