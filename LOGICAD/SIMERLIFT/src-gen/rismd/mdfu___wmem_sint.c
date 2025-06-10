#include <RISMD.h>
#include <lcfu___wmem_sint.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_WMEM_SINT_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WMEM_SINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_SINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_SINT_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_SINT_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_WMEM_SINT_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_SINT_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_PENDING));

static char const lcmd_var_name_WMEM_SINT_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_SINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_SINT_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_WMEM_SINT_R_M =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_SINT_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_SINT;
static char const lcmd_var_name_WMEM_SINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_WMEM_SINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_SINT_VAL, &risMdType_SINT, offsetof(LC_TD_FunctionBlock_WMEM_SINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_WMEM_SINT[] =
{
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_ADDR),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_ENO),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_NXT),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_OK),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_PENDING),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_R),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_RET),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_R_M),
  INIT_RISMDReference(&lcmd_var_WMEM_SINT_VAL),
};

static char const lcmd_type_name_WMEM_SINT[] = "WMEM_SINT";
RISMDPOUType const lcmd_type_WMEM_SINT = INIT_RISMDPOUType(lcmd_type_name_WMEM_SINT, sizeof(LC_TD_FunctionBlock_WMEM_SINT), 9, lcmd_var_list_WMEM_SINT);
