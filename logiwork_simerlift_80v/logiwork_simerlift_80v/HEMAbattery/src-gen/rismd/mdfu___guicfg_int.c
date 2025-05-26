#include <RISMD.h>
#include <lcfu___guicfg_int.h>

extern RISMDDerivedType const lcmd_type_GUICFGCODE;
static char const lcmd_var_name_GUICFG_INT_CODE[] = "CODE";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INT_CODE =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INT_CODE, &lcmd_type_GUICFGCODE, offsetof(LC_TD_FunctionBlock_GUICFG_INT,LC_VD_CODE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_GUICFG_INT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_GUICFG_INT_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INT_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INT_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INT,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_GUICFG_INT_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_GUICFG_INT_R_M =
INIT_RISMDStdVariable(lcmd_var_name_GUICFG_INT_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_GUICFG_INT,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_GUICFG_INT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_GUICFG_INT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_GUICFG_INT_VAL, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_GUICFG_INT,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_GUICFG_INT[] =
{
  INIT_RISMDReference(&lcmd_var_GUICFG_INT_CODE),
  INIT_RISMDReference(&lcmd_var_GUICFG_INT_ENO),
  INIT_RISMDReference(&lcmd_var_GUICFG_INT_R),
  INIT_RISMDReference(&lcmd_var_GUICFG_INT_R_M),
  INIT_RISMDReference(&lcmd_var_GUICFG_INT_VAL),
};

static char const lcmd_type_name_GUICFG_INT[] = "GUICFG_INT";
RISMDPOUType const lcmd_type_GUICFG_INT = INIT_RISMDPOUType(lcmd_type_name_GUICFG_INT, sizeof(LC_TD_FunctionBlock_GUICFG_INT), 5, lcmd_var_list_GUICFG_INT);
