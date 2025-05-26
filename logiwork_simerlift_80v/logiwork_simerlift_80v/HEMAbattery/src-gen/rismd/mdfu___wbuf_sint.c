#include <RISMD.h>
#include <lcfu___wbuf_sint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_SINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_SINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_SINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_SINT_BUF, &lcmd_type_WBUF_SINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_SINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_SINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_SINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_SINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_SINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_SINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_SINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_SINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_SINT_NXT, &lcmd_type_WBUF_SINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_SINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_SINT;
static char const lcmd_var_name_WBUF_SINT_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_SINT_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_SINT_PRM, &risMdType_SINT, offsetof(LC_TD_FunctionBlock_WBUF_SINT,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_SINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_SINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_SINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_SINT_RET, &lcmd_type_WBUF_SINT_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_SINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_SINT[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_SINT_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_SINT_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_SINT_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_SINT_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_SINT_RET),
};

static char const lcmd_type_name_WBUF_SINT[] = "WBUF_SINT";
RISMDPOUType const lcmd_type_WBUF_SINT = INIT_RISMDPOUType(lcmd_type_name_WBUF_SINT, sizeof(LC_TD_FunctionBlock_WBUF_SINT), 5, lcmd_var_list_WBUF_SINT);
