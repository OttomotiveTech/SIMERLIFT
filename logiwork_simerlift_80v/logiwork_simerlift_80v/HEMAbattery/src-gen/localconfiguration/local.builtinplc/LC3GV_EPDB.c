#include <LCAPI.h>
#include <LC3CGEntryData.h>
#include <LC3Globals.h>

extern LC_TD_LC3_GVType g_LC3_GVInstanceData;

LC_TD_EntryData LC_GV_CCED =
{
  0, /* unsigned long reloadVersion */
  0 /* LC_TD_STRING_STACK *stringStack */
};

LCoplck_EPDB LC_vg_GV_EPDB =
{
  sizeof(LCoplck_EPDB) /*  unsigned int sizeOfThis; */
  ,"LC3_GVInstance" /*  char const * name; */
  ,2 /*  unsigned long id; */
  ,0 /*  LCoccFT_EntryFunc * entry; */
  ,0 /*  LCoccFT_PreEntryFunc * preEntry; */
  ,0 /*  LCoccFT_PostEntryFunc * postEntry; */
  ,&LC_GV_Init /*  LCoccFT_InitFunc * init; */
  ,0 /*  LCoccFT_ReInitFunc * reinit; */
  ,0 /*  LCoplck_EPDB * owner; */
  ,0 /*  LCoplck_TASK * task; */
  ,&g_LC3_GVInstanceData /*  void * thisData; */
  ,sizeof(g_LC3_GVInstanceData) /*  unsigned long sizeOfThisData; */
  ,&LC_GV_CCED /*  void * ccodeData; */
  ,0 /*  void * vendorData; */
  ,1366061479 /*  unsigned long version; */
  ,8 /* = LCoplck_FLAGS_ISA_GLOBVAR_EP *//*  unsigned long flags; */
  ,0 /*  LCoccFT_getData * getDataFun; */
  ,0 /*  LCoccFT_setData * setDataFun; */
  ,0 /*  LCoccFT_mapDataAddress * mapDataAdrFun; */
  ,0 /*  void * eepdb; */
  ,0 /*  LCoccFT_VendorHookFunc * hookFun; */
  ,0 /*  LCoosHRCTime mEpCycleStartTime; */
  ,0 /*  unsigned mBPHandleEnabled; */
  ,0 /*  unsigned long * mHPriorTaskWaiting; */
  ,0 /*  LCoccFT_getDataError * mGetDataErrorFun; */
  ,0 /*  LCoccFT_setDataError * mSetDataErrorFun; */
  ,0 /*  LCoccFT_QueryRetainedDataSize* mQueryRetainedDataSizeFun; */
  ,0 /*  LCoccFT_GetRetainedData * mGetRetainedDataFun; */
  ,0 /*  LCoccFT_SetRetainedData * mSetRetainedDataFun; */
  ,0 /*  void * reserved1; */
  ,0 /*  void * reserved2; */
};
