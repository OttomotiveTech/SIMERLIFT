#include <RISMD.h>
#include <lcdt___energypacklist.h>

static char const lcmd_type_name_ENERGYPACKLIST[] = "ENERGYPACKLIST";
extern RISMDSimpleNumType const risMdType_USINT;
RISMDArrayType const lcmd_type_ENERGYPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_USINT),&risMdType_USINT);
RISMDDerivedType const lcmd_type_ENERGYPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_ENERGYPACKLIST, &lcmd_type_ENERGYPACKLIST_ARR);

