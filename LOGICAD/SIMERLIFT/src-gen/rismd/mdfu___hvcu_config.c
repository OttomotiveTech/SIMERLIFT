#include <RISMD.h>
#include <lcfu___hvcu_config.h>

extern RISMDPOUType const lcmd_type_CANRECV;
static char const lcmd_var_name_HVCU_CONFIG_CANRECV1[] = "CANRECV1";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG_CANRECV1 =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG_CANRECV1, &lcmd_type_CANRECV, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CANRECV1));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_HVCU_CONFIG_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCU_CONFIG_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONFIG_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_HVCU_CONFIG_CMD0[] = "cmd0";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CMD0 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CMD0, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CMD0), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONFIG_CMD1[] = "cmd1";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CMD1 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CMD1, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CMD1), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONFIG_CMD2[] = "cmd2";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CMD2 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CMD2, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CMD2), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONFIG_CMD3[] = "cmd3";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_CMD3 =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_CMD3, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_CMD3), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_HVCU_CONFIG_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_HVCU_CONFIG_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_HVCU_CONFIG_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_HVCU_CONFIG___11_OUTBIT[] = "__11_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___11_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___11_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___11_OUTBIT));

static char const lcmd_var_name_HVCU_CONFIG___12_TO_USINT[] = "__12_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___12_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___12_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___12_TO_USINT));

static char const lcmd_var_name_HVCU_CONFIG___22_TO_USINT[] = "__22_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___22_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___22_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___22_TO_USINT));

static char const lcmd_var_name_HVCU_CONFIG___23_TO_USINT[] = "__23_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___23_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___23_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___23_TO_USINT));

static char const lcmd_var_name_HVCU_CONFIG___24_OUTBIT[] = "__24_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___24_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___24_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___24_OUTBIT));

static char const lcmd_var_name_HVCU_CONFIG___35_OUTBIT[] = "__35_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___35_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___35_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___35_OUTBIT));

static char const lcmd_var_name_HVCU_CONFIG___40_OUTBIT[] = "__40_OUTbit";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___40_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___40_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___40_OUTBIT));

static char const lcmd_var_name_HVCU_CONFIG___42_TO_USINT[] = "__42_TO_USINT";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___42_TO_USINT =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___42_TO_USINT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___42_TO_USINT));

static char const lcmd_var_name_HVCU_CONFIG___51_NE[] = "__51_NE";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___51_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___51_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___51_NE));

static char const lcmd_var_name_HVCU_CONFIG___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_HVCU_CONFIG___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_HVCU_CONFIG___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_HVCU_CONFIG,LC_VD___64_NE));

static RISMDReference const lcmd_var_list_HVCU_CONFIG[] =
{
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CANRECV1),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CAN_CH),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CAN_ID),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CMD0),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CMD1),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CMD2),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_CMD3),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG_ENO),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___11_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___12_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___22_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___23_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___24_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___35_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___40_OUTBIT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___42_TO_USINT),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___51_NE),
  INIT_RISMDReference(&lcmd_var_HVCU_CONFIG___64_NE),
};

static char const lcmd_type_name_HVCU_CONFIG[] = "HVCU_CONFIG";
RISMDPOUType const lcmd_type_HVCU_CONFIG = INIT_RISMDPOUType(lcmd_type_name_HVCU_CONFIG, sizeof(LC_TD_FunctionBlock_HVCU_CONFIG), 19, lcmd_var_list_HVCU_CONFIG);
