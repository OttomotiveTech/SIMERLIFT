#include <RISMD.h>
#include <lcfu___arr2val.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_ARR2VAL_CELLCOUNTER[] = "CellCounter";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_CELLCOUNTER =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_CELLCOUNTER, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_CELLCOUNTER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ARR2VAL_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ARR2VAL_INDX[] = "indx";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_INDX =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_INDX, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_INDX), RISMD_VARIABLE_SECTION_INPUT);

RISMDArrayType const lcmd_type_ARR2VAL_MAP_ARR = INIT_RISMDArrayType(0,15,sizeof(LC_TD_USINT),&risMdType_USINT);
static char const lcmd_var_name_ARR2VAL_MAP[] = "Map";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_MAP =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_MAP, &lcmd_type_ARR2VAL_MAP_ARR, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_MAP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ARR2VAL_MAXBMU[] = "MaxBMU";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_MAXBMU =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_MAXBMU, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_MAXBMU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_ARR2VAL_NUMOFCELL[] = "numofCell";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_NUMOFCELL =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_NUMOFCELL, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_NUMOFCELL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ARR2VAL_RESET[] = "Reset";
static RISMDInterfaceVariable const lcmd_var_ARR2VAL_RESET =
INIT_RISMDInterfaceVariable(lcmd_var_name_ARR2VAL_RESET, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ARR2VAL,LC_VD_RESET), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_ARR2VAL[] =
{
  INIT_RISMDReference(&lcmd_var_ARR2VAL_CELLCOUNTER),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_ENO),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_INDX),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_MAP),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_MAXBMU),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_NUMOFCELL),
  INIT_RISMDReference(&lcmd_var_ARR2VAL_RESET),
};

static char const lcmd_type_name_ARR2VAL[] = "ARR2VAL";
RISMDPOUType const lcmd_type_ARR2VAL = INIT_RISMDPOUType(lcmd_type_name_ARR2VAL, sizeof(LC_TD_FunctionBlock_ARR2VAL), 7, lcmd_var_list_ARR2VAL);
