#include <RISMD.h>
#include <lcdt___celltempbms.h>

extern RISMDCompoundType const lcmd_type_CELLTEMPINFO;
static char const lcmd_var_name_CELLTEMPBMS_CELL[] = "CELL";
static RISMDStdVariable const lcmd_var_CELLTEMPBMS_CELL =
INIT_RISMDStdVariable(lcmd_var_name_CELLTEMPBMS_CELL, &lcmd_type_CELLTEMPINFO, offsetof(LC_TD_DataType_CELLTEMPBMS,LC_VD_CELL));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_CELLTEMPBMS_PACK[] = "PACK";
static RISMDStdVariable const lcmd_var_CELLTEMPBMS_PACK =
INIT_RISMDStdVariable(lcmd_var_name_CELLTEMPBMS_PACK, &risMdType_USINT, offsetof(LC_TD_DataType_CELLTEMPBMS,LC_VD_PACK));

static RISMDReference const lcmd_var_list_CELLTEMPBMS[] =
{
  INIT_RISMDReference(&lcmd_var_CELLTEMPBMS_CELL),
  INIT_RISMDReference(&lcmd_var_CELLTEMPBMS_PACK),
};

static char const lcmd_type_name_CELLTEMPBMS[] = "CELLTEMPBMS";
RISMDCompoundType const lcmd_type_CELLTEMPBMS = INIT_RISMDCompoundType(lcmd_type_name_CELLTEMPBMS, sizeof(LC_TD_DataType_CELLTEMPBMS), 2, lcmd_var_list_CELLTEMPBMS);
