#include <RISMD.h>
#include <lcfu___sim100can.h>

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_SIM100CAN_BOX[] = "BOX";
static RISMDStdVariable const lcmd_var_SIM100CAN_BOX =
INIT_RISMDStdVariable(lcmd_var_name_SIM100CAN_BOX, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_BOX));

extern RISMDDerivedType const lcmd_type_TMS570_CAN;
static char const lcmd_var_name_SIM100CAN_CH[] = "CH";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_CH, &lcmd_type_TMS570_CAN, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_SIM100CAN_DEVICEERR[] = "deviceErr";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_DEVICEERR =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_DEVICEERR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_DEVICEERR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BYTE;
static char const lcmd_var_name_SIM100CAN_ERRCODE[] = "errCode";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ERRCODE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ERRCODE, &risMdType_BYTE, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ERRCODE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_ISOOFF[] = "isoOff";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ISOOFF =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ISOOFF, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ISOOFF), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_SIM100CAN_ISORN[] = "isoRn";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ISORN =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ISORN, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ISORN), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_ISORP[] = "isoRp";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ISORP =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ISORP, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ISORP), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_SIM100CAN_ISOSTAT[] = "isoStat";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_ISOSTAT =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_ISOSTAT, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_ISOSTAT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_LOWVOLTAGE[] = "lowVoltage";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_LOWVOLTAGE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_LOWVOLTAGE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_LOWVOLTAGE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_NODEVICE[] = "noDevice";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_NODEVICE =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_NODEVICE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_NODEVICE), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_SIM100CAN_OHMPERV[] = "OhmPerV";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_OHMPERV =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_OHMPERV, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_OHMPERV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_SIM100CAN_R_M[] = "R_M";
static RISMDStdVariable const lcmd_var_SIM100CAN_R_M =
INIT_RISMDStdVariable(lcmd_var_name_SIM100CAN_R_M, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_R_M));

static char const lcmd_var_name_SIM100CAN_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_SIM100CAN_STATE =
INIT_RISMDStdVariable(lcmd_var_name_SIM100CAN_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_STATE));

static char const lcmd_var_name_SIM100CAN_VBATMAX[] = "VBATmax";
static RISMDInterfaceVariable const lcmd_var_SIM100CAN_VBATMAX =
INIT_RISMDInterfaceVariable(lcmd_var_name_SIM100CAN_VBATMAX, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_SIM100CAN,LC_VD_VBATMAX), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_SIM100CAN[] =
{
  INIT_RISMDReference(&lcmd_var_SIM100CAN_BOX),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_CH),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_DEVICEERR),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ENO),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ERRCODE),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ISOOFF),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ISORN),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ISORP),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_ISOSTAT),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_LOWVOLTAGE),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_NODEVICE),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_OHMPERV),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_R_M),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_STATE),
  INIT_RISMDReference(&lcmd_var_SIM100CAN_VBATMAX),
};

static char const lcmd_type_name_SIM100CAN[] = "SIM100CAN";
RISMDPOUType const lcmd_type_SIM100CAN = INIT_RISMDPOUType(lcmd_type_name_SIM100CAN, sizeof(LC_TD_FunctionBlock_SIM100CAN), 15, lcmd_var_list_SIM100CAN);
