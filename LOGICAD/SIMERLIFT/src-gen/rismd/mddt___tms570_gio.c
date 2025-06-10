#include <RISMD.h>
#include <lcdt___tms570_gio.h>

static char const lcmd_type_name_TMS570_GIO[] = "TMS570_GIO";
extern RISMDSimpleNumType const risMdType_UDINT;
RISMDDerivedType const lcmd_type_TMS570_GIO = INIT_RISMDDerivedType(lcmd_type_name_TMS570_GIO, &risMdType_UDINT);
