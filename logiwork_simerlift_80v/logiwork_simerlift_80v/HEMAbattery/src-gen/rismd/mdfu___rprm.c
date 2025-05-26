#include <RISMD.h>
#include <lcfu___rprm.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RPRM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RPRM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_RPRM_IN[] = "in";
static RISMDInterfaceVariable const lcmd_var_RPRM_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_IN, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_RPRM_LEN[] = "len";
static RISMDInterfaceVariable const lcmd_var_RPRM_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_RPRM_OFS[] = "ofs";
static RISMDInterfaceVariable const lcmd_var_RPRM_OFS =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_OFS, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_OFS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RPRM_OUT[] = "out";
static RISMDInterfaceVariable const lcmd_var_RPRM_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_OUT, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RPRM_RES[] = "res";
static RISMDInterfaceVariable const lcmd_var_RPRM_RES =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_RES, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_RES), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RPRM_START[] = "start";
static RISMDInterfaceVariable const lcmd_var_RPRM_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_RPRM_START, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_RPRM,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_RPRM[] =
{
  INIT_RISMDReference(&lcmd_var_RPRM_ENO),
  INIT_RISMDReference(&lcmd_var_RPRM_IN),
  INIT_RISMDReference(&lcmd_var_RPRM_LEN),
  INIT_RISMDReference(&lcmd_var_RPRM_OFS),
  INIT_RISMDReference(&lcmd_var_RPRM_OUT),
  INIT_RISMDReference(&lcmd_var_RPRM_RES),
  INIT_RISMDReference(&lcmd_var_RPRM_START),
};

static char const lcmd_type_name_RPRM[] = "RPRM";
RISMDPOUType const lcmd_type_RPRM = INIT_RISMDPOUType(lcmd_type_name_RPRM, sizeof(LC_TD_FunctionBlock_RPRM), 7, lcmd_var_list_RPRM);
