#include <RISMD.h>
#include <lcfu___rbuf_udint.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_UDINT_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UDINT_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_UDINT_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UDINT_BUF, &lcmd_type_RBUF_UDINT_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UDINT,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_UDINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_UDINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UDINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_UDINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_UDINT_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UDINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_UDINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UDINT_NXT, &lcmd_type_RBUF_UDINT_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UDINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_UDINT_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_UDINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_UDINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UDINT_RET, &lcmd_type_RBUF_UDINT_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_UDINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_RBUF_UDINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_UDINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_UDINT_VAL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RBUF_UDINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_UDINT[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_UDINT_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_UDINT_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_UDINT_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_UDINT_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_UDINT_VAL),
};

static char const lcmd_type_name_RBUF_UDINT[] = "RBUF_UDINT";
RISMDPOUType const lcmd_type_RBUF_UDINT = INIT_RISMDPOUType(lcmd_type_name_RBUF_UDINT, sizeof(LC_TD_FunctionBlock_RBUF_UDINT), 5, lcmd_var_list_RBUF_UDINT);
