#include <RISMD.h>
#include <lcfu___rbuf_real.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_REAL_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_REAL_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_REAL_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_REAL_BUF, &lcmd_type_RBUF_REAL_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_REAL,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_REAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_REAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_REAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_REAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_REAL_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_REAL_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_REAL_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_REAL_NXT, &lcmd_type_RBUF_REAL_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_REAL,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_REAL_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_REAL_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_REAL_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_REAL_RET, &lcmd_type_RBUF_REAL_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_REAL,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_RBUF_REAL_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_REAL_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_REAL_VAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_RBUF_REAL,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_REAL[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_REAL_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_REAL_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_REAL_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_REAL_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_REAL_VAL),
};

static char const lcmd_type_name_RBUF_REAL[] = "RBUF_REAL";
RISMDPOUType const lcmd_type_RBUF_REAL = INIT_RISMDPOUType(lcmd_type_name_RBUF_REAL, sizeof(LC_TD_FunctionBlock_RBUF_REAL), 5, lcmd_var_list_RBUF_REAL);
