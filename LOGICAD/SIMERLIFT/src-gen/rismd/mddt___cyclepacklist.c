#include <RISMD.h>
#include <lcdt___cyclepacklist.h>

static char const lcmd_type_name_CYCLEPACKLIST[] = "CYCLEPACKLIST";
extern RISMDSimpleNumType const risMdType_UINT;
RISMDArrayType const lcmd_type_CYCLEPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_UINT),&risMdType_UINT);
RISMDDerivedType const lcmd_type_CYCLEPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_CYCLEPACKLIST, &lcmd_type_CYCLEPACKLIST_ARR);

