#include <RISMD.h>
#include <lcfu___bcu_state_message.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BCU_STATE_MESSAGE_AMBIENT_TEMP[] = "Ambient_Temp";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_AMBIENT_TEMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_AMBIENT_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_AMBIENT_TEMP), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_CANSEND;
static char const lcmd_var_name_BCU_STATE_MESSAGE_CANSEND4[] = "CANSEND4";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE_CANSEND4 =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE_CANSEND4, &lcmd_type_CANSEND, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CANSEND4));

extern RISMDSimpleNumType const risMdType_UDINT;
static char const lcmd_var_name_BCU_STATE_MESSAGE_CAN_CH[] = "CAN_CH";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CAN_CH =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CAN_CH, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CAN_CH), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BCU_STATE_MESSAGE_CAN_ERROR[] = "CAN_Error";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CAN_ERROR =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CAN_ERROR, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CAN_ERROR), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_CAN_ID[] = "CAN_ID";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CAN_ID =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CAN_ID, &risMdType_UDINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CAN_ID), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_CHARGECOMPLETE[] = "chargeComplete";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_CHARGECONTACT[] = "ChargeContact";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CHARGECONTACT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CHARGECONTACT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CHARGECONTACT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_CONTACTOR_STATUS[] = "Contactor_Status";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_CONTACTOR_STATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_CONTACTOR_STATUS, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_CONTACTOR_STATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_DISCHARGECOMPLETE[] = "dischargeComplete";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_DISCHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_DISCHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_DISCHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BCU_STATE_MESSAGE_DMCC[] = "DMCC";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_DMCC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_DMCC, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_DMCC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_DMDC[] = "DMDC";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_DMDC =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_DMDC, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_DMDC), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_EMERGENCYBUTTON[] = "emergencyButton";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_EMERGENCYBUTTON =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_EMERGENCYBUTTON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_EMERGENCYBUTTON), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BCU_STATE_MESSAGE_IN1STATUS[] = "in1Status";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_IN1STATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_IN1STATUS, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_IN1STATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_IN2STATUS[] = "in2Status";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_IN2STATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_IN2STATUS, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_IN2STATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_ISOLATIONSTATUS[] = "isolationStatus";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_ISOLATIONSTATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_ISOLATIONSTATUS, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_ISOLATIONSTATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_NEGCONTACT[] = "NegContact";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_NEGCONTACT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_NEGCONTACT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_NEGCONTACT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BCU_STATE_MESSAGE_STATE[] = "State";
static RISMDInterfaceVariable const lcmd_var_BCU_STATE_MESSAGE_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BCU_STATE_MESSAGE_STATE, &risMdType_USINT, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD_STATE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_LWORD;
static char const lcmd_var_name_BCU_STATE_MESSAGE___104_TO_LWORD[] = "__104_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___104_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___104_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___104_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___105_OUTBIT[] = "__105_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___105_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___105_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___105_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___10_OUTBIT[] = "__10_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___10_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___10_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___10_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___120_TO_LWORD[] = "__120_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___120_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___120_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___120_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___121_OUTBIT[] = "__121_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___121_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___121_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___121_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___129_TO_LWORD[] = "__129_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___129_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___129_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___129_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___12_OR[] = "__12_OR";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___12_OR =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___12_OR, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___12_OR));

static char const lcmd_var_name_BCU_STATE_MESSAGE___130_OUTBIT[] = "__130_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___130_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___130_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___130_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___138_TO_LWORD[] = "__138_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___138_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___138_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___138_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___139_OUTBIT[] = "__139_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___139_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___139_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___139_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___13_TO_LWORD[] = "__13_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___13_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___13_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___13_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___147_TO_LWORD[] = "__147_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___147_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___147_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___147_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___148_OUTBIT[] = "__148_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___148_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___148_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___148_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___14_OUTBIT[] = "__14_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___14_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___14_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___14_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___15_OUTBIT[] = "__15_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___15_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___15_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___15_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___16_TO_LWORD[] = "__16_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___16_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___16_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___16_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___17_TO_LWORD[] = "__17_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___17_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___17_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___17_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___2_OUTBIT[] = "__2_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___2_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___2_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___2_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___3_OUTBIT[] = "__3_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___3_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___3_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___3_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___64_NE[] = "__64_NE";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___64_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___64_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___64_NE));

static char const lcmd_var_name_BCU_STATE_MESSAGE___79_TO_LWORD[] = "__79_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___79_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___79_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___79_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___81_OUTBIT[] = "__81_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___81_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___81_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___81_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___86_TO_LWORD[] = "__86_TO_LWORD";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___86_TO_LWORD =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___86_TO_LWORD, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___86_TO_LWORD));

static char const lcmd_var_name_BCU_STATE_MESSAGE___87_OUTBIT[] = "__87_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___87_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___87_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___87_OUTBIT));

static char const lcmd_var_name_BCU_STATE_MESSAGE___95_NE[] = "__95_NE";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___95_NE =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___95_NE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___95_NE));

static char const lcmd_var_name_BCU_STATE_MESSAGE___9_OUTBIT[] = "__9_OUTbit";
static RISMDStdVariable const lcmd_var_BCU_STATE_MESSAGE___9_OUTBIT =
INIT_RISMDStdVariable(lcmd_var_name_BCU_STATE_MESSAGE___9_OUTBIT, &risMdType_LWORD, offsetof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE,LC_VD___9_OUTBIT));

static RISMDReference const lcmd_var_list_BCU_STATE_MESSAGE[] =
{
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_AMBIENT_TEMP),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CANSEND4),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CAN_CH),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CAN_ERROR),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CAN_ID),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CHARGECONTACT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_CONTACTOR_STATUS),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_DISCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_DMCC),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_DMDC),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_EMERGENCYBUTTON),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_ENO),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_IN1STATUS),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_IN2STATUS),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_ISOLATIONSTATUS),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_NEGCONTACT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE_STATE),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___104_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___105_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___10_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___120_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___121_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___129_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___12_OR),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___130_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___138_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___139_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___13_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___147_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___148_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___14_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___15_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___16_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___17_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___2_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___3_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___64_NE),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___79_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___81_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___86_TO_LWORD),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___87_OUTBIT),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___95_NE),
  INIT_RISMDReference(&lcmd_var_BCU_STATE_MESSAGE___9_OUTBIT),
};

static char const lcmd_type_name_BCU_STATE_MESSAGE[] = "BCU_STATE_MESSAGE";
RISMDPOUType const lcmd_type_BCU_STATE_MESSAGE = INIT_RISMDPOUType(lcmd_type_name_BCU_STATE_MESSAGE, sizeof(LC_TD_FunctionBlock_BCU_STATE_MESSAGE), 44, lcmd_var_list_BCU_STATE_MESSAGE);
