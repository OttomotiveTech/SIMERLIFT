#include <RISMD.h>
#include <lcfu___rmem_lword.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_RMEM_LWORD_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_RMEM_LWORD_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LWORD_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RMEM_LWORD_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RMEM_LWORD_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LWORD_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_LWORD_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RMEM_LWORD_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LWORD_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_LWORD_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_RMEM_LWORD_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_LWORD_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_PENDING));

static char const lcmd_var_name_RMEM_LWORD_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_RMEM_LWORD_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LWORD_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_RMEM_LWORD_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_RMEM_LWORD_R_M =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_LWORD_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_RMEM_LWORD_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RMEM_LWORD_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LWORD_VAL, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_RMEM_LWORD,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RMEM_LWORD[] =
{
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_ADDR),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_ENO),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_NXT),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_PENDING),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_R),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_R_M),
  INIT_RISMDReference(&lcmd_var_RMEM_LWORD_VAL),
};

static char const lcmd_type_name_RMEM_LWORD[] = "RMEM_LWORD";
RISMDPOUType const lcmd_type_RMEM_LWORD = INIT_RISMDPOUType(lcmd_type_name_RMEM_LWORD, sizeof(LC_TD_FunctionBlock_RMEM_LWORD), 7, lcmd_var_list_RMEM_LWORD);
