#include <RISMD.h>
#include <lcfu___countimr.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_COUNTIMR_ACCPER[] = "ACCper";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_ACCPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_ACCPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_ACCPER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_COUNTIMR_CD[] = "CD";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_CD =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_CD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_CD), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_CTUD;
static char const lcmd_var_name_COUNTIMR_CTUD3[] = "CTUD3";
static RISMDStdVariable const lcmd_var_COUNTIMR_CTUD3 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIMR_CTUD3, &lcmd_type_CTUD, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_CTUD3));

static char const lcmd_var_name_COUNTIMR_CU[] = "CU";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_CU =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_CU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_CU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_COUNTIMR_CV[] = "CV";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_CV =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_CV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_CV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIMR_DECPER[] = "DECper";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_DECPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_DECPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_DECPER), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_COUNTIMR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_COUNTIMR_FLASH7[] = "FLASH7";
static RISMDStdVariable const lcmd_var_COUNTIMR_FLASH7 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIMR_FLASH7, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_FLASH7));

static char const lcmd_var_name_COUNTIMR_FLASH8[] = "FLASH8";
static RISMDStdVariable const lcmd_var_COUNTIMR_FLASH8 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIMR_FLASH8, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_FLASH8));

static char const lcmd_var_name_COUNTIMR_PV[] = "PV";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_PV =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_PV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_PV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_COUNTIMR_QD[] = "QD";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_QD =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_QD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_QD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIMR_QU[] = "QU";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_QU =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_QU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_QU), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIMR_R[] = "R";
static RISMDInterfaceVariable const lcmd_var_COUNTIMR_R =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIMR_R, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD_R), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_COUNTIMR___66_AND[] = "__66_AND";
static RISMDStdVariable const lcmd_var_COUNTIMR___66_AND =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIMR___66_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD___66_AND));

static char const lcmd_var_name_COUNTIMR___68_AND[] = "__68_AND";
static RISMDStdVariable const lcmd_var_COUNTIMR___68_AND =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIMR___68_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIMR,LC_VD___68_AND));

static RISMDReference const lcmd_var_list_COUNTIMR[] =
{
  INIT_RISMDReference(&lcmd_var_COUNTIMR_ACCPER),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_CD),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_CTUD3),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_CU),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_CV),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_DECPER),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_ENO),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_FLASH7),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_FLASH8),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_PV),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_QD),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_QU),
  INIT_RISMDReference(&lcmd_var_COUNTIMR_R),
  INIT_RISMDReference(&lcmd_var_COUNTIMR___66_AND),
  INIT_RISMDReference(&lcmd_var_COUNTIMR___68_AND),
};

static char const lcmd_type_name_COUNTIMR[] = "COUNTIMR";
RISMDPOUType const lcmd_type_COUNTIMR = INIT_RISMDPOUType(lcmd_type_name_COUNTIMR, sizeof(LC_TD_FunctionBlock_COUNTIMR), 15, lcmd_var_list_COUNTIMR);
