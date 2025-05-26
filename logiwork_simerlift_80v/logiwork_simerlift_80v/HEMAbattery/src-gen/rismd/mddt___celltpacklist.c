#include <RISMD.h>
#include <lcdt___celltpacklist.h>

static char const lcmd_type_name_CELLTPACKLIST[] = "CELLTPACKLIST";
extern RISMDCompoundType const lcmd_type_CELLTEMPINFO;
#include <lcdt___celltempinfo.h>
RISMDArrayType const lcmd_type_CELLTPACKLIST_ARR = INIT_RISMDArrayType(1,10,sizeof(LC_TD_DataType_CELLTEMPINFO),&lcmd_type_CELLTEMPINFO);
RISMDDerivedType const lcmd_type_CELLTPACKLIST = INIT_RISMDDerivedType(lcmd_type_name_CELLTPACKLIST, &lcmd_type_CELLTPACKLIST_ARR);

