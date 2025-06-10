#include <RISMD.h>
#include <lcdt___dmxcpacklist.h>

static char const lcmd_type_name_DMXCPACKLIST[] = "DMXCPACKLIST";
extern RISMDSimpleNumType const risMdType_REAL;
RISMDArrayType const lcmd_type_DMXCPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_REAL),&risMdType_REAL);
RISMDDerivedType const lcmd_type_DMXCPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_DMXCPACKLIST, &lcmd_type_DMXCPACKLIST_ARR);

