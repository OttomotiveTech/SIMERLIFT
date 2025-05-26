#include <RISMD.h>
#include <lcdt___bmstype.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_BMSTYPE_AVGCELLV[] = "AVGCELLV";
static RISMDStdVariable const lcmd_var_BMSTYPE_AVGCELLV =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_AVGCELLV, &risMdType_UINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_AVGCELLV));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_BMSTYPE_CURRENT[] = "CURRENT";
static RISMDStdVariable const lcmd_var_BMSTYPE_CURRENT =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_CURRENT, &risMdType_REAL, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_CURRENT));

static char const lcmd_var_name_BMSTYPE_DMCC[] = "DMCC";
static RISMDStdVariable const lcmd_var_BMSTYPE_DMCC =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_DMCC, &risMdType_UINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_DMCC));

static char const lcmd_var_name_BMSTYPE_DMDC[] = "DMDC";
static RISMDStdVariable const lcmd_var_BMSTYPE_DMDC =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_DMDC, &risMdType_UINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_DMDC));

static char const lcmd_var_name_BMSTYPE_ENERGY[] = "ENERGY";
static RISMDStdVariable const lcmd_var_BMSTYPE_ENERGY =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_ENERGY, &risMdType_UINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_ENERGY));

extern RISMDCompoundType const lcmd_type_CELLTEMPBMS;
static char const lcmd_var_name_BMSTYPE_MAXCELLT[] = "MAXCELLT";
static RISMDStdVariable const lcmd_var_BMSTYPE_MAXCELLT =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_MAXCELLT, &lcmd_type_CELLTEMPBMS, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_MAXCELLT));

extern RISMDCompoundType const lcmd_type_CELLVOLTBMS;
static char const lcmd_var_name_BMSTYPE_MAXCELLV[] = "MAXCELLV";
static RISMDStdVariable const lcmd_var_BMSTYPE_MAXCELLV =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_MAXCELLV, &lcmd_type_CELLVOLTBMS, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_MAXCELLV));

static char const lcmd_var_name_BMSTYPE_MINCELLT[] = "MINCELLT";
static RISMDStdVariable const lcmd_var_BMSTYPE_MINCELLT =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_MINCELLT, &lcmd_type_CELLTEMPBMS, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_MINCELLT));

static char const lcmd_var_name_BMSTYPE_MINCELLV[] = "MINCELLV";
static RISMDStdVariable const lcmd_var_BMSTYPE_MINCELLV =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_MINCELLV, &lcmd_type_CELLVOLTBMS, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_MINCELLV));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_BMSTYPE_NUMOFPACKS[] = "NUMofPACKs";
static RISMDStdVariable const lcmd_var_BMSTYPE_NUMOFPACKS =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_NUMOFPACKS, &risMdType_USINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_NUMOFPACKS));

static char const lcmd_var_name_BMSTYPE_SOC[] = "SOC";
static RISMDStdVariable const lcmd_var_BMSTYPE_SOC =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_SOC, &risMdType_USINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_SOC));

static char const lcmd_var_name_BMSTYPE_SOH[] = "SOH";
static RISMDStdVariable const lcmd_var_BMSTYPE_SOH =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_SOH, &risMdType_USINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_SOH));

extern RISMDDerivedType const lcmd_type_BMSSTATE;
static char const lcmd_var_name_BMSTYPE_STATE[] = "STATE";
static RISMDStdVariable const lcmd_var_BMSTYPE_STATE =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_STATE, &lcmd_type_BMSSTATE, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_STATE));

static char const lcmd_var_name_BMSTYPE_VOLTAGE[] = "VOLTAGE";
static RISMDStdVariable const lcmd_var_BMSTYPE_VOLTAGE =
INIT_RISMDStdVariable(lcmd_var_name_BMSTYPE_VOLTAGE, &risMdType_UINT, offsetof(LC_TD_DataType_BMSTYPE,LC_VD_VOLTAGE));

static RISMDReference const lcmd_var_list_BMSTYPE[] =
{
  INIT_RISMDReference(&lcmd_var_BMSTYPE_AVGCELLV),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_CURRENT),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_DMCC),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_DMDC),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_ENERGY),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_MAXCELLT),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_MAXCELLV),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_MINCELLT),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_MINCELLV),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_NUMOFPACKS),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_SOC),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_SOH),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_STATE),
  INIT_RISMDReference(&lcmd_var_BMSTYPE_VOLTAGE),
};

static char const lcmd_type_name_BMSTYPE[] = "BMSTYPE";
RISMDCompoundType const lcmd_type_BMSTYPE = INIT_RISMDCompoundType(lcmd_type_name_BMSTYPE, sizeof(LC_TD_DataType_BMSTYPE), 14, lcmd_var_list_BMSTYPE);
