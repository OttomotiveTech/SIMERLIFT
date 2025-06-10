#include <LC3TDIECTypes.h>
#include <LC3CGEntryData.h>
#include <LC3CGConfig.h>
#include <LCAPI.h>

/***************************************************************************
** StringStackBuffer for a single task
****************************************************************************/

LcCgChar LC_TASK_StringStackBuffer_DEFAULTTASK[LC3_TASK_STRING_STACK_SIZE];

LC_TD_STRING_STACK LC_vg_StringStack_DEFAULTTASK = {
   &LC_TASK_StringStackBuffer_DEFAULTTASK[0]
  ,&LC_TASK_StringStackBuffer_DEFAULTTASK[0]
  ,&LC_TASK_StringStackBuffer_DEFAULTTASK[0] + LC3_TASK_STRING_STACK_SIZE - 1
};

LCoplck_TASK LC_vg_Task_DEFAULTTASK = {
  sizeof(LCoplck_TASK)                                       /** size of myself, must be initialized in ccode with sizeof(LCoplck_TASK_1_Impl) */\
  ,"DEFAULTTASK"                                              /** name to identify task */\
  ,10                                                      /** ID   to identify task */\
  ,0                                                          /** single Variable - ad hoc tasks        */\
  ,0                                                          /** constant single value (this way the code can disable itself) */\
  ,0                                                          /** interval variable (frequency) */\
  ,((LCoosHRCTime)5000 * RT_TARGET_TIME_FREQU) / 1000000      /** constant frequency */\
  ,0                                                          /** priority variable */\
  ,38229                                             /** constant priority */\
  ,0                                                          /** version of TASK running */\
  ,0                                                          /** flags for run time behaviour */\
  ,0                                                          /** task specific getData, use 0 for default getData */\
  ,0                                                          /** task specific setData, use 0 for default setData */\
  ,0                                                          /** reserved for internal usage */\
  ,0                                                          /** reserved for future use, should be initialized with 0 */\
  ,0                                                          /** reserved for future use, should be initialized with 0 */\
};
