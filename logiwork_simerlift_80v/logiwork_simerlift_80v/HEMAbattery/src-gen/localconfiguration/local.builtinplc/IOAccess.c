#include <LCAPIIOAcc.h>
#include <LC3GlobalsDMA.h>
#include <LC3GV.h>
#include <string.h>

LcIOAccCopyRc lc_ioacc_copyInputData(
  LcIOAccServiceId serviceId, uint8_t const* ioInputData, LcIOAccSegmentSize inputBitSize, LcIOAccAdditionalData *additionalData)
{
  return LC_IOACC_COPY_RC_INV_SERVICE_ID;
}

LcIOAccCopyRc lc_ioacc_copyOutputData(
  LcIOAccServiceId serviceId, uint8_t* ioOutputData, LcIOAccSegmentSize outputBitSize, LcIOAccAdditionalData* additionalData)
{
  return LC_IOACC_COPY_RC_INV_SERVICE_ID;
}

LcIOAccCopyRc lc_ioacc_copyMemoryDataToVariables(
  LcIOAccServiceId serviceId, uint8_t const* ioInputData, LcIOAccSegmentSize inputBitSize, LcIOAccAdditionalData *additionalData)
{
  return LC_IOACC_COPY_RC_INV_SERVICE_ID;
}

LcIOAccCopyRc lc_ioacc_copyMemoryDataFromVariables(
  LcIOAccServiceId serviceId, uint8_t* ioOutputData, LcIOAccSegmentSize outputBitSize, LcIOAccAdditionalData* additionalData)
{
  return LC_IOACC_COPY_RC_INV_SERVICE_ID;
}

LcIOAccInfoRc lc_ioacc_getServiceInfoByName(char const* const serviceName, LcIOAccServiceInfo* serviceInfo)
{
  return LC_IOACC_INFO_RC_SERVICE_NOT_FOUND;
}

