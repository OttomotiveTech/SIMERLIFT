#include <RISMD.h>
#include <lcfu___f_w_m_byte.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_F_W_M_BYTE_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_F_W_M_BYTE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_F_W_M_BYTE_ID[] = "ID";
static RISMDStdVariable const lcmd_var_F_W_M_BYTE_ID =
INIT_RISMDStdVariable(lcmd_var_name_F_W_M_BYTE_ID, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_ID));

static char const lcmd_var_name_F_W_M_BYTE_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_F_W_M_BYTE_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_F_W_M_BYTE_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_F_W_M_BYTE_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_F_W_M_BYTE_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_PENDING));

static char const lcmd_var_name_F_W_M_BYTE_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_F_W_M_BYTE_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_F_W_M_BYTE_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_F_W_M_BYTE_R_M =
INIT_RISMDStdVariable(lcmd_var_name_F_W_M_BYTE_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_F_W_M_BYTE_STARTT[] = "STARTT";
static RISMDStdVariable const lcmd_var_F_W_M_BYTE_STARTT =
INIT_RISMDStdVariable(lcmd_var_name_F_W_M_BYTE_STARTT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_STARTT));

static char const lcmd_var_name_F_W_M_BYTE_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_F_W_M_BYTE_STATE =
INIT_RISMDStdVariable(lcmd_var_name_F_W_M_BYTE_STATE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_STATE));

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_F_W_M_BYTE_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_F_W_M_BYTE_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_F_W_M_BYTE_VAL, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_F_W_M_BYTE,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_F_W_M_BYTE[] =
{
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_ADDR),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_ENO),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_ID),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_NXT),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_OK),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_PENDING),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_R),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_RET),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_R_M),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_STARTT),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_STATE),
  INIT_RISMDReference(&lcmd_var_F_W_M_BYTE_VAL),
};

static char const lcmd_type_name_F_W_M_BYTE[] = "F_W_M_BYTE";
RISMDPOUType const lcmd_type_F_W_M_BYTE = INIT_RISMDPOUType(lcmd_type_name_F_W_M_BYTE, sizeof(LC_TD_FunctionBlock_F_W_M_BYTE), 12, lcmd_var_list_F_W_M_BYTE);
