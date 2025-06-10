#include <RISMD.h>
#include <lcfu___wbuf_int.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_INT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_INT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_INT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_INT_BUF, &lcmd_type_WBUF_INT_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_INT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_INT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_INT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_INT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_INT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_INT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_INT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_INT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_INT_NXT, &lcmd_type_WBUF_INT_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_INT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_WBUF_INT_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_INT_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_INT_PRM, &risMdType_INT, offsetof(LC_TD_FunctionBlock_WBUF_INT,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_INT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_INT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_INT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_INT_RET, &lcmd_type_WBUF_INT_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_INT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_INT[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_INT_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_INT_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_INT_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_INT_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_INT_RET),
};

static char const lcmd_type_name_WBUF_INT[] = "WBUF_INT";
RISMDPOUType const lcmd_type_WBUF_INT = INIT_RISMDPOUType(lcmd_type_name_WBUF_INT, sizeof(LC_TD_FunctionBlock_WBUF_INT), 5, lcmd_var_list_WBUF_INT);
