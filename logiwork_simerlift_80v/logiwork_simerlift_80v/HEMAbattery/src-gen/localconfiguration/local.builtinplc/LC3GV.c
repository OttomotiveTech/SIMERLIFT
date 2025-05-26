/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK      :: global variable implementation
** NOTES     ::
*/

/***************************************************************************
** Global Includes, Defines , Types
****************************************************************************/
#include <LC3Globals.h>
/*
** This-Data of GVs
*/
LC_TD_LC3_GVType g_LC3_GVInstanceData;

/*
** Implicit array nodes of resource GVs
*/


unsigned LC_GV_Init
(
  LCoplck_EPDB * pEPDB
 ,LCoplck_StartMode s
)
{
 if (s==LCoplck_ColdStart)
    {
     LC_INIT_LC3_GVType(&g_LC3_GVInstanceData);
    }
 else if (s==LCoplck_WarmStart)
    {
     LC_WINIT_LC3_GVType(&g_LC3_GVInstanceData,0);
    }
 return 0;
}
