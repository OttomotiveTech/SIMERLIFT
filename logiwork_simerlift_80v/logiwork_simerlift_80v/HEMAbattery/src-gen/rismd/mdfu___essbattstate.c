#include <RISMD.h>
#include <lcfu___essbattstate.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_ESSBATTSTATE_BATSTATEELAPSEDTIME[] = "BATSTATEELAPSEDTIME";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_BATSTATEELAPSEDTIME =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_BATSTATEELAPSEDTIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_BATSTATEELAPSEDTIME));

static char const lcmd_var_name_ESSBATTSTATE_BATSTATEINTERVAL[] = "BATSTATEINTERVAL";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_BATSTATEINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_BATSTATEINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_BATSTATEINTERVAL));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ESSBATTSTATE_BATSTATETIMEOUT[] = "BATSTATETIMEOUT";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_BATSTATETIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_BATSTATETIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_BATSTATETIMEOUT));

extern RISMDDerivedType const lcmd_type_BATTSTATE;
static char const lcmd_var_name_ESSBATTSTATE_BATTERYSTATE[] = "BATTERYSTATE";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_BATTERYSTATE =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_BATTERYSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_BATTERYSTATE));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_ESSBATTSTATE_BATTIMER[] = "BATTIMER";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_BATTIMER =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_BATTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_BATTIMER));

static char const lcmd_var_name_ESSBATTSTATE_CHARGECOMPLETE[] = "chargeComplete";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_CHARGERON[] = "chargerON";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CHARGERON =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CHARGERON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CHARGERON), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_TBUFFER;
static char const lcmd_var_name_ESSBATTSTATE_CHARGEVOLTTIMER[] = "chargeVoltTimer";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_CHARGEVOLTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_CHARGEVOLTTIMER, &lcmd_type_TBUFFER, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CHARGEVOLTTIMER));

static char const lcmd_var_name_ESSBATTSTATE_CONTACT[] = "contact";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CONTACT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CONTACT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CONTACT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSBATTSTATE_CONTACTFBK[] = "contactFbk";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CONTACTFBK =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CONTACTFBK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CONTACTFBK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_CONTACTNEG[] = "contactNeg";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CONTACTNEG =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CONTACTNEG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CONTACTNEG), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_ESSBATTSTATE_CURRENTAMP[] = "currentAmp";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_CURRENTAMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_CURRENTAMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CURRENTAMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_CURRENTCHARGING[] = "currentCharging";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_CURRENTCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_CURRENTCHARGING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CURRENTCHARGING));

static char const lcmd_var_name_ESSBATTSTATE_CURRENTDISCHARGING[] = "currentDischarging";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_CURRENTDISCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_CURRENTDISCHARGING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CURRENTDISCHARGING));

static char const lcmd_var_name_ESSBATTSTATE_CURRENTTIMERCHARGING[] = "CURRENTTIMERcharging";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_CURRENTTIMERCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_CURRENTTIMERCHARGING, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CURRENTTIMERCHARGING));

static char const lcmd_var_name_ESSBATTSTATE_CURRENTTIMERDISCHARGING[] = "CURRENTTIMERdischarging";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_CURRENTTIMERDISCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_CURRENTTIMERDISCHARGING, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_CURRENTTIMERDISCHARGING));

static char const lcmd_var_name_ESSBATTSTATE_DISCHARGECOMPLETE[] = "dischargeComplete";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_DISCHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_DISCHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_DISCHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_DISCHARGEVOLTTIMER[] = "dischargeVoltTimer";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_DISCHARGEVOLTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_DISCHARGEVOLTTIMER, &lcmd_type_TBUFFER, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_DISCHARGEVOLTTIMER));

static char const lcmd_var_name_ESSBATTSTATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSBATTSTATE_FAULT[] = "fault";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_FAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_FAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_IGNITION[] = "IGNITION";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_IGNITION =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_IGNITION, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_IGNITION), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_OUTVOLTSTATUS[] = "outVoltStatus";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_OUTVOLTSTATUS =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_OUTVOLTSTATUS, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_OUTVOLTSTATUS), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_OVFAULT[] = "OVfault";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_OVFAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_OVFAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_OVFAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_PRECHARGEOK[] = "prechargeOk";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_PRECHARGEOK =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_PRECHARGEOK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_PRECHARGEOK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_PRECHARGEON[] = "prechargeOn";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_PRECHARGEON =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_PRECHARGEON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_PRECHARGEON), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSBATTSTATE_PREVSTATE[] = "PREVSTATE";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_PREVSTATE =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_PREVSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_PREVSTATE));

static char const lcmd_var_name_ESSBATTSTATE_SHUTDOWNCOMPLETE[] = "shutdownComplete";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_SHUTDOWNCOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_SHUTDOWNCOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_SHUTDOWNCOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ESSBATTSTATE_STANDBYINTERVAL[] = "STANDBYINTERVAL";
static RISMDStdVariable const lcmd_var_ESSBATTSTATE_STANDBYINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_ESSBATTSTATE_STANDBYINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_STANDBYINTERVAL));

static char const lcmd_var_name_ESSBATTSTATE_STATE[] = "STATE";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_STATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ESSBATTSTATE_UVFAULT[] = "UVfault";
static RISMDInterfaceVariable const lcmd_var_ESSBATTSTATE_UVFAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_ESSBATTSTATE_UVFAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ESSBATTSTATE,LC_VD_UVFAULT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_ESSBATTSTATE[] =
{
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_BATSTATEELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_BATSTATEINTERVAL),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_BATSTATETIMEOUT),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_BATTERYSTATE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_BATTIMER),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CHARGERON),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CHARGEVOLTTIMER),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CONTACT),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CONTACTFBK),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CONTACTNEG),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CURRENTAMP),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CURRENTCHARGING),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CURRENTDISCHARGING),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CURRENTTIMERCHARGING),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_CURRENTTIMERDISCHARGING),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_DISCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_DISCHARGEVOLTTIMER),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_ENO),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_FAULT),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_IGNITION),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_OUTVOLTSTATUS),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_OVFAULT),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_PRECHARGEOK),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_PRECHARGEON),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_PREVSTATE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_SHUTDOWNCOMPLETE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_STANDBYINTERVAL),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_STATE),
  INIT_RISMDReference(&lcmd_var_ESSBATTSTATE_UVFAULT),
};

static char const lcmd_type_name_ESSBATTSTATE[] = "ESSBATTSTATE";
RISMDPOUType const lcmd_type_ESSBATTSTATE = INIT_RISMDPOUType(lcmd_type_name_ESSBATTSTATE, sizeof(LC_TD_FunctionBlock_ESSBATTSTATE), 30, lcmd_var_list_ESSBATTSTATE);
