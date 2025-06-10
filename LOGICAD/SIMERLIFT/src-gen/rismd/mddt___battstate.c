#include <RISMD.h>
#include <lcdt___battstate.h>

static char const lcmd_type_name_BATTSTATE[] = "BATTSTATE";
extern RISMDSimpleNumType const risMdType_USINT;
RISMDDerivedType const lcmd_type_BATTSTATE = INIT_RISMDDerivedType(lcmd_type_name_BATTSTATE, &risMdType_USINT);
