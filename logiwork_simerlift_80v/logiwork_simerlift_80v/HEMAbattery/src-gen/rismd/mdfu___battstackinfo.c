#include <RISMD.h>
#include <lcfu___battstackinfo.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BATTSTACKINFO_AMP[] = "amp";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_AMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_AMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_AMP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BATTSTACKINFO_BRD[] = "BRD";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_BRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_BRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_BRD), RISMD_VARIABLE_SECTION_INPUT);

RISMDArrayType const lcmd_type_BATTSTACKINFO_BUF_ARR = INIT_RISMDArrayType(0,63,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_BATTSTACKINFO_BUF[] = "BUF";
static RISMDStdVariable const lcmd_var_BATTSTACKINFO_BUF =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACKINFO_BUF, &lcmd_type_BATTSTACKINFO_BUF_ARR, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_BUF));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BATTSTACKINFO_CYCLE[] = "Cycle";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_CYCLE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_CYCLE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_CYCLE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDPointerType const lcmd_type_BATTSTACKINFO_DATA_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_BATTSTACKINFO_DATA[] = "DATA";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_DATA =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_DATA, &lcmd_type_BATTSTACKINFO_DATA_PTR, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_DATA), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BATTSTACKINFO_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BATTSTACKINFO_FAULT[] = "fault";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_FAULT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_FAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_HUM[] = "hum";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_HUM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_HUM, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_HUM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_INFO[] = "INFO";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_INFO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_INFO, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_INFO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_LEN), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACKINFO_NTCBETA[] = "NTCBETA";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_NTCBETA =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_NTCBETA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_NTCBETA), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_NTCNOMR_OHM[] = "NTCNOMR_OHM";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_NTCNOMR_OHM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_NTCNOMR_OHM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_NTCNOMR_OHM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_NTCNOMT_KLV[] = "NTCNOMT_KLV";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_NTCNOMT_KLV =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_NTCNOMT_KLV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_NTCNOMT_KLV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_BATTSTACKINFO_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACKINFO_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_PENDING));

static char const lcmd_var_name_BATTSTACKINFO_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_BATTSTACKINFO_R_M =
INIT_RISMDStdVariable(lcmd_var_name_BATTSTACKINFO_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_R_M));

static char const lcmd_var_name_BATTSTACKINFO_R_OUT[] = "R_OUT";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_R_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_R_OUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_R_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BATTSTACKINFO_SOC[] = "SOC";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_SOC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_SOC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_SOC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_SOH[] = "SOH";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_SOH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_SOH, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_SOH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_STATE[] = "State";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_STATE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_SINT;
static char const lcmd_var_name_BATTSTACKINFO_TEMP[] = "temp";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_TEMP, &risMdType_SINT, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_TEMP), RISMD_VARIABLE_SECTION_INPUT);

RISMDArrayType const lcmd_type_BATTSTACKINFO_T_CELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_BATTSTACKINFO_T_CELLS[] = "T_CELLS";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_T_CELLS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_T_CELLS, &lcmd_type_BATTSTACKINFO_T_CELLS_ARR, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_T_CELLS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BATTSTACKINFO_VOLT[] = "volt";
static RISMDInterfaceVariable const lcmd_var_BATTSTACKINFO_VOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BATTSTACKINFO_VOLT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BATTSTACKINFO,LC_VD_VOLT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_BATTSTACKINFO[] =
{
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_AMP),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_BRD),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_BUF),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_CYCLE),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_DATA),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_ENO),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_FAULT),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_HUM),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_INFO),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_LEN),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_NTCBETA),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_NTCNOMR_OHM),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_NTCNOMT_KLV),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_PENDING),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_R),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_R_M),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_R_OUT),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_SOC),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_SOH),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_STATE),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_TEMP),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_T_CELLS),
  INIT_RISMDReference(&lcmd_var_BATTSTACKINFO_VOLT),
};

static char const lcmd_type_name_BATTSTACKINFO[] = "BATTSTACKINFO";
RISMDPOUType const lcmd_type_BATTSTACKINFO = INIT_RISMDPOUType(lcmd_type_name_BATTSTACKINFO, sizeof(LC_TD_FunctionBlock_BATTSTACKINFO), 23, lcmd_var_list_BATTSTACKINFO);
