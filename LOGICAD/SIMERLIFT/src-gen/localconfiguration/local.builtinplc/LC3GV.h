#ifndef LC3GV_H
#define LC3GV_H

/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK      :: global variable defines
** NOTES     ::
*/

/***************************************************************************
** Global Includes, Defines , Types
****************************************************************************/
#include <LCAPI.h>

#include <lcpu___hemabattery.gv.h>


typedef struct
{
  LC_TD_BOOL _LC_VD_dummy;        /* dummy structure member - to avoid empty struct, when no GVs are defined */
} LCCG_StructAttrib LC_TD_LC3_GVType;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_NONDMA_LC3_GVType(p) \

#define LC_INIT_LC3_GVType(p) \
{ \
  LC_INIT_NONDMA_LC3_GVType(p) \
}


/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_NONDMA_LC3_GVType(p,RF) \

#define LC_WINIT_LC3_GVType(p,RF) \
{ \
  LC_WINIT_NONDMA_LC3_GVType(p,RF) \
}






unsigned LC_GV_Init(LCoplck_EPDB * pEPDB, LCoplck_StartMode s);

extern LC_TD_LC3_GVType g_LC3_GVInstanceData;

#endif /* LC3GV_H */
