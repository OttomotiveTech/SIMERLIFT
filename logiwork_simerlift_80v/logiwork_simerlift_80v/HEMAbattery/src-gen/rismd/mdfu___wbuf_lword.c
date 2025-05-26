#include <RISMD.h>
#include <lcfu___wbuf_lword.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_LWORD_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LWORD_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_LWORD_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LWORD_BUF, &lcmd_type_WBUF_LWORD_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LWORD,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_LWORD_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_LWORD_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LWORD_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_LWORD,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_LWORD_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LWORD_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_LWORD_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LWORD_NXT, &lcmd_type_WBUF_LWORD_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LWORD,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_WBUF_LWORD_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_LWORD_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LWORD_PRM, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_WBUF_LWORD,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_LWORD_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_LWORD_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_LWORD_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_LWORD_RET, &lcmd_type_WBUF_LWORD_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_LWORD,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_LWORD[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_LWORD_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_LWORD_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_LWORD_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_LWORD_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_LWORD_RET),
};

static char const lcmd_type_name_WBUF_LWORD[] = "WBUF_LWORD";
RISMDPOUType const lcmd_type_WBUF_LWORD = INIT_RISMDPOUType(lcmd_type_name_WBUF_LWORD, sizeof(LC_TD_FunctionBlock_WBUF_LWORD), 5, lcmd_var_list_WBUF_LWORD);
