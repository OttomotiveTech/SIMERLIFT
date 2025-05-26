#include <RISMD.h>
#include <lcfu___flash.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_FLASH_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_FLASH_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_FLASH_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_FLASH_IN[] = "IN";
static RISMDInterfaceVariable const lcmd_var_FLASH_IN =
INIT_RISMDInterfaceVariable(lcmd_var_name_FLASH_IN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_FLASH_OUT[] = "OUT";
static RISMDInterfaceVariable const lcmd_var_FLASH_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_FLASH_OUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_FLASH_PER[] = "PER";
static RISMDInterfaceVariable const lcmd_var_FLASH_PER =
INIT_RISMDInterfaceVariable(lcmd_var_name_FLASH_PER, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_PER), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_FLASH_TON1[] = "TON1";
static RISMDStdVariable const lcmd_var_FLASH_TON1 =
INIT_RISMDStdVariable(lcmd_var_name_FLASH_TON1, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_TON1));

static char const lcmd_var_name_FLASH_TON2[] = "TON2";
static RISMDStdVariable const lcmd_var_FLASH_TON2 =
INIT_RISMDStdVariable(lcmd_var_name_FLASH_TON2, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD_TON2));

static char const lcmd_var_name_FLASH___4_AND[] = "__4_AND";
static RISMDStdVariable const lcmd_var_FLASH___4_AND =
INIT_RISMDStdVariable(lcmd_var_name_FLASH___4_AND, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD___4_AND));

static char const lcmd_var_name_FLASH___5_NOT[] = "__5_NOT";
static RISMDStdVariable const lcmd_var_FLASH___5_NOT =
INIT_RISMDStdVariable(lcmd_var_name_FLASH___5_NOT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FLASH,LC_VD___5_NOT));

static RISMDReference const lcmd_var_list_FLASH[] =
{
  INIT_RISMDReference(&lcmd_var_FLASH_ENO),
  INIT_RISMDReference(&lcmd_var_FLASH_IN),
  INIT_RISMDReference(&lcmd_var_FLASH_OUT),
  INIT_RISMDReference(&lcmd_var_FLASH_PER),
  INIT_RISMDReference(&lcmd_var_FLASH_TON1),
  INIT_RISMDReference(&lcmd_var_FLASH_TON2),
  INIT_RISMDReference(&lcmd_var_FLASH___4_AND),
  INIT_RISMDReference(&lcmd_var_FLASH___5_NOT),
};

static char const lcmd_type_name_FLASH[] = "FLASH";
RISMDPOUType const lcmd_type_FLASH = INIT_RISMDPOUType(lcmd_type_name_FLASH, sizeof(LC_TD_FunctionBlock_FLASH), 8, lcmd_var_list_FLASH);
