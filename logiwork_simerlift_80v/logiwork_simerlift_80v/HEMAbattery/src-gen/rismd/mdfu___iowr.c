#include <RISMD.h>
#include <lcfu___iowr.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_IOWR_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_IOWR_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_IOWR_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_IOWR,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_IOWR_PIN[] = "PIN";
static RISMDInterfaceVariable const lcmd_var_IOWR_PIN =
INIT_RISMDInterfaceVariable(lcmd_var_name_IOWR_PIN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_IOWR,LC_VD_PIN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_TMS570_GIO;
static char const lcmd_var_name_IOWR_PORT[] = "PORT";
static RISMDInterfaceVariable const lcmd_var_IOWR_PORT =
INIT_RISMDInterfaceVariable(lcmd_var_name_IOWR_PORT, &lcmd_type_TMS570_GIO, offsetof(LC_TD_FunctionBlock_IOWR,LC_VD_PORT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_IOWR_VAL[] = "VAL";
static RISMDInterfaceVariable const lcmd_var_IOWR_VAL =
INIT_RISMDInterfaceVariable(lcmd_var_name_IOWR_VAL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_IOWR,LC_VD_VAL), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_IOWR[] =
{
  INIT_RISMDReference(&lcmd_var_IOWR_ENO),
  INIT_RISMDReference(&lcmd_var_IOWR_PIN),
  INIT_RISMDReference(&lcmd_var_IOWR_PORT),
  INIT_RISMDReference(&lcmd_var_IOWR_VAL),
};

static char const lcmd_type_name_IOWR[] = "IOWR";
RISMDPOUType const lcmd_type_IOWR = INIT_RISMDPOUType(lcmd_type_name_IOWR, sizeof(LC_TD_FunctionBlock_IOWR), 4, lcmd_var_list_IOWR);
