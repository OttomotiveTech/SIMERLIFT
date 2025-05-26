#include <RISMD.h>
#include <lcfu___countim.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_COUNTIM_ACCPER[] = "ACCper";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_ACCPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_ACCPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_ACCPER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_COUNTIM_CD[] = "CD";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_CD =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_CD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_CD), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_CTUD;
static char const lcmd_var_name_COUNTIM_CTUD3[] = "CTUD3";
static RISMDStdVariable const lcmd_var_COUNTIM_CTUD3 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIM_CTUD3, &lcmd_type_CTUD, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_CTUD3));

static char const lcmd_var_name_COUNTIM_CU[] = "CU";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_CU =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_CU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_CU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_COUNTIM_CV[] = "CV";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_CV =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_CV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_CV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIM_DECPER[] = "DECper";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_DECPER =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_DECPER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_DECPER), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_COUNTIM_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDPOUType const lcmd_type_FLASH;
static char const lcmd_var_name_COUNTIM_FLASH7[] = "FLASH7";
static RISMDStdVariable const lcmd_var_COUNTIM_FLASH7 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIM_FLASH7, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_FLASH7));

static char const lcmd_var_name_COUNTIM_FLASH8[] = "FLASH8";
static RISMDStdVariable const lcmd_var_COUNTIM_FLASH8 =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIM_FLASH8, &lcmd_type_FLASH, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_FLASH8));

static char const lcmd_var_name_COUNTIM_PV[] = "PV";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_PV =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_PV, &risMdType_INT, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_PV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_COUNTIM_QD[] = "QD";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_QD =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_QD, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_QD), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIM_QU[] = "QU";
static RISMDInterfaceVariable const lcmd_var_COUNTIM_QU =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTIM_QU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD_QU), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTIM___66_AND[] = "__66_AND";
static RISMDStdVariable const lcmd_var_COUNTIM___66_AND =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIM___66_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD___66_AND));

static char const lcmd_var_name_COUNTIM___68_AND[] = "__68_AND";
static RISMDStdVariable const lcmd_var_COUNTIM___68_AND =
INIT_RISMDStdVariable(lcmd_var_name_COUNTIM___68_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_COUNTIM,LC_VD___68_AND));

static RISMDReference const lcmd_var_list_COUNTIM[] =
{
  INIT_RISMDReference(&lcmd_var_COUNTIM_ACCPER),
  INIT_RISMDReference(&lcmd_var_COUNTIM_CD),
  INIT_RISMDReference(&lcmd_var_COUNTIM_CTUD3),
  INIT_RISMDReference(&lcmd_var_COUNTIM_CU),
  INIT_RISMDReference(&lcmd_var_COUNTIM_CV),
  INIT_RISMDReference(&lcmd_var_COUNTIM_DECPER),
  INIT_RISMDReference(&lcmd_var_COUNTIM_ENO),
  INIT_RISMDReference(&lcmd_var_COUNTIM_FLASH7),
  INIT_RISMDReference(&lcmd_var_COUNTIM_FLASH8),
  INIT_RISMDReference(&lcmd_var_COUNTIM_PV),
  INIT_RISMDReference(&lcmd_var_COUNTIM_QD),
  INIT_RISMDReference(&lcmd_var_COUNTIM_QU),
  INIT_RISMDReference(&lcmd_var_COUNTIM___66_AND),
  INIT_RISMDReference(&lcmd_var_COUNTIM___68_AND),
};

static char const lcmd_type_name_COUNTIM[] = "COUNTIM";
RISMDPOUType const lcmd_type_COUNTIM = INIT_RISMDPOUType(lcmd_type_name_COUNTIM, sizeof(LC_TD_FunctionBlock_COUNTIM), 14, lcmd_var_list_COUNTIM);
