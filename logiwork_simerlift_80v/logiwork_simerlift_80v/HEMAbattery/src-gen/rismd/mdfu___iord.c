#include <RISMD.h>
#include <lcfu___iord.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_IORD_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_IORD_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_IORD_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_IORD,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_IORD_OUT[] = "OUT";
static RISMDInterfaceVariable const lcmd_var_IORD_OUT =
INIT_RISMDInterfaceVariable(lcmd_var_name_IORD_OUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_IORD,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_IORD_PIN[] = "PIN";
static RISMDInterfaceVariable const lcmd_var_IORD_PIN =
INIT_RISMDInterfaceVariable(lcmd_var_name_IORD_PIN, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_IORD,LC_VD_PIN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_TMS570_GIO;
static char const lcmd_var_name_IORD_PORT[] = "PORT";
static RISMDInterfaceVariable const lcmd_var_IORD_PORT =
INIT_RISMDInterfaceVariable(lcmd_var_name_IORD_PORT, &lcmd_type_TMS570_GIO, offsetof(LC_TD_FunctionBlock_IORD,LC_VD_PORT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_IORD[] =
{
  INIT_RISMDReference(&lcmd_var_IORD_ENO),
  INIT_RISMDReference(&lcmd_var_IORD_OUT),
  INIT_RISMDReference(&lcmd_var_IORD_PIN),
  INIT_RISMDReference(&lcmd_var_IORD_PORT),
};

static char const lcmd_type_name_IORD[] = "IORD";
RISMDPOUType const lcmd_type_IORD = INIT_RISMDPOUType(lcmd_type_name_IORD, sizeof(LC_TD_FunctionBlock_IORD), 4, lcmd_var_list_IORD);
