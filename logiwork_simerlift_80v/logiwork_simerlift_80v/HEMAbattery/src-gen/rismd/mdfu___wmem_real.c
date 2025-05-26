#include <RISMD.h>
#include <lcfu___wmem_real.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_WMEM_REAL_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WMEM_REAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_REAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_REAL_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_REAL_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_WMEM_REAL_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_REAL_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_PENDING));

static char const lcmd_var_name_WMEM_REAL_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_REAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_REAL_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_WMEM_REAL_R_M =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_REAL_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_WMEM_REAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_WMEM_REAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_REAL_VAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_WMEM_REAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WMEM_REAL[] =
{
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_ADDR),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_ENO),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_NXT),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_OK),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_PENDING),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_R),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_RET),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_R_M),
  INIT_RISMDReference(&lcmd_var_WMEM_REAL_VAL),
};

static char const lcmd_type_name_WMEM_REAL[] = "WMEM_REAL";
RISMDPOUType const lcmd_type_WMEM_REAL = INIT_RISMDPOUType(lcmd_type_name_WMEM_REAL, sizeof(LC_TD_FunctionBlock_WMEM_REAL), 9, lcmd_var_list_WMEM_REAL);
