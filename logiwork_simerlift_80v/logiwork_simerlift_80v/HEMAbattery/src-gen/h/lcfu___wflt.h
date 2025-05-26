#ifndef LC_PROT_LCFU___WFLT__H
#define LC_PROT_LCFU___WFLT__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__DIV.h>
#include <lcfu_iec61131__SHL.h>
#include <lcfu_iec61131__SHR.h>
#include <lcfu_iec61131__SUB.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_WFLT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LWORD LC_VD_OUTBIT;
} LCCG_StructAttrib LC_TD_Function_WFLT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_WFLT(p) \
{ \
  LC_INIT_LWORD(&((p)->LC_VD_OUTBIT)); \
}

/*                            Prototype                        */
void  lcfu___WFLT(LC_TD_Function_WFLT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LREAL LC_VD_PRM, LC_TD_LREAL LC_VD_OFS, LC_TD_LREAL LC_VD_RES, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
