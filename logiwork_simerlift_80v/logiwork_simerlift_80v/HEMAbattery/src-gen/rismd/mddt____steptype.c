#include <RISMD.h>
#include <lcdt____steptype.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name__STEPTYPE_S[] = "S";
static RISMDStdVariable const lcmd_var__STEPTYPE_S =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_S, &risMdType_TIME, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_S));

static char const lcmd_var_name__STEPTYPE_T[] = "T";
static RISMDStdVariable const lcmd_var__STEPTYPE_T =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_T, &risMdType_TIME, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_T));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name__STEPTYPE_X[] = "X";
static RISMDStdVariable const lcmd_var__STEPTYPE_X =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_X, &risMdType_BOOL, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_X));

static RISMDReference const lcmd_var_list__STEPTYPE[] =
{
  INIT_RISMDReference(&lcmd_var__STEPTYPE_S),
  INIT_RISMDReference(&lcmd_var__STEPTYPE_T),
  INIT_RISMDReference(&lcmd_var__STEPTYPE_X),
};

static char const lcmd_type_name__STEPTYPE[] = "_STEPTYPE";
RISMDCompoundType const lcmd_type__STEPTYPE = INIT_RISMDCompoundType(lcmd_type_name__STEPTYPE, sizeof(LC_TD_DataType__STEPTYPE), 3, lcmd_var_list__STEPTYPE);
