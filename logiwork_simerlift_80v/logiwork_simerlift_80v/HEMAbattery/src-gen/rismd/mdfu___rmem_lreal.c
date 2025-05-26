#include <RISMD.h>
#include <lcfu___rmem_lreal.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_RMEM_LREAL_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_RMEM_LREAL_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LREAL_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RMEM_LREAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RMEM_LREAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LREAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_LREAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RMEM_LREAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LREAL_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_LREAL_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_RMEM_LREAL_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_LREAL_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_PENDING));

static char const lcmd_var_name_RMEM_LREAL_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_RMEM_LREAL_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LREAL_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RMEM_LREAL_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_RMEM_LREAL_R_M =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_LREAL_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_RMEM_LREAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RMEM_LREAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LREAL_VAL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_RMEM_LREAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RMEM_LREAL[] =
{
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_ADDR),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_ENO),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_NXT),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_PENDING),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_R),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_R_M),
  INIT_RISMDReference(&lcmd_var_RMEM_LREAL_VAL),
};

static char const lcmd_type_name_RMEM_LREAL[] = "RMEM_LREAL";
RISMDPOUType const lcmd_type_RMEM_LREAL = INIT_RISMDPOUType(lcmd_type_name_RMEM_LREAL, sizeof(LC_TD_FunctionBlock_RMEM_LREAL), 7, lcmd_var_list_RMEM_LREAL);
