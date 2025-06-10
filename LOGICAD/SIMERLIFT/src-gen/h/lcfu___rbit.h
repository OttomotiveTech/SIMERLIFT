#ifndef LC_PROT_LCFU___RBIT__H
#define LC_PROT_LCFU___RBIT__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__SHR.h>
#include <lcfu_iec61131__SUB.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_RBIT
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_LWORD LC_VD_OUTBIT;
} LCCG_StructAttrib LC_TD_Function_RBIT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_RBIT(p) \
{ \
  LC_INIT_LWORD(&((p)->LC_VD_OUTBIT)); \
}

/*                            Prototype                        */
void  lcfu___RBIT(LC_TD_Function_RBIT* LC_this, LC_TD_INT LC_VD_START, LC_TD_INT LC_VD_LEN, LC_TD_LWORD LC_VD_INBIT, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
