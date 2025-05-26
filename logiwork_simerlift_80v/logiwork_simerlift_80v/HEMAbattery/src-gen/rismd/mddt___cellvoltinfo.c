#include <RISMD.h>
#include <lcdt___cellvoltinfo.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_CELLVOLTINFO_LOCBMU[] = "LOCBMU";
static RISMDStdVariable const lcmd_var_CELLVOLTINFO_LOCBMU =
INIT_RISMDStdVariable(lcmd_var_name_CELLVOLTINFO_LOCBMU, &risMdType_USINT, offsetof(LC_TD_DataType_CELLVOLTINFO,LC_VD_LOCBMU));

static char const lcmd_var_name_CELLVOLTINFO_LOCCELL[] = "LOCCELL";
static RISMDStdVariable const lcmd_var_CELLVOLTINFO_LOCCELL =
INIT_RISMDStdVariable(lcmd_var_name_CELLVOLTINFO_LOCCELL, &risMdType_USINT, offsetof(LC_TD_DataType_CELLVOLTINFO,LC_VD_LOCCELL));

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_CELLVOLTINFO_VOLT[] = "VOLT";
static RISMDStdVariable const lcmd_var_CELLVOLTINFO_VOLT =
INIT_RISMDStdVariable(lcmd_var_name_CELLVOLTINFO_VOLT, &risMdType_UINT, offsetof(LC_TD_DataType_CELLVOLTINFO,LC_VD_VOLT));

static RISMDReference const lcmd_var_list_CELLVOLTINFO[] =
{
  INIT_RISMDReference(&lcmd_var_CELLVOLTINFO_LOCBMU),
  INIT_RISMDReference(&lcmd_var_CELLVOLTINFO_LOCCELL),
  INIT_RISMDReference(&lcmd_var_CELLVOLTINFO_VOLT),
};

static char const lcmd_type_name_CELLVOLTINFO[] = "CELLVOLTINFO";
RISMDCompoundType const lcmd_type_CELLVOLTINFO = INIT_RISMDCompoundType(lcmd_type_name_CELLVOLTINFO, sizeof(LC_TD_DataType_CELLVOLTINFO), 3, lcmd_var_list_CELLVOLTINFO);
