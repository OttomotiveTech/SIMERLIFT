#include <RISMD.h>
#include <lcdt___statepacklist.h>

static char const lcmd_type_name_STATEPACKLIST[] = "STATEPACKLIST";
extern RISMDDerivedType const lcmd_type_PACKSTATE;
#include <lcdt___packstate.h>
RISMDArrayType const lcmd_type_STATEPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_DataType_PACKSTATE),&lcmd_type_PACKSTATE);
RISMDDerivedType const lcmd_type_STATEPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_STATEPACKLIST, &lcmd_type_STATEPACKLIST_ARR);

