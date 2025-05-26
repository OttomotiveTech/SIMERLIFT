#include <RISMD.h>
#include <lcdt___hvcufaults.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_HVCUFAULTS_BATTERY_PACKET[] = "BATTERY_PACKET";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_BATTERY_PACKET =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_BATTERY_PACKET, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_BATTERY_PACKET));

static char const lcmd_var_name_HVCUFAULTS_BCU_WAKE_UP[] = "BCU_WAKE_UP";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_BCU_WAKE_UP =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_BCU_WAKE_UP, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_BCU_WAKE_UP));

static char const lcmd_var_name_HVCUFAULTS_CHARGE[] = "CHARGE";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_CHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_CHARGE, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_CHARGE));

static char const lcmd_var_name_HVCUFAULTS_CHARGE_CONTACTOR[] = "CHARGE_CONTACTOR";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_CHARGE_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_CHARGE_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_CHARGE_CONTACTOR));

static char const lcmd_var_name_HVCUFAULTS_CHARGE_OVERCURRENT[] = "CHARGE_OVERCURRENT";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_CHARGE_OVERCURRENT =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_CHARGE_OVERCURRENT, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_CHARGE_OVERCURRENT));

static char const lcmd_var_name_HVCUFAULTS_CHARGE_OVERCURRENTINSTANT[] = "CHARGE_OVERCURRENTinstant";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_CHARGE_OVERCURRENTINSTANT =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_CHARGE_OVERCURRENTINSTANT, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_CHARGE_OVERCURRENTINSTANT));

static char const lcmd_var_name_HVCUFAULTS_CURRENT_SENSOR[] = "CURRENT_SENSOR";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_CURRENT_SENSOR =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_CURRENT_SENSOR, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_CURRENT_SENSOR));

static char const lcmd_var_name_HVCUFAULTS_DISCHARGE[] = "DISCHARGE";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_DISCHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_DISCHARGE, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_DISCHARGE));

static char const lcmd_var_name_HVCUFAULTS_DISCHARGE_OVERCURRENT[] = "DISCHARGE_OVERCURRENT";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_DISCHARGE_OVERCURRENT =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_DISCHARGE_OVERCURRENT, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_DISCHARGE_OVERCURRENT));

static char const lcmd_var_name_HVCUFAULTS_DISCHARGE_OVERCURRENTINSTANT[] = "DISCHARGE_OVERCURRENTinstant";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_DISCHARGE_OVERCURRENTINSTANT =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_DISCHARGE_OVERCURRENTINSTANT, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_DISCHARGE_OVERCURRENTINSTANT));

static char const lcmd_var_name_HVCUFAULTS_HVIL[] = "HVIL";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_HVIL =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_HVIL, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_HVIL));

static char const lcmd_var_name_HVCUFAULTS_ISOLATION[] = "ISOLATION";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_ISOLATION =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_ISOLATION, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_ISOLATION));

static char const lcmd_var_name_HVCUFAULTS_NEG_CONTACTOR[] = "NEG_CONTACTOR";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_NEG_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_NEG_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_NEG_CONTACTOR));

static char const lcmd_var_name_HVCUFAULTS_NO_BATTERY_PACK_FOUND[] = "NO_BATTERY_PACK_FOUND";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_NO_BATTERY_PACK_FOUND =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_NO_BATTERY_PACK_FOUND, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_NO_BATTERY_PACK_FOUND));

static char const lcmd_var_name_HVCUFAULTS_PLUS_CONTACTOR[] = "PLUS_CONTACTOR";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_PLUS_CONTACTOR =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_PLUS_CONTACTOR, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_PLUS_CONTACTOR));

static char const lcmd_var_name_HVCUFAULTS_PRECHARGE[] = "PRECHARGE";
static RISMDStdVariable const lcmd_var_HVCUFAULTS_PRECHARGE =
INIT_RISMDStdVariable(lcmd_var_name_HVCUFAULTS_PRECHARGE, &risMdType_BOOL, offsetof(LC_TD_DataType_HVCUFAULTS,LC_VD_PRECHARGE));

static RISMDReference const lcmd_var_list_HVCUFAULTS[] =
{
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_BATTERY_PACKET),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_BCU_WAKE_UP),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_CHARGE),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_CHARGE_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_CHARGE_OVERCURRENT),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_CHARGE_OVERCURRENTINSTANT),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_CURRENT_SENSOR),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_DISCHARGE),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_DISCHARGE_OVERCURRENT),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_DISCHARGE_OVERCURRENTINSTANT),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_HVIL),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_ISOLATION),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_NEG_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_NO_BATTERY_PACK_FOUND),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_PLUS_CONTACTOR),
  INIT_RISMDReference(&lcmd_var_HVCUFAULTS_PRECHARGE),
};

static char const lcmd_type_name_HVCUFAULTS[] = "HVCUFAULTS";
RISMDCompoundType const lcmd_type_HVCUFAULTS = INIT_RISMDCompoundType(lcmd_type_name_HVCUFAULTS, sizeof(LC_TD_DataType_HVCUFAULTS), 16, lcmd_var_list_HVCUFAULTS);
