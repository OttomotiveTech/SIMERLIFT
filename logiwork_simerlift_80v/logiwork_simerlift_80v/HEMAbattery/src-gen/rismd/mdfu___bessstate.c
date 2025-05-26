#include <RISMD.h>
#include <lcfu___bessstate.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name_BESSSTATE_BATSTATEELAPSEDTIME[] = "BATSTATEELAPSEDTIME";
static RISMDStdVariable const lcmd_var_BESSSTATE_BATSTATEELAPSEDTIME =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_BATSTATEELAPSEDTIME, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_BATSTATEELAPSEDTIME));

static char const lcmd_var_name_BESSSTATE_BATSTATEINTERVAL[] = "BATSTATEINTERVAL";
static RISMDStdVariable const lcmd_var_BESSSTATE_BATSTATEINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_BATSTATEINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_BATSTATEINTERVAL));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_BESSSTATE_BATSTATETIMEOUT[] = "BATSTATETIMEOUT";
static RISMDStdVariable const lcmd_var_BESSSTATE_BATSTATETIMEOUT =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_BATSTATETIMEOUT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_BATSTATETIMEOUT));

extern RISMDDerivedType const lcmd_type_BATTSTATE;
static char const lcmd_var_name_BESSSTATE_BATTERYSTATE[] = "BATTERYSTATE";
static RISMDStdVariable const lcmd_var_BESSSTATE_BATTERYSTATE =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_BATTERYSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_BATTERYSTATE));

extern RISMDPOUType const lcmd_type_TON;
static char const lcmd_var_name_BESSSTATE_BATTIMER[] = "BATTIMER";
static RISMDStdVariable const lcmd_var_BESSSTATE_BATTIMER =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_BATTIMER, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_BATTIMER));

static char const lcmd_var_name_BESSSTATE_CHARGECOMPLETE[] = "chargeComplete";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_CHARGERON[] = "chargerON";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CHARGERON =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CHARGERON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CHARGERON), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_TBUFFER;
static char const lcmd_var_name_BESSSTATE_CHARGEVOLTTIMER[] = "chargeVoltTimer";
static RISMDStdVariable const lcmd_var_BESSSTATE_CHARGEVOLTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_CHARGEVOLTTIMER, &lcmd_type_TBUFFER, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CHARGEVOLTTIMER));

static char const lcmd_var_name_BESSSTATE_CONTACT[] = "contact";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CONTACT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CONTACT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CONTACT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BESSSTATE_CONTACTFBK[] = "contactFbk";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CONTACTFBK =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CONTACTFBK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CONTACTFBK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_CONTACTNEG[] = "contactNeg";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CONTACTNEG =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CONTACTNEG, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CONTACTNEG), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BESSSTATE_CURRENTAMP[] = "currentAmp";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_CURRENTAMP =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_CURRENTAMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CURRENTAMP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_CURRENTCHARGING[] = "currentCharging";
static RISMDStdVariable const lcmd_var_BESSSTATE_CURRENTCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_CURRENTCHARGING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CURRENTCHARGING));

static char const lcmd_var_name_BESSSTATE_CURRENTDISCHARGING[] = "currentDischarging";
static RISMDStdVariable const lcmd_var_BESSSTATE_CURRENTDISCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_CURRENTDISCHARGING, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CURRENTDISCHARGING));

static char const lcmd_var_name_BESSSTATE_CURRENTTIMERCHARGING[] = "CURRENTTIMERcharging";
static RISMDStdVariable const lcmd_var_BESSSTATE_CURRENTTIMERCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_CURRENTTIMERCHARGING, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CURRENTTIMERCHARGING));

static char const lcmd_var_name_BESSSTATE_CURRENTTIMERDISCHARGING[] = "CURRENTTIMERdischarging";
static RISMDStdVariable const lcmd_var_BESSSTATE_CURRENTTIMERDISCHARGING =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_CURRENTTIMERDISCHARGING, &lcmd_type_TON, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_CURRENTTIMERDISCHARGING));

static char const lcmd_var_name_BESSSTATE_DISCHARGECOMPLETE[] = "dischargeComplete";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_DISCHARGECOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_DISCHARGECOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_DISCHARGECOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_DISCHARGEVOLTTIMER[] = "dischargeVoltTimer";
static RISMDStdVariable const lcmd_var_BESSSTATE_DISCHARGEVOLTTIMER =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_DISCHARGEVOLTTIMER, &lcmd_type_TBUFFER, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_DISCHARGEVOLTTIMER));

static char const lcmd_var_name_BESSSTATE_ENO[] = "ENO";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_ENO =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BESSSTATE_FAULT[] = "fault";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_FAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_FAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_FAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_IGNITION[] = "IGNITION";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_IGNITION =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_IGNITION, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_IGNITION), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_OVFAULT[] = "OVfault";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_OVFAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_OVFAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_OVFAULT), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_PRECHARGEOK[] = "prechargeOk";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_PRECHARGEOK =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_PRECHARGEOK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_PRECHARGEOK), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_PRECHARGEON[] = "prechargeOn";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_PRECHARGEON =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_PRECHARGEON, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_PRECHARGEON), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BESSSTATE_PREVSTATE[] = "PREVSTATE";
static RISMDStdVariable const lcmd_var_BESSSTATE_PREVSTATE =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_PREVSTATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_PREVSTATE));

static char const lcmd_var_name_BESSSTATE_SHUTDOWNCOMPLETE[] = "shutdownComplete";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_SHUTDOWNCOMPLETE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_SHUTDOWNCOMPLETE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_SHUTDOWNCOMPLETE), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_BESSSTATE_STANDBYINTERVAL[] = "STANDBYINTERVAL";
static RISMDStdVariable const lcmd_var_BESSSTATE_STANDBYINTERVAL =
INIT_RISMDStdVariable(lcmd_var_name_BESSSTATE_STANDBYINTERVAL, &risMdType_TIME, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_STANDBYINTERVAL));

static char const lcmd_var_name_BESSSTATE_STATE[] = "STATE";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_STATE =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_STATE, &lcmd_type_BATTSTATE, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_STATE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_BESSSTATE_UVFAULT[] = "UVfault";
static RISMDInterfaceVariable const lcmd_var_BESSSTATE_UVFAULT =
INIT_RISMDInterfaceVariable(lcmd_var_name_BESSSTATE_UVFAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_BESSSTATE,LC_VD_UVFAULT), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_BESSSTATE[] =
{
  INIT_RISMDReference(&lcmd_var_BESSSTATE_BATSTATEELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_BATSTATEINTERVAL),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_BATSTATETIMEOUT),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_BATTERYSTATE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_BATTIMER),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CHARGERON),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CHARGEVOLTTIMER),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CONTACT),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CONTACTFBK),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CONTACTNEG),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CURRENTAMP),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CURRENTCHARGING),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CURRENTDISCHARGING),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CURRENTTIMERCHARGING),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_CURRENTTIMERDISCHARGING),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_DISCHARGECOMPLETE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_DISCHARGEVOLTTIMER),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_ENO),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_FAULT),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_IGNITION),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_OVFAULT),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_PRECHARGEOK),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_PRECHARGEON),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_PREVSTATE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_SHUTDOWNCOMPLETE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_STANDBYINTERVAL),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_STATE),
  INIT_RISMDReference(&lcmd_var_BESSSTATE_UVFAULT),
};

static char const lcmd_type_name_BESSSTATE[] = "BESSSTATE";
RISMDPOUType const lcmd_type_BESSSTATE = INIT_RISMDPOUType(lcmd_type_name_BESSSTATE, sizeof(LC_TD_FunctionBlock_BESSSTATE), 29, lcmd_var_list_BESSSTATE);
