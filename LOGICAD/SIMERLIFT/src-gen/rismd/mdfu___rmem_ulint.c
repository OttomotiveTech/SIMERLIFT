#include <RISMD.h>
#include <lcfu___rmem_ulint.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_RMEM_ULINT_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_RMEM_ULINT_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ULINT_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RMEM_ULINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RMEM_ULINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ULINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_ULINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RMEM_ULINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ULINT_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_ULINT_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_RMEM_ULINT_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_ULINT_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_PENDING));

static char const lcmd_var_name_RMEM_ULINT_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_RMEM_ULINT_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ULINT_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RMEM_ULINT_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_RMEM_ULINT_R_M =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_ULINT_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_ULINT;
static char const lcmd_var_name_RMEM_ULINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RMEM_ULINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ULINT_VAL, &risMdType_ULINT, offsetof(LC_TD_FunctionBlock_RMEM_ULINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RMEM_ULINT[] =
{
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_ADDR),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_ENO),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_NXT),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_PENDING),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_R),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_R_M),
  INIT_RISMDReference(&lcmd_var_RMEM_ULINT_VAL),
};

static char const lcmd_type_name_RMEM_ULINT[] = "RMEM_ULINT";
RISMDPOUType const lcmd_type_RMEM_ULINT = INIT_RISMDPOUType(lcmd_type_name_RMEM_ULINT, sizeof(LC_TD_FunctionBlock_RMEM_ULINT), 7, lcmd_var_list_RMEM_ULINT);
