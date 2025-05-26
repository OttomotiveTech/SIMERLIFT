#include <RISMD.h>
#include <lcfu___rbuf_lword.h>

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RBUF_LWORD_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LWORD_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RBUF_LWORD_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LWORD_BUF, &lcmd_type_RBUF_LWORD_BUF_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LWORD,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RBUF_LWORD_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RBUF_LWORD_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LWORD_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RBUF_LWORD,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LWORD_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LWORD_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RBUF_LWORD_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LWORD_NXT, &lcmd_type_RBUF_LWORD_NXT_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LWORD,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_RBUF_LWORD_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RBUF_LWORD_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RBUF_LWORD_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LWORD_RET, &lcmd_type_RBUF_LWORD_RET_PTR, offsetof(LC_TD_FunctionBlock_RBUF_LWORD,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_RBUF_LWORD_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_RBUF_LWORD_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_RBUF_LWORD_VAL, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_RBUF_LWORD,LC_VD_VAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_RBUF_LWORD[] =
{
  INIT_RISMDReference(&lcmd_var_RBUF_LWORD_BUF),
  INIT_RISMDReference(&lcmd_var_RBUF_LWORD_ENO),
  INIT_RISMDReference(&lcmd_var_RBUF_LWORD_NXT),
  INIT_RISMDReference(&lcmd_var_RBUF_LWORD_RET),
  INIT_RISMDReference(&lcmd_var_RBUF_LWORD_VAL),
};

static char const lcmd_type_name_RBUF_LWORD[] = "RBUF_LWORD";
RISMDPOUType const lcmd_type_RBUF_LWORD = INIT_RISMDPOUType(lcmd_type_name_RBUF_LWORD, sizeof(LC_TD_FunctionBlock_RBUF_LWORD), 5, lcmd_var_list_RBUF_LWORD);
