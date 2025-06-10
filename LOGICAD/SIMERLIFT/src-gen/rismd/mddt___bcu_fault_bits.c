#include <RISMD.h>
#include <lcdt___bcu_fault_bits.h>

static char const lcmd_type_name_BCU_FAULT_BITS[] = "BCU_FAULT_BITS";
extern RISMDSimpleNumType const risMdType_BYTE;
RISMDDerivedType const lcmd_type_BCU_FAULT_BITS = INIT_RISMDDerivedType(lcmd_type_name_BCU_FAULT_BITS, &risMdType_BYTE);
