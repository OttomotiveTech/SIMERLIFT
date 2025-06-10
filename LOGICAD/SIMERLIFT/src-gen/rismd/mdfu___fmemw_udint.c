#include <RISMD.h>
#include <lcfu___fmemw_udint.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_FMEMW_UDINT_ADDR[] = "ADDR";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_ADDR =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_ADDR, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_ADDR), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_FMEMW_UDINT_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_FMEMW_UDINT_ID[] = "ID";
static RISMDStdVariable const lcmd_var_FMEMW_UDINT_ID =
INIT_RISMDStdVariable(lcmd_var_name_FMEMW_UDINT_ID, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_ID));

static char const lcmd_var_name_FMEMW_UDINT_NXT[] = "NXT";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_NXT =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_NXT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_NXT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_FMEMW_UDINT_OK[] = "OK";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_OK =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_OK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_OK), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_FMEMW_UDINT_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_FMEMW_UDINT_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_FMEMW_UDINT_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_PENDING));

static char const lcmd_var_name_FMEMW_UDINT_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_FMEMW_UDINT_RET[] = "RET";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_RET =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_RET, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_RET), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_FMEMW_UDINT_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_FMEMW_UDINT_R_M =
INIT_RISMDStdVariable(lcmd_var_name_FMEMW_UDINT_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_R_M));

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_FMEMW_UDINT_STARTT[] = "STARTT";
static RISMDStdVariable const lcmd_var_FMEMW_UDINT_STARTT =
INIT_RISMDStdVariable(lcmd_var_name_FMEMW_UDINT_STARTT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_STARTT));

static char const lcmd_var_name_FMEMW_UDINT_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_FMEMW_UDINT_STATE =
INIT_RISMDStdVariable(lcmd_var_name_FMEMW_UDINT_STATE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_STATE));

static char const lcmd_var_name_FMEMW_UDINT_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_FMEMW_UDINT_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_FMEMW_UDINT_VAL, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_FMEMW_UDINT,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_FMEMW_UDINT[] =
{
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_ADDR),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_ENO),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_ID),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_NXT),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_OK),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_PENDING),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_R),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_RET),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_R_M),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_STARTT),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_STATE),
  INIT_RISMDReference(&lcmd_var_FMEMW_UDINT_VAL),
};

static char const lcmd_type_name_FMEMW_UDINT[] = "FMEMW_UDINT";
RISMDPOUType const lcmd_type_FMEMW_UDINT = INIT_RISMDPOUType(lcmd_type_name_FMEMW_UDINT, sizeof(LC_TD_FunctionBlock_FMEMW_UDINT), 12, lcmd_var_list_FMEMW_UDINT);
