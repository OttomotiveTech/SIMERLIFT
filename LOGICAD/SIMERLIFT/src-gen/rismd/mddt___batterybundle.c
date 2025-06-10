#include <RISMD.h>
#include <lcdt___batterybundle.h>

extern RISMDDerivedType const lcmd_type_CELLVOLTPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_AVGCELLV[] = "AVGCELLV";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_AVGCELLV =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_AVGCELLV, &lcmd_type_CELLVOLTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_AVGCELLV));

extern RISMDDerivedType const lcmd_type_ABATTPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_CURRENT[] = "CURRENT";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_CURRENT =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_CURRENT, &lcmd_type_ABATTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_CURRENT));

extern RISMDDerivedType const lcmd_type_CYCLEPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_CYCLE[] = "CYCLE";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_CYCLE =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_CYCLE, &lcmd_type_CYCLEPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_CYCLE));

extern RISMDDerivedType const lcmd_type_DMXCPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_DMCC[] = "DMCC";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_DMCC =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_DMCC, &lcmd_type_DMXCPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_DMCC));

static char const lcmd_var_name_BATTERYBUNDLE_DMDC[] = "DMDC";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_DMDC =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_DMDC, &lcmd_type_DMXCPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_DMDC));

extern RISMDDerivedType const lcmd_type_ENERGYPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_ENERGY[] = "ENERGY";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_ENERGY =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_ENERGY, &lcmd_type_ENERGYPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_ENERGY));

static char const lcmd_var_name_BATTERYBUNDLE_ENERGYREMAINING[] = "ENERGYremaining";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_ENERGYREMAINING =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_ENERGYREMAINING, &lcmd_type_ENERGYPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_ENERGYREMAINING));

extern RISMDDerivedType const lcmd_type_FAULTPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_FAULT[] = "FAULT";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_FAULT =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_FAULT, &lcmd_type_FAULTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_FAULT));

extern RISMDDerivedType const lcmd_type_CELLTPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_MAXTCELL[] = "MAXTCELL";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_MAXTCELL =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_MAXTCELL, &lcmd_type_CELLTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_MAXTCELL));

extern RISMDDerivedType const lcmd_type_CELLVPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_MAXVCELL[] = "MAXVCELL";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_MAXVCELL =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_MAXVCELL, &lcmd_type_CELLVPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_MAXVCELL));

static char const lcmd_var_name_BATTERYBUNDLE_MINTCELL[] = "MINTCELL";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_MINTCELL =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_MINTCELL, &lcmd_type_CELLTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_MINTCELL));

static char const lcmd_var_name_BATTERYBUNDLE_MINVCELL[] = "MINVCELL";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_MINVCELL =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_MINVCELL, &lcmd_type_CELLVPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_MINVCELL));

extern RISMDDerivedType const lcmd_type_SOXPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_SOC[] = "SOC";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_SOC =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_SOC, &lcmd_type_SOXPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_SOC));

static char const lcmd_var_name_BATTERYBUNDLE_SOH[] = "SOH";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_SOH =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_SOH, &lcmd_type_SOXPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_SOH));

extern RISMDDerivedType const lcmd_type_STATEPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_STATE =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_STATE, &lcmd_type_STATEPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_STATE));

extern RISMDDerivedType const lcmd_type_TEMPPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_TEMP[] = "TEMP";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_TEMP =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_TEMP, &lcmd_type_TEMPPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_TEMP));

extern RISMDDerivedType const lcmd_type_VBATTPACKLIST;
static char const lcmd_var_name_BATTERYBUNDLE_VOLTAGE[] = "VOLTAGE";
static RISMDStdVariable const lcmd_var_BATTERYBUNDLE_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_BATTERYBUNDLE_VOLTAGE, &lcmd_type_VBATTPACKLIST, offsetof(LC_TD_DataType_BATTERYBUNDLE,LC_VD_VOLTAGE));

static RISMDReference const lcmd_var_list_BATTERYBUNDLE[] =
{
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_AVGCELLV),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_CURRENT),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_CYCLE),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_DMCC),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_DMDC),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_ENERGY),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_ENERGYREMAINING),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_FAULT),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_MAXTCELL),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_MAXVCELL),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_MINTCELL),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_MINVCELL),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_SOC),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_SOH),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_STATE),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_TEMP),
  INIT_RISMDReference(&lcmd_var_BATTERYBUNDLE_VOLTAGE),
};

static char const lcmd_type_name_BATTERYBUNDLE[] = "BATTERYBUNDLE";
RISMDCompoundType const lcmd_type_BATTERYBUNDLE = INIT_RISMDCompoundType(lcmd_type_name_BATTERYBUNDLE, sizeof(LC_TD_DataType_BATTERYBUNDLE), 17, lcmd_var_list_BATTERYBUNDLE);
