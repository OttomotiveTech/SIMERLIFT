#include <RISMD.h>
#include <lcfu___wbuf_real.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WBUF_REAL_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_REAL_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WBUF_REAL_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_REAL_BUF, &lcmd_type_WBUF_REAL_BUF_PTR, offsetof(LC_TD_FunctionBlock_WBUF_REAL,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WBUF_REAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WBUF_REAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_REAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WBUF_REAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_WBUF_REAL_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_REAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WBUF_REAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_REAL_NXT, &lcmd_type_WBUF_REAL_NXT_PTR, offsetof(LC_TD_FunctionBlock_WBUF_REAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_WBUF_REAL_PRM[] = "PRM";
static RISMDInterfaceVariable const lcmd_var_WBUF_REAL_PRM =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_REAL_PRM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_WBUF_REAL,LC_VD_PRM), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_WBUF_REAL_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WBUF_REAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WBUF_REAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WBUF_REAL_RET, &lcmd_type_WBUF_REAL_RET_PTR, offsetof(LC_TD_FunctionBlock_WBUF_REAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_WBUF_REAL[] =
{
  INIT_RISMDReference(&lcmd_var_WBUF_REAL_BUF),
  INIT_RISMDReference(&lcmd_var_WBUF_REAL_ENO),
  INIT_RISMDReference(&lcmd_var_WBUF_REAL_NXT),
  INIT_RISMDReference(&lcmd_var_WBUF_REAL_PRM),
  INIT_RISMDReference(&lcmd_var_WBUF_REAL_RET),
};

static char const lcmd_type_name_WBUF_REAL[] = "WBUF_REAL";
RISMDPOUType const lcmd_type_WBUF_REAL = INIT_RISMDPOUType(lcmd_type_name_WBUF_REAL, sizeof(LC_TD_FunctionBlock_WBUF_REAL), 5, lcmd_var_list_WBUF_REAL);
