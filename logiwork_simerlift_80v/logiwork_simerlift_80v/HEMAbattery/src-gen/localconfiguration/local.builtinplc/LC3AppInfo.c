/* Copyright (C) logi.cals GmbH. All rights reserved. */
#include <LCAPI.h>
#include <LC3AppInfo.h>

void const* lc_get_application_info(LcApplicationInfoType infoType)
{
  static uint32_t const lc_fingerprint = 1915587686;
  static char const* const lc_code_image_info = "\"AAAAAAAAAAEABkFSR0UxMwAAAZc6GiPN\"";
  static char const* const lc_project_name = "HEMAbattery";
  static char const* const lc_configuration_name = "LocalConfiguration";
  static char const* const lc_resource_name = "local";
  static void const* const lc_oem_data = LC_OEM_DATA;

  switch(infoType)
  {
  case LC_APPLICATION_INFO_TYPE_FINGERPRINT:
	  return &lc_fingerprint;
  case LC_APPLICATION_INFO_TYPE_CODE_IMAGE_INFO:
	  return lc_code_image_info;
  case LC_APPLICATION_INFO_TYPE_PROJECT_NAME:
	  return lc_project_name;
  case LC_APPLICATION_INFO_TYPE_CONFIGURATION_NAME:
	  return lc_configuration_name;
  case LC_APPLICATION_INFO_TYPE_RESOURCE_NAME:
	  return lc_resource_name;
  case LC_APPLICATION_INFO_TYPE_OEM_DATA:
      return lc_oem_data;
  default:
	  return 0;
  }
}
