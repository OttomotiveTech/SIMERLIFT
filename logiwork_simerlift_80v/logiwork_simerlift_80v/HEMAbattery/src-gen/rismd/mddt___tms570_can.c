#include <RISMD.h>
#include <lcdt___tms570_can.h>

static char const lcmd_type_name_TMS570_CAN[] = "TMS570_CAN";
extern RISMDSimpleNumType const risMdType_UDINT;
RISMDDerivedType const lcmd_type_TMS570_CAN = INIT_RISMDDerivedType(lcmd_type_name_TMS570_CAN, &risMdType_UDINT);
