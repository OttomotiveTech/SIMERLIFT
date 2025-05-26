#include <RISMD.h>
#include <lcfu___bufsize.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BUFSIZE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BUFSIZE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFSIZE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BUFSIZE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_BUFSIZE_FIN_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_BUFSIZE_FIN[] = "FIN";
static RISMDInterfaceVariable const lcmd_var_BUFSIZE_FIN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFSIZE_FIN, &lcmd_type_BUFSIZE_FIN_PTR, offsetof(LC_TD_FunctionBlock_BUFSIZE,LC_VD_FIN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BUFSIZE_SIZE[] = "SIZE";
static RISMDInterfaceVariable const lcmd_var_BUFSIZE_SIZE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFSIZE_SIZE, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BUFSIZE,LC_VD_SIZE), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_BUFSIZE_START_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_BUFSIZE_START[] = "START";
static RISMDInterfaceVariable const lcmd_var_BUFSIZE_START =
INIT_RISMDInterfaceVariable(lcmd_var_name_BUFSIZE_START, &lcmd_type_BUFSIZE_START_PTR, offsetof(LC_TD_FunctionBlock_BUFSIZE,LC_VD_START), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_BUFSIZE[] =
{
  INIT_RISMDReference(&lcmd_var_BUFSIZE_ENO),
  INIT_RISMDReference(&lcmd_var_BUFSIZE_FIN),
  INIT_RISMDReference(&lcmd_var_BUFSIZE_SIZE),
  INIT_RISMDReference(&lcmd_var_BUFSIZE_START),
};

static char const lcmd_type_name_BUFSIZE[] = "BUFSIZE";
RISMDPOUType const lcmd_type_BUFSIZE = INIT_RISMDPOUType(lcmd_type_name_BUFSIZE, sizeof(LC_TD_FunctionBlock_BUFSIZE), 4, lcmd_var_list_BUFSIZE);
