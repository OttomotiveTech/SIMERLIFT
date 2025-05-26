#include <RISMD.h>
#include <lcfu___wmem.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_WMEM_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_WMEM_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_WMEM_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_WMEM_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_WMEM_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_BUF, &lcmd_type_WMEM_BUF_PTR, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_WMEM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_WMEM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_WMEM_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_LEN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_WMEM_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_WMEM_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_WMEM_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_PENDING));

static char const lcmd_var_name_WMEM_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_WMEM_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_WMEM_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_WMEM_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_WMEM_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_WMEM_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_WMEM_R_M =
INIT_RISMDStdVariable(lcmd_var_name_WMEM_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_WMEM,LC_VD_R_M));

static RISMDReference const lcmd_var_list_WMEM[] =
{
  INIT_RISMDReference(&lcmd_var_WMEM_ADDR),
  INIT_RISMDReference(&lcmd_var_WMEM_BUF),
  INIT_RISMDReference(&lcmd_var_WMEM_ENO),
  INIT_RISMDReference(&lcmd_var_WMEM_LEN),
  INIT_RISMDReference(&lcmd_var_WMEM_NXT),
  INIT_RISMDReference(&lcmd_var_WMEM_OK),
  INIT_RISMDReference(&lcmd_var_WMEM_PENDING),
  INIT_RISMDReference(&lcmd_var_WMEM_R),
  INIT_RISMDReference(&lcmd_var_WMEM_RET),
  INIT_RISMDReference(&lcmd_var_WMEM_R_M),
};

static char const lcmd_type_name_WMEM[] = "WMEM";
RISMDPOUType const lcmd_type_WMEM = INIT_RISMDPOUType(lcmd_type_name_WMEM, sizeof(LC_TD_FunctionBlock_WMEM), 10, lcmd_var_list_WMEM);
