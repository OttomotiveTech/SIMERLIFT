#include <RISMD.h>
#include <lcdt___cellvoltbms.h>

extern RISMDCompoundType const lcmd_type_CELLVOLTINFO;
static char const lcmd_var_name_CELLVOLTBMS_CELL[] = "CELL";
static RISMDStdVariable const lcmd_var_CELLVOLTBMS_CELL =
INIT_RISMDStdVariable(lcmd_var_name_CELLVOLTBMS_CELL, &lcmd_type_CELLVOLTINFO, offsetof(LC_TD_DataType_CELLVOLTBMS,LC_VD_CELL));

extern RISMDSimpleNumType const risMdType_USINT;
static char const lcmd_var_name_CELLVOLTBMS_PACK[] = "PACK";
static RISMDStdVariable const lcmd_var_CELLVOLTBMS_PACK =
INIT_RISMDStdVariable(lcmd_var_name_CELLVOLTBMS_PACK, &risMdType_USINT, offsetof(LC_TD_DataType_CELLVOLTBMS,LC_VD_PACK));

static RISMDReference const lcmd_var_list_CELLVOLTBMS[] =
{
  INIT_RISMDReference(&lcmd_var_CELLVOLTBMS_CELL),
  INIT_RISMDReference(&lcmd_var_CELLVOLTBMS_PACK),
};

static char const lcmd_type_name_CELLVOLTBMS[] = "CELLVOLTBMS";
RISMDCompoundType const lcmd_type_CELLVOLTBMS = INIT_RISMDCompoundType(lcmd_type_name_CELLVOLTBMS, sizeof(LC_TD_DataType_CELLVOLTBMS), 2, lcmd_var_list_CELLVOLTBMS);
