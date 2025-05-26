#include <RISMD.h>
#include <lcfu___rmem.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_RMEM_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_RMEM_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_RMEM_BUF_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RMEM_BUF[] = "BUF";
static RISMDInterfaceVariable const lcmd_var_RMEM_BUF =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_BUF, &lcmd_type_RMEM_BUF_PTR, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_BUF), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_RMEM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_RMEM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_RMEM_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_LEN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_RMEM_NXT_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RMEM_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_RMEM_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_NXT, &lcmd_type_RMEM_NXT_PTR, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_RMEM_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_RMEM_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_PENDING));

static char const lcmd_var_name_RMEM_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_RMEM_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

RISMDPointerType const lcmd_type_RMEM_RET_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_RMEM_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_RMEM_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_RMEM_RET, &lcmd_type_RMEM_RET_PTR, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_RMEM_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_RMEM_R_M =
INIT_RISMDStdVariable(lcmd_var_name_RMEM_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_RMEM,LC_VD_R_M));

static RISMDReference const lcmd_var_list_RMEM[] =
{
  INIT_RISMDReference(&lcmd_var_RMEM_ADDR),
  INIT_RISMDReference(&lcmd_var_RMEM_BUF),
  INIT_RISMDReference(&lcmd_var_RMEM_ENO),
  INIT_RISMDReference(&lcmd_var_RMEM_LEN),
  INIT_RISMDReference(&lcmd_var_RMEM_NXT),
  INIT_RISMDReference(&lcmd_var_RMEM_OK),
  INIT_RISMDReference(&lcmd_var_RMEM_PENDING),
  INIT_RISMDReference(&lcmd_var_RMEM_R),
  INIT_RISMDReference(&lcmd_var_RMEM_RET),
  INIT_RISMDReference(&lcmd_var_RMEM_R_M),
};

static char const lcmd_type_name_RMEM[] = "RMEM";
RISMDPOUType const lcmd_type_RMEM = INIT_RISMDPOUType(lcmd_type_name_RMEM, sizeof(LC_TD_FunctionBlock_RMEM), 10, lcmd_var_list_RMEM);
