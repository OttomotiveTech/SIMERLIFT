#include <RISMD.h>
#include <lcfu___rbuf_byte.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_BYTE_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_BYTE_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_BYTE_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_BYTE_BUF, &lcmd_type_RBUF_BYTE_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_BYTE,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_BYTE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_BYTE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_BYTE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_BYTE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_BYTE_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_BYTE_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_BYTE_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_BYTE_NXT, &lcmd_type_RBUF_BYTE_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_BYTE,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_BYTE_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_BYTE_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_BYTE_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_BYTE_RET, &lcmd_type_RBUF_BYTE_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_BYTE,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RBUF_BYTE_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_BYTE_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_BYTE_VAL, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_RBUF_BYTE,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_BYTE[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_BYTE_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_BYTE_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_BYTE_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_BYTE_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_BYTE_VAL),
};

static char const lcmd_type_name_RBUF_BYTE[] = "RBUF_BYTE";
RISMDPOUType const lcmd_type_RBUF_BYTE = INIT_RISMDPOUType(lcmd_type_name_RBUF_BYTE, sizeof(LC_TD_FunctionBlock_RBUF_BYTE), 5, lcmd_var_list_RBUF_BYTE);
