#include <RISMD.h>
#include <lcfu___bmuinfo.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BMUINFO_BRD[] = "BRD";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_BRD =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_BRD, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_BRD), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_SINT;
RISMDArrayType const lcmd_type_BMUINFO_CELLTEMP_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_SINT),&risMdType_SINT);
static char const lcmd_var_name_BMUINFO_CELLTEMP[] = "cellTemp";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_CELLTEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_CELLTEMP, &lcmd_type_BMUINFO_CELLTEMP_ARR, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_CELLTEMP), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
RISMDArrayType const lcmd_type_BMUINFO_CELLVOLT_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_UINT),&risMdType_UINT);
static char const lcmd_var_name_BMUINFO_CELLVOLT[] = "cellVolt";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_CELLVOLT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_CELLVOLT, &lcmd_type_BMUINFO_CELLVOLT_ARR, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_CELLVOLT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BMUINFO_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BMUINFO_NTCBETA[] = "NTCBETA";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_NTCBETA =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_NTCBETA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_NTCBETA), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BMUINFO_NTCNOMR_OHM[] = "NTCNOMR_OHM";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_NTCNOMR_OHM =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_NTCNOMR_OHM, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_NTCNOMR_OHM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BMUINFO_NTCNOMT_KLV[] = "NTCNOMT_KLV";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_NTCNOMT_KLV =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_NTCNOMT_KLV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_NTCNOMT_KLV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BMUINFO_PENDING[] = "PENDING";
static RISMDStdVariable const lcmd_var_BMUINFO_PENDING =
INIT_RISMDStdVariable(lcmd_var_name_BMUINFO_PENDING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_PENDING));

static char const lcmd_var_name_BMUINFO_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BMUINFO_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_BMUINFO_R_M =
INIT_RISMDStdVariable(lcmd_var_name_BMUINFO_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_R_M));

static char const lcmd_var_name_BMUINFO_R_OUT[] = "R_OUT";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_R_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_R_OUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_R_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDArrayType const lcmd_type_BMUINFO_T_CELLS_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_BMUINFO_T_CELLS[] = "T_CELLS";
static RISMDInterfaceVariable const lcmd_var_BMUINFO_T_CELLS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BMUINFO_T_CELLS, &lcmd_type_BMUINFO_T_CELLS_ARR, offsetof(LC_TD_FunctionBlock_BMUINFO,LC_VD_T_CELLS), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_BMUINFO[] =
{
  INIT_RISMDReference(&lcmd_var_BMUINFO_BRD),
  INIT_RISMDReference(&lcmd_var_BMUINFO_CELLTEMP),
  INIT_RISMDReference(&lcmd_var_BMUINFO_CELLVOLT),
  INIT_RISMDReference(&lcmd_var_BMUINFO_ENO),
  INIT_RISMDReference(&lcmd_var_BMUINFO_NTCBETA),
  INIT_RISMDReference(&lcmd_var_BMUINFO_NTCNOMR_OHM),
  INIT_RISMDReference(&lcmd_var_BMUINFO_NTCNOMT_KLV),
  INIT_RISMDReference(&lcmd_var_BMUINFO_PENDING),
  INIT_RISMDReference(&lcmd_var_BMUINFO_R),
  INIT_RISMDReference(&lcmd_var_BMUINFO_R_M),
  INIT_RISMDReference(&lcmd_var_BMUINFO_R_OUT),
  INIT_RISMDReference(&lcmd_var_BMUINFO_T_CELLS),
};

static char const lcmd_type_name_BMUINFO[] = "BMUINFO";
RISMDPOUType const lcmd_type_BMUINFO = INIT_RISMDPOUType(lcmd_type_name_BMUINFO, sizeof(LC_TD_FunctionBlock_BMUINFO), 12, lcmd_var_list_BMUINFO);
