#include <RISMD.h>
#include <lcdt____initsteptype.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name__INITSTEPTYPE_S[] = "S";
static RISMDStdVariable const lcmd_var__INITSTEPTYPE_S =
INIT_RISMDStdVariable(lcmd_var_name__INITSTEPTYPE_S, &risMdType_TIME, offsetof(LC_TD_DataType__INITSTEPTYPE,LC_VD_S));

static char const lcmd_var_name__INITSTEPTYPE_T[] = "T";
static RISMDStdVariable const lcmd_var__INITSTEPTYPE_T =
INIT_RISMDStdVariable(lcmd_var_name__INITSTEPTYPE_T, &risMdType_TIME, offsetof(LC_TD_DataType__INITSTEPTYPE,LC_VD_T));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name__INITSTEPTYPE_X[] = "X";
static RISMDStdVariable const lcmd_var__INITSTEPTYPE_X =
INIT_RISMDStdVariable(lcmd_var_name__INITSTEPTYPE_X, &risMdType_BOOL, offsetof(LC_TD_DataType__INITSTEPTYPE,LC_VD_X));

static RISMDReference const lcmd_var_list__INITSTEPTYPE[] =
{
  INIT_RISMDReference(&lcmd_var__INITSTEPTYPE_S),
  INIT_RISMDReference(&lcmd_var__INITSTEPTYPE_T),
  INIT_RISMDReference(&lcmd_var__INITSTEPTYPE_X),
};

static char const lcmd_type_name__INITSTEPTYPE[] = "_INITSTEPTYPE";
RISMDCompoundType const lcmd_type__INITSTEPTYPE = INIT_RISMDCompoundType(lcmd_type_name__INITSTEPTYPE, sizeof(LC_TD_DataType__INITSTEPTYPE), 3, lcmd_var_list__INITSTEPTYPE);
