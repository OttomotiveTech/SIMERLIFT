#include <RISMD.h>
#include <lcfu___wbuf_lreal.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_LREAL_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LREAL_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_LREAL_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LREAL_BUF, &lcmd_type_WBUF_LREAL_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LREAL,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_LREAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_LREAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LREAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_LREAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_LREAL_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LREAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_LREAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LREAL_NXT, &lcmd_type_WBUF_LREAL_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LREAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_WBUF_LREAL_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_LREAL_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LREAL_PRM, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_WBUF_LREAL,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_LREAL_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LREAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_LREAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LREAL_RET, &lcmd_type_WBUF_LREAL_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LREAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_LREAL[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_LREAL_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_LREAL_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_LREAL_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_LREAL_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_LREAL_RET),
};

static char const lcmd_type_name_WBUF_LREAL[] = "WBUF_LREAL";
RISMDPOUType const lcmd_type_WBUF_LREAL = INIT_RISMDPOUType(lcmd_type_name_WBUF_LREAL, sizeof(LC_TD_FunctionBlock_WBUF_LREAL), 5, lcmd_var_list_WBUF_LREAL);
