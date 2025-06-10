#include <RISMD.h>
#include <lcdt___cellvpacklist.h>

static char const lcmd_type_name_CELLVPACKLIST[] = "CELLVPACKLIST";
extern RISMDCompoundType const lcmd_type_CELLVOLTINFO;
#include <lcdt___cellvoltinfo.h>
RISMDArrayType const lcmd_type_CELLVPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_DataType_CELLVOLTINFO),&lcmd_type_CELLVOLTINFO);
RISMDDerivedType const lcmd_type_CELLVPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_CELLVPACKLIST, &lcmd_type_CELLVPACKLIST_ARR);

