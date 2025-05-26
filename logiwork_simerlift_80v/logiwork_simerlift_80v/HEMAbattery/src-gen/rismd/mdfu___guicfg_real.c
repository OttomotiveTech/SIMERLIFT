#include <RISMD.h>
#include <lcfu___guicfg_real.h>

extern RISMDDerivedType const lcmd_type_GUICFGCODE;
static char const lcmd_var_name_GUICFG_REAL_CODE[] = "CODE";
static RISMDInterfaceVariable const lcmd_var_GUICFG_REAL_CODE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_REAL_CODE, &lcmd_type_GUICFGCODE, offsetof(LC_TD_FunctionBlock_GUICFG_REAL,LC_VD_CODE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_GUICFG_REAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_GUICFG_REAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_REAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_REAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_GUICFG_REAL_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_GUICFG_REAL_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_REAL_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_REAL,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_REAL_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_GUICFG_REAL_R_M =
INIT_RISMDStdVariable(lcmd_var_name_GUICFG_REAL_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_REAL,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_GUICFG_REAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_GUICFG_REAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_REAL_VAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_GUICFG_REAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_GUICFG_REAL[] =
{
  INIT_RISMDReference(&lcmd_var_GUICFG_REAL_CODE),
  INIT_RISMDReference(&lcmd_var_GUICFG_REAL_ENO),
  INIT_RISMDReference(&lcmd_var_GUICFG_REAL_R),
  INIT_RISMDReference(&lcmd_var_GUICFG_REAL_R_M),
  INIT_RISMDReference(&lcmd_var_GUICFG_REAL_VAL),
};

static char const lcmd_type_name_GUICFG_REAL[] = "GUICFG_REAL";
RISMDPOUType const lcmd_type_GUICFG_REAL = INIT_RISMDPOUType(lcmd_type_name_GUICFG_REAL, sizeof(LC_TD_FunctionBlock_GUICFG_REAL), 5, lcmd_var_list_GUICFG_REAL);
