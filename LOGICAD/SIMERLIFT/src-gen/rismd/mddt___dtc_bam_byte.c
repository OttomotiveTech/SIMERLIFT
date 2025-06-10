#include <RISMD.h>
#include <lcdt___dtc_bam_byte.h>

static char const lcmd_type_name_DTC_BAM_BYTE[] = "DTC_BAM_BYTE";
extern RISMDSimpleNumType const risMdType_BYTE;
RISMDArrayType const lcmd_type_DTC_BAM_BYTE_ARR = INIT_RISMDArrayType(0,400,sizeof(LC_TD_BYTE),&risMdType_BYTE);
RISMDDerivedType const lcmd_type_DTC_BAM_BYTE = INIT_RISMDDerivedType(lcmd_type_name_DTC_BAM_BYTE, &lcmd_type_DTC_BAM_BYTE_ARR);

