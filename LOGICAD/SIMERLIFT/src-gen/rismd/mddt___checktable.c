#include <RISMD.h>
#include <lcdt___checktable.h>

static char const lcmd_type_name_CHECKTABLE[] = "CHECKTABLE";
extern RISMDSimpleNumType const risMdType_BOOL;
RISMDArrayType const lcmd_type_CHECKTABLE_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_BOOL),&risMdType_BOOL);
RISMDDerivedType const lcmd_type_CHECKTABLE = INIT_RISMDDerivedType(lcmd_type_name_CHECKTABLE, &lcmd_type_CHECKTABLE_ARR);

