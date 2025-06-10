#include <RISMD.h>
#include <lcfu___wprm.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WPRM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WPRM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_WPRM_LEN[] = "len";
static RISMDInterfaceVariable const lcmd_var_WPRM_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_WPRM_OFS[] = "ofs";
static RISMDInterfaceVariable const lcmd_var_WPRM_OFS =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_OFS, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_OFS), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_WPRM_OUT[] = "out";
static RISMDInterfaceVariable const lcmd_var_WPRM_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_OUT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WPRM_PRM[] = "prm";
static RISMDInterfaceVariable const lcmd_var_WPRM_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_PRM, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WPRM_RES[] = "res";
static RISMDInterfaceVariable const lcmd_var_WPRM_RES =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_RES, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_RES), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WPRM_START[] = "start";
static RISMDInterfaceVariable const lcmd_var_WPRM_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_WPRM_START, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_WPRM,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WPRM[] =
{
  INIT_RISMDReference(&lcmd_var_WPRM_ENO),
  INIT_RISMDReference(&lcmd_var_WPRM_LEN),
  INIT_RISMDReference(&lcmd_var_WPRM_OFS),
  INIT_RISMDReference(&lcmd_var_WPRM_OUT),
  INIT_RISMDReference(&lcmd_var_WPRM_PRM),
  INIT_RISMDReference(&lcmd_var_WPRM_RES),
  INIT_RISMDReference(&lcmd_var_WPRM_START),
};

static char const lcmd_type_name_WPRM[] = "WPRM";
RISMDPOUType const lcmd_type_WPRM = INIT_RISMDPOUType(lcmd_type_name_WPRM, sizeof(LC_TD_FunctionBlock_WPRM), 7, lcmd_var_list_WPRM);
