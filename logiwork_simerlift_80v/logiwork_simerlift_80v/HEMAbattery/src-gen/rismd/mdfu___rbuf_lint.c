#include <RISMD.h>
#include <lcfu___rbuf_lint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_LINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_LINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LINT_BUF, &lcmd_type_RBUF_LINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_LINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_LINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_LINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_LINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LINT_NXT, &lcmd_type_RBUF_LINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_LINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LINT_RET, &lcmd_type_RBUF_LINT_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LINT;
static char const lcmd_var_name_RBUF_LINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_LINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LINT_VAL, &risMdType_LINT, offsetof(LC_TD_FunctionBlock_RBUF_LINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_LINT[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_LINT_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_LINT_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_LINT_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_LINT_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_LINT_VAL),
};

static char const lcmd_type_name_RBUF_LINT[] = "RBUF_LINT";
RISMDPOUType const lcmd_type_RBUF_LINT = INIT_RISMDPOUType(lcmd_type_name_RBUF_LINT, sizeof(LC_TD_FunctionBlock_RBUF_LINT), 5, lcmd_var_list_RBUF_LINT);
