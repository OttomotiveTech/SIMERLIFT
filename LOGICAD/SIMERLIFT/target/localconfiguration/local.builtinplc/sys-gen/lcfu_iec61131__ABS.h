/* Copyright (C) logi.cals GmbH. All rights reserved.             */

/*
** TASK :: C implementation of function ABS for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__ABS__H
#define LC_PROT_LCFU_IEC61131__ABS__H

#include <LC3CGBase.h>
#include <LC3RTLibMath.h>       /* for fabs() */

/*                            Typedefs                            */
#define DEF_LC_TD_Function_ABS_ANY(type) \
typedef struct _LC_TD_Function_ABS__##type \
{ \
  LC_TD_BOOL LC_VD_ENO; \
  LC_TD_##type LC_VD_ABS; \
} LCCG_StructAttrib LC_TD_Function_ABS__##type;

DEF_LC_TD_Function_ABS_ANY(SINT)
DEF_LC_TD_Function_ABS_ANY(INT)
DEF_LC_TD_Function_ABS_ANY(DINT)
DEF_LC_TD_Function_ABS_ANY(LINT)
DEF_LC_TD_Function_ABS_ANY(USINT)
DEF_LC_TD_Function_ABS_ANY(UINT)
DEF_LC_TD_Function_ABS_ANY(UDINT)
DEF_LC_TD_Function_ABS_ANY(ULINT)
DEF_LC_TD_Function_ABS_ANY(REAL)
DEF_LC_TD_Function_ABS_ANY(LREAL)

/*                      Initialization Macro                      */
#define LC_INIT_Function_ABS_ANY(p,type) \
{ \
  LC_INIT_##type(&((p)->LC_VD_ABS)); \
}

#define LC_INIT_Function_ABS__SINT(p)   LC_INIT_Function_ABS_ANY(p,SINT)
#define LC_INIT_Function_ABS__INT(p)    LC_INIT_Function_ABS_ANY(p,INT)
#define LC_INIT_Function_ABS__DINT(p)   LC_INIT_Function_ABS_ANY(p,DINT)
#define LC_INIT_Function_ABS__LINT(p)   LC_INIT_Function_ABS_ANY(p,LINT)
#define LC_INIT_Function_ABS__USINT(p)  LC_INIT_Function_ABS_ANY(p,USINT)
#define LC_INIT_Function_ABS__UINT(p)   LC_INIT_Function_ABS_ANY(p,UINT)
#define LC_INIT_Function_ABS__UDINT(p)  LC_INIT_Function_ABS_ANY(p,UDINT)
#define LC_INIT_Function_ABS__ULINT(p)  LC_INIT_Function_ABS_ANY(p,ULINT)
#define LC_INIT_Function_ABS__REAL(p)   LC_INIT_Function_ABS_ANY(p,REAL)
#define LC_INIT_Function_ABS__LREAL(p)  LC_INIT_Function_ABS_ANY(p,LREAL)

#define LC_MF_ABS_SET_ERR(ENOVar)       ((ENOVar)=LC_EL_false)

/*            Implementation of helper macros (inlined)           */
#define LC_MF_ABS_SINT(IN,ENOVar)     ((LC_TD_SINT)((IN) >= 0 ? (IN) : ((IN)==LC_IEC_SINT_MIN ? (LC_MF_ABS_SET_ERR((ENOVar)),(IN)) : (LC_TD_SINT)(IN)*-1)))
#define LC_MF_ABS_INT(IN,ENOVar)      ((LC_TD_INT)((IN) >= 0  ? (IN) : ((IN)==LC_IEC_INT_MIN ?  (LC_MF_ABS_SET_ERR((ENOVar)),(IN)) : (LC_TD_INT)(IN)*-1)))
#define LC_MF_ABS_DINT(IN,ENOVar)     ((LC_TD_DINT)((IN) >= 0 ? (IN) : ((IN)==LC_IEC_DINT_MIN ? (LC_MF_ABS_SET_ERR((ENOVar)),(IN)) : (LC_TD_DINT)(IN)*-1)))
#define LC_MF_ABS_LINT(IN,ENOVar)     ((LC_TD_LINT)((IN) >= 0 ? (IN) : ((IN)==LC_IEC_LINT_MIN ? (LC_MF_ABS_SET_ERR((ENOVar)),(IN)) : (LC_TD_LINT)(IN)*-1)))
#define LC_MF_ABS_USINT(IN,ENOVar)    (IN)
#define LC_MF_ABS_UINT(IN,ENOVar)     (IN)
#define LC_MF_ABS_UDINT(IN,ENOVar)    (IN)
#define LC_MF_ABS_ULINT(IN,ENOVar)    (IN)
#define LC_MF_ABS_REAL(IN,ENOVar)     ((LC_TD_REAL)LC_FABSF(IN))
#define LC_MF_ABS_LREAL(IN,ENOVar)    ((LC_TD_LREAL)LC_FABS(IN))

#define LC_MF_ABS_ANY(type,IN,ENOVar) LC_MF_ABS_##type(IN,ENOVar)

/*                       Impl (not inlined)                       */
#define lcfu_iec61131__ABS__SINT(LC_this, IN, pEPDB)  (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(SINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__INT(LC_this, IN, pEPDB)   (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(INT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__DINT(LC_this, IN, pEPDB)  (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(DINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__LINT(LC_this, IN, pEPDB)  (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(LINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__USINT(LC_this, IN, pEPDB) (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(USINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__UINT(LC_this, IN, pEPDB)  (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(UINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__UDINT(LC_this, IN, pEPDB) (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(UDINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__ULINT(LC_this, IN, pEPDB) (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(ULINT,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__REAL(LC_this, IN, pEPDB)  (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(REAL,IN,(LC_this)->LC_VD_ENO)
#define lcfu_iec61131__ABS__LREAL(LC_this, IN, pEPDB) (LC_this)->LC_VD_ABS = LC_MF_ABS_ANY(LREAL,IN,(LC_this)->LC_VD_ENO)

#endif
