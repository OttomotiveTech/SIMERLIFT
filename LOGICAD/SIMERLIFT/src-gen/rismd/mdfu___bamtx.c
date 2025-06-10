#include <RISMD.h>
#include <lcfu___bamtx.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BAMTX_BOX[] = "BOX";
static RISMDStdVariable const lcmd_var_BAMTX_BOX =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_BOX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_BOX));

extern RISMDSimpleNumType const risMdType_BYTE;
RISMDArrayType const lcmd_type_BAMTX_BUFF_ARR = INIT_RISMDArrayType(0,100,sizeof(LC_TD_BYTE),&risMdType_BYTE);
static char const lcmd_var_name_BAMTX_BUFF[] = "BUFF";
static RISMDStdVariable const lcmd_var_BAMTX_BUFF =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_BUFF, &lcmd_type_BAMTX_BUFF_ARR, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_BUFF));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BAMTX_BYTES[] = "BYTES";
static RISMDStdVariable const lcmd_var_BAMTX_BYTES =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_BYTES, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_BYTES));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_BAMTX_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_BAMTX_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_CH_M[] = "CH_M";
static RISMDStdVariable const lcmd_var_BAMTX_CH_M =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_CH_M, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_CH_M));

static char const lcmd_var_name_BAMTX_CTX[] = "CTX";
static RISMDInterfaceVariable const lcmd_var_BAMTX_CTX =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_CTX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_CTX), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDPointerType const lcmd_type_BAMTX_DATA_PTR = INIT_RISMDPointerType(&risMdType_BYTE);
static char const lcmd_var_name_BAMTX_DATA[] = "DATA";
static RISMDInterfaceVariable const lcmd_var_BAMTX_DATA =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_DATA, &lcmd_type_BAMTX_DATA_PTR, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_DATA), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BAMTX_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BAMTX_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_BAMTX_FRMPER[] = "FRMPER";
static RISMDInterfaceVariable const lcmd_var_BAMTX_FRMPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_FRMPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_FRMPER), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_INDEX[] = "INDEX";
static RISMDStdVariable const lcmd_var_BAMTX_INDEX =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_INDEX, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_INDEX));

static char const lcmd_var_name_BAMTX_LEN[] = "LEN";
static RISMDInterfaceVariable const lcmd_var_BAMTX_LEN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_LEN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_LEN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_NEXTPACKET[] = "NEXTPACKET";
static RISMDStdVariable const lcmd_var_BAMTX_NEXTPACKET =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_NEXTPACKET, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_NEXTPACKET));

static char const lcmd_var_name_BAMTX_PACKETS[] = "PACKETS";
static RISMDStdVariable const lcmd_var_BAMTX_PACKETS =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_PACKETS, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_PACKETS));

static char const lcmd_var_name_BAMTX_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_BAMTX_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_PENDING));

static char const lcmd_var_name_BAMTX_PGN[] = "PGN";
static RISMDInterfaceVariable const lcmd_var_BAMTX_PGN =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_PGN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_PGN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_PGN_M[] = "PGN_M";
static RISMDStdVariable const lcmd_var_BAMTX_PGN_M =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_PGN_M, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_PGN_M));

static char const lcmd_var_name_BAMTX_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_BAMTX_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BAMTX_RC[] = "RC";
static RISMDInterfaceVariable const lcmd_var_BAMTX_RC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_RC, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_RC), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BAMTX_R_END[] = "R_END";
static RISMDInterfaceVariable const lcmd_var_BAMTX_R_END =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_R_END, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_R_END), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BAMTX_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_BAMTX_R_M =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_R_M));

static char const lcmd_var_name_BAMTX_STARTT[] = "STARTT";
static RISMDStdVariable const lcmd_var_BAMTX_STARTT =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_STARTT, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_STARTT));

static char const lcmd_var_name_BAMTX_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_BAMTX_STATE =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_STATE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_STATE));

static char const lcmd_var_name_BAMTX_TPCM[] = "TPCM";
static RISMDInterfaceVariable const lcmd_var_BAMTX_TPCM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_TPCM, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_TPCM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_TPDT[] = "TPDT";
static RISMDInterfaceVariable const lcmd_var_BAMTX_TPDT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BAMTX_TPDT, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_TPDT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BAMTX_TPDT_M[] = "TPDT_M";
static RISMDStdVariable const lcmd_var_BAMTX_TPDT_M =
INIT_RISMDStdVariable(lcmd_var_name_BAMTX_TPDT_M, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BAMTX,LC_VD_TPDT_M));

static RISMDReference const lcmd_var_list_BAMTX[] =
{
  INIT_RISMDReference(&lcmd_var_BAMTX_BOX),
  INIT_RISMDReference(&lcmd_var_BAMTX_BUFF),
  INIT_RISMDReference(&lcmd_var_BAMTX_BYTES),
  INIT_RISMDReference(&lcmd_var_BAMTX_CH),
  INIT_RISMDReference(&lcmd_var_BAMTX_CH_M),
  INIT_RISMDReference(&lcmd_var_BAMTX_CTX),
  INIT_RISMDReference(&lcmd_var_BAMTX_DATA),
  INIT_RISMDReference(&lcmd_var_BAMTX_ENO),
  INIT_RISMDReference(&lcmd_var_BAMTX_FRMPER),
  INIT_RISMDReference(&lcmd_var_BAMTX_INDEX),
  INIT_RISMDReference(&lcmd_var_BAMTX_LEN),
  INIT_RISMDReference(&lcmd_var_BAMTX_NEXTPACKET),
  INIT_RISMDReference(&lcmd_var_BAMTX_PACKETS),
  INIT_RISMDReference(&lcmd_var_BAMTX_PENDING),
  INIT_RISMDReference(&lcmd_var_BAMTX_PGN),
  INIT_RISMDReference(&lcmd_var_BAMTX_PGN_M),
  INIT_RISMDReference(&lcmd_var_BAMTX_R),
  INIT_RISMDReference(&lcmd_var_BAMTX_RC),
  INIT_RISMDReference(&lcmd_var_BAMTX_R_END),
  INIT_RISMDReference(&lcmd_var_BAMTX_R_M),
  INIT_RISMDReference(&lcmd_var_BAMTX_STARTT),
  INIT_RISMDReference(&lcmd_var_BAMTX_STATE),
  INIT_RISMDReference(&lcmd_var_BAMTX_TPCM),
  INIT_RISMDReference(&lcmd_var_BAMTX_TPDT),
  INIT_RISMDReference(&lcmd_var_BAMTX_TPDT_M),
};

static char const lcmd_type_name_BAMTX[] = "BAMTX";
RISMDPOUType const lcmd_type_BAMTX = INIT_RISMDPOUType(lcmd_type_name_BAMTX, sizeof(LC_TD_FunctionBlock_BAMTX), 25, lcmd_var_list_BAMTX);
