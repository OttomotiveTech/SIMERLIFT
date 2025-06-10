#include <RISMD.h>
#include <lcfu___wmem_int.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_WMEM_INT_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WMEM_INT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_INT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_INT_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_INT_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_WMEM_INT_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_INT_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_PENDING));

static char const lcmd_var_name_WMEM_INT_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_INT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_INT_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_WMEM_INT_R_M =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_INT_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_WMEM_INT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_WMEM_INT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_INT_VAL, &risMdType_INT, offsetof(LC_TD_FunctionBlock_WMEM_INT,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WMEM_INT[] =
{
  INIT_RISMDReference(&lcmd_var_WMEM_INT_ADDR),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_ENO),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_NXT),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_OK),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_PENDING),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_R),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_RET),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_R_M),
  INIT_RISMDReference(&lcmd_var_WMEM_INT_VAL),
};

static char const lcmd_type_name_WMEM_INT[] = "WMEM_INT";
RISMDPOUType const lcmd_type_WMEM_INT = INIT_RISMDPOUType(lcmd_type_name_WMEM_INT, sizeof(LC_TD_FunctionBlock_WMEM_INT), 9, lcmd_var_list_WMEM_INT);
