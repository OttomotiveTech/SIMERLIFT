#include <RISMD.h>
#include <lcfu___wmem_lreal.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_WMEM_LREAL_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WMEM_LREAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_LREAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_LREAL_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_LREAL_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_WMEM_LREAL_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_LREAL_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_PENDING));

static char const lcmd_var_name_WMEM_LREAL_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_LREAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_LREAL_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_WMEM_LREAL_R_M =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_LREAL_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_WMEM_LREAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_WMEM_LREAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LREAL_VAL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_WMEM_LREAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WMEM_LREAL[] =
{
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_ADDR),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_ENO),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_NXT),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_OK),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_PENDING),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_R),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_RET),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_R_M),
  INIT_RISMDReference(&lcmd_var_WMEM_LREAL_VAL),
};

static char const lcmd_type_name_WMEM_LREAL[] = "WMEM_LREAL";
RISMDPOUType const lcmd_type_WMEM_LREAL = INIT_RISMDPOUType(lcmd_type_name_WMEM_LREAL, sizeof(LC_TD_FunctionBlock_WMEM_LREAL), 9, lcmd_var_list_WMEM_LREAL);
