#include <RISMD.h>
#include <lcfu___rbuf_lreal.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_LREAL_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LREAL_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_LREAL_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LREAL_BUF, &lcmd_type_RBUF_LREAL_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LREAL,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_LREAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_LREAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LREAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_LREAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LREAL_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LREAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_LREAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LREAL_NXT, &lcmd_type_RBUF_LREAL_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LREAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LREAL_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LREAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_LREAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LREAL_RET, &lcmd_type_RBUF_LREAL_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LREAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LREAL;
static char const lcmd_var_name_RBUF_LREAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_LREAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LREAL_VAL, &risMdType_LREAL, offsetof(LC_TD_FunctionBlock_RBUF_LREAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_LREAL[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_LREAL_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_LREAL_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_LREAL_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_LREAL_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_LREAL_VAL),
};

static char const lcmd_type_name_RBUF_LREAL[] = "RBUF_LREAL";
RISMDPOUType const lcmd_type_RBUF_LREAL = INIT_RISMDPOUType(lcmd_type_name_RBUF_LREAL, sizeof(LC_TD_FunctionBlock_RBUF_LREAL), 5, lcmd_var_list_RBUF_LREAL);
