#include <RISMD.h>
#include <lcfu___rbuf_uint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_UINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_UINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UINT_BUF, &lcmd_type_RBUF_UINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_UINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_UINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_UINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_UINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_UINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UINT_NXT, &lcmd_type_RBUF_UINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_UINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_UINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UINT_RET, &lcmd_type_RBUF_UINT_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_RBUF_UINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_UINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UINT_VAL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_RBUF_UINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_UINT[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_UINT_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_UINT_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_UINT_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_UINT_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_UINT_VAL),
};

static char const lcmd_type_name_RBUF_UINT[] = "RBUF_UINT";
RISMDPOUType const lcmd_type_RBUF_UINT = INIT_RISMDPOUType(lcmd_type_name_RBUF_UINT, sizeof(LC_TD_FunctionBlock_RBUF_UINT), 5, lcmd_var_list_RBUF_UINT);
