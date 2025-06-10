#include <LCAPI.h>
#include <LC3CGEntryData.h>

#include <lcpu___hemabattery.h>

extern LCoccFT_EntryFunc LC_PT_Exec_HEMABATTERY;
extern LCoccFT_InitFunc LC_PT_Init_HEMABATTERY;
extern LCoplck_TASK LC_vg_Task_DEFAULTTASK;
extern LC_TD_Program_HEMABATTERY LC_ProgramInstanceData_PROGRAM1;
extern LC_TD_EntryData LC_vg_CCED_PROGRAM1;

LCoplck_EPDB LC_vg_PI_EPDB_PROGRAM1 =
{
  sizeof(LCoplck_EPDB) /*  unsigned int sizeOfThis; */
  , "PROGRAM1" /*  char const * name; */
  , 256 /*  unsigned long id; */
  , &LC_PT_Exec_HEMABATTERY /*  LCoccFT_EntryFunc * entry; */
  , 0 /*  LCoccFT_PreEntryFunc * preEntry; */
  , 0 /*  LCoccFT_PostEntryFunc * postEntry; */
  , &LC_PT_Init_HEMABATTERY /*  LCoccFT_InitFunc * init; */
  , 0 /*  LCoccFT_ReInitFunc * reinit; */
  , 0 /*  LCoplck_EPDB * owner; */
  , &LC_vg_Task_DEFAULTTASK /*  LCoplck_TASK * task; */
  , &LC_ProgramInstanceData_PROGRAM1 /*  void * thisData; */
  , sizeof(LC_TD_Program_HEMABATTERY) /*  unsigned long sizeOfThisData; */
  , &LC_vg_CCED_PROGRAM1 /*  void * ccodeData; */
  , 0 /*  void * vendorData; */
  , 100 /*  unsigned long version; */
  , 0 /*  unsigned long flags; */
  , 0 /*  LCoccFT_getData * getDataFun; */
  , 0 /*  LCoccFT_setData * setDataFun; */
  , 0 /*  LCoccFT_mapDataAddress * mapDataAdrFun; */
  , 0 /*  void * eepdb; */
  , 0 /*  LCoccFT_VendorHookFunc * hookFun; */
  , 0 /*  LCoosHRCTime mEpCycleStartTime; */
  , 0 /*  unsigned mBPHandleEnabled; */
  , 0 /*  unsigned long * mHPriorTaskWaiting; */
  , 0 /*  LCoccFT_getDataError * mGetDataErrorFun; */
  , 0 /*  LCoccFT_setDataError * mSetDataErrorFun; */
  , 0 /*  LCoccFT_QueryRetainedDataSize* mQueryRetainedDataSizeFun; */
  , 0 /*  LCoccFT_GetRetainedData * mGetRetainedDataFun; */
  , 0 /*  LCoccFT_SetRetainedData * mSetRetainedDataFun; */
  , 0 /*  void * reserved1; */
  , 0 /*  void * reserved2; */
};
