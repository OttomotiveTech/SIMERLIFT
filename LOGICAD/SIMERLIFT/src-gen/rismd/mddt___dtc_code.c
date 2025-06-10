#include <RISMD.h>
#include <lcdt___dtc_code.h>

static char const lcmd_type_name_DTC_CODE[] = "DTC_CODE";
extern RISMDSimpleNumType const risMdType_DWORD;
RISMDArrayType const lcmd_type_DTC_CODE_ARR = INIT_RISMDArrayType(1,400,sizeof(LC_TD_DWORD),&risMdType_DWORD);
RISMDDerivedType const lcmd_type_DTC_CODE = INIT_RISMDDerivedType(lcmd_type_name_DTC_CODE, &lcmd_type_DTC_CODE_ARR);

