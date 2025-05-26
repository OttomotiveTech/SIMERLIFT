#include <RISMD.h>
#include <lcdt___cellvoltpacklist.h>

static char const lcmd_type_name_CELLVOLTPACKLIST[] = "CELLVOLTPACKLIST";
extern RISMDSimpleNumType const risMdType_UINT;
RISMDArrayType const lcmd_type_CELLVOLTPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_UINT),&risMdType_UINT);
RISMDDerivedType const lcmd_type_CELLVOLTPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_CELLVOLTPACKLIST, &lcmd_type_CELLVOLTPACKLIST_ARR);

