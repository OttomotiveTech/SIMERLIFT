#include <RISMD.h>
#include <lcfu___wbuf_usint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_USINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_USINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_USINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_USINT_BUF, &lcmd_type_WBUF_USINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_USINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_USINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_USINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_USINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_USINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_USINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_USINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_USINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_USINT_NXT, &lcmd_type_WBUF_USINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_USINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_WBUF_USINT_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_USINT_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_USINT_PRM, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_WBUF_USINT,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_USINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_USINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_USINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_USINT_RET, &lcmd_type_WBUF_USINT_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_USINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_USINT[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_USINT_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_USINT_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_USINT_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_USINT_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_USINT_RET),
};

static char const lcmd_type_name_WBUF_USINT[] = "WBUF_USINT";
RISMDPOUType const lcmd_type_WBUF_USINT = INIT_RISMDPOUType(lcmd_type_name_WBUF_USINT, sizeof(LC_TD_FunctionBlock_WBUF_USINT), 5, lcmd_var_list_WBUF_USINT);
