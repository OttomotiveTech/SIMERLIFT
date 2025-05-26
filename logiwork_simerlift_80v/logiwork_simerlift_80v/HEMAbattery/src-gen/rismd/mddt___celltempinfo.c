#include <RISMD.h>
#include <lcdt___celltempinfo.h>

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_CELLTEMPINFO_LOCBMU[] = "LOCBMU";
static RISMDStdVariable const lcmd_var_CELLTEMPINFO_LOCBMU =
INIT_RISMDStdVariable(lcmd_var_name_CELLTEMPINFO_LOCBMU, &risMdType_USINT, offsetof(LC_TD_DataType_CELLTEMPINFO,LC_VD_LOCBMU));

static char const lcmd_var_name_CELLTEMPINFO_LOCCELL[] = "LOCCELL";
static RISMDStdVariable const lcmd_var_CELLTEMPINFO_LOCCELL =
INIT_RISMDStdVariable(lcmd_var_name_CELLTEMPINFO_LOCCELL, &risMdType_USINT, offsetof(LC_TD_DataType_CELLTEMPINFO,LC_VD_LOCCELL));

extern RISMDSimpleNumType const risMdType_SINT;
static char const lcmd_var_name_CELLTEMPINFO_TEMP[] = "TEMP";
static RISMDStdVariable const lcmd_var_CELLTEMPINFO_TEMP =
INIT_RISMDStdVariable(lcmd_var_name_CELLTEMPINFO_TEMP, &risMdType_SINT, offsetof(LC_TD_DataType_CELLTEMPINFO,LC_VD_TEMP));

static RISMDReference const lcmd_var_list_CELLTEMPINFO[] =
{
  INIT_RISMDReference(&lcmd_var_CELLTEMPINFO_LOCBMU),
  INIT_RISMDReference(&lcmd_var_CELLTEMPINFO_LOCCELL),
  INIT_RISMDReference(&lcmd_var_CELLTEMPINFO_TEMP),
};

static char const lcmd_type_name_CELLTEMPINFO[] = "CELLTEMPINFO";
RISMDCompoundType const lcmd_type_CELLTEMPINFO = INIT_RISMDCompoundType(lcmd_type_name_CELLTEMPINFO, sizeof(LC_TD_DataType_CELLTEMPINFO), 3, lcmd_var_list_CELLTEMPINFO);
