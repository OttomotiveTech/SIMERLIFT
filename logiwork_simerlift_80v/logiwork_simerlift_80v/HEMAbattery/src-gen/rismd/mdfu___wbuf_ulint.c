#include <RISMD.h>
#include <lcfu___wbuf_ulint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_ULINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_ULINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_ULINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_ULINT_BUF, &lcmd_type_WBUF_ULINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_ULINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_ULINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_ULINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_ULINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_ULINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_ULINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_ULINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_ULINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_ULINT_NXT, &lcmd_type_WBUF_ULINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_ULINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_ULINT;
static char const lcmd_var_name_WBUF_ULINT_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_ULINT_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_ULINT_PRM, &risMdType_ULINT, offsetof(LC_TD_FunctionBlock_WBUF_ULINT,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_ULINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_ULINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_ULINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_ULINT_RET, &lcmd_type_WBUF_ULINT_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_ULINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_ULINT[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_ULINT_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_ULINT_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_ULINT_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_ULINT_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_ULINT_RET),
};

static char const lcmd_type_name_WBUF_ULINT[] = "WBUF_ULINT";
RISMDPOUType const lcmd_type_WBUF_ULINT = INIT_RISMDPOUType(lcmd_type_name_WBUF_ULINT, sizeof(LC_TD_FunctionBlock_WBUF_ULINT), 5, lcmd_var_list_WBUF_ULINT);
