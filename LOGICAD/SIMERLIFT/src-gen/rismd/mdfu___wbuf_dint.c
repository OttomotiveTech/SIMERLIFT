#include <RISMD.h>
#include <lcfu___wbuf_dint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_DINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_DINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_DINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_DINT_BUF, &lcmd_type_WBUF_DINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_DINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_DINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_DINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_DINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_DINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_DINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_DINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_DINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_DINT_NXT, &lcmd_type_WBUF_DINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_DINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_WBUF_DINT_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_DINT_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_DINT_PRM, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_WBUF_DINT,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_DINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_DINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_DINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_DINT_RET, &lcmd_type_WBUF_DINT_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_DINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_DINT[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_DINT_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_DINT_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_DINT_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_DINT_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_DINT_RET),
};

static char const lcmd_type_name_WBUF_DINT[] = "WBUF_DINT";
RISMDPOUType const lcmd_type_WBUF_DINT = INIT_RISMDPOUType(lcmd_type_name_WBUF_DINT, sizeof(LC_TD_FunctionBlock_WBUF_DINT), 5, lcmd_var_list_WBUF_DINT);
