/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function SEL for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__SEL_ANY__H
#define LC_PROT_LCFU_IEC61131__SEL_ANY__H

#include <LC3CGBase.h>

/* support for elementary datatypes -------------------------- */
/*                            Typedefs                         */
/* for SEL_Typed */
#define DEF_LC_TD_Function_SEL_Typed(type) \
typedef struct _LC_TD_Function_SEL_##type \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	LC_TD_##type LC_VD_SEL_##type; \
} LCCG_StructAttrib LC_TD_Function_SEL_##type;

DEF_LC_TD_Function_SEL_Typed(BOOL)
DEF_LC_TD_Function_SEL_Typed(SINT)
DEF_LC_TD_Function_SEL_Typed(INT)
DEF_LC_TD_Function_SEL_Typed(DINT)
DEF_LC_TD_Function_SEL_Typed(LINT)
DEF_LC_TD_Function_SEL_Typed(USINT)
DEF_LC_TD_Function_SEL_Typed(UINT)
DEF_LC_TD_Function_SEL_Typed(UDINT)
DEF_LC_TD_Function_SEL_Typed(ULINT)
DEF_LC_TD_Function_SEL_Typed(BYTE)
DEF_LC_TD_Function_SEL_Typed(WORD)
DEF_LC_TD_Function_SEL_Typed(DWORD)
DEF_LC_TD_Function_SEL_Typed(LWORD)
DEF_LC_TD_Function_SEL_Typed(REAL)
DEF_LC_TD_Function_SEL_Typed(LREAL)
DEF_LC_TD_Function_SEL_Typed(TIME)
DEF_LC_TD_Function_SEL_Typed(DATE)
DEF_LC_TD_Function_SEL_Typed(TOD)
DEF_LC_TD_Function_SEL_Typed(DT)
DEF_LC_TD_Function_SEL_Typed(CHAR)
DEF_LC_TD_Function_SEL_Typed(STRING)

/* for SEL */
#define DEF_LC_TD_Function_SEL_ANY(type) \
typedef struct _LC_TD_Function_SEL__##type \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	LC_TD_##type LC_VD_SEL; \
} LCCG_StructAttrib LC_TD_Function_SEL__##type;

DEF_LC_TD_Function_SEL_ANY(BOOL)
DEF_LC_TD_Function_SEL_ANY(SINT)
DEF_LC_TD_Function_SEL_ANY(INT)
DEF_LC_TD_Function_SEL_ANY(DINT)
DEF_LC_TD_Function_SEL_ANY(LINT)
DEF_LC_TD_Function_SEL_ANY(USINT)
DEF_LC_TD_Function_SEL_ANY(UINT)
DEF_LC_TD_Function_SEL_ANY(UDINT)
DEF_LC_TD_Function_SEL_ANY(ULINT)
DEF_LC_TD_Function_SEL_ANY(BYTE)
DEF_LC_TD_Function_SEL_ANY(WORD)
DEF_LC_TD_Function_SEL_ANY(DWORD)
DEF_LC_TD_Function_SEL_ANY(LWORD)
DEF_LC_TD_Function_SEL_ANY(REAL)
DEF_LC_TD_Function_SEL_ANY(LREAL)
DEF_LC_TD_Function_SEL_ANY(TIME)
DEF_LC_TD_Function_SEL_ANY(DATE)
DEF_LC_TD_Function_SEL_ANY(TOD)
DEF_LC_TD_Function_SEL_ANY(DT)
DEF_LC_TD_Function_SEL_ANY(CHAR)
DEF_LC_TD_Function_SEL_ANY(STRING)

/*                            Initialization Macro             */
/* for SEL_Typed */
#define LC_INIT_Function_SEL_Typed(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_SEL_##type)); \
}

#define LC_INIT_Function_SEL_BOOL(p)   LC_INIT_Function_SEL_Typed(p,BOOL)
#define LC_INIT_Function_SEL_SINT(p)   LC_INIT_Function_SEL_Typed(p,SINT)
#define LC_INIT_Function_SEL_INT(p)    LC_INIT_Function_SEL_Typed(p,INT)
#define LC_INIT_Function_SEL_DINT(p)   LC_INIT_Function_SEL_Typed(p,DINT)
#define LC_INIT_Function_SEL_LINT(p)   LC_INIT_Function_SEL_Typed(p,LINT)
#define LC_INIT_Function_SEL_USINT(p)  LC_INIT_Function_SEL_Typed(p,USINT)
#define LC_INIT_Function_SEL_UINT(p)   LC_INIT_Function_SEL_Typed(p,UINT)
#define LC_INIT_Function_SEL_UDINT(p)  LC_INIT_Function_SEL_Typed(p,UDINT)
#define LC_INIT_Function_SEL_ULINT(p)  LC_INIT_Function_SEL_Typed(p,ULINT)
#define LC_INIT_Function_SEL_BYTE(p)   LC_INIT_Function_SEL_Typed(p,BYTE)
#define LC_INIT_Function_SEL_WORD(p)   LC_INIT_Function_SEL_Typed(p,WORD)
#define LC_INIT_Function_SEL_DWORD(p)  LC_INIT_Function_SEL_Typed(p,DWORD)
#define LC_INIT_Function_SEL_LWORD(p)  LC_INIT_Function_SEL_Typed(p,LWORD)
#define LC_INIT_Function_SEL_REAL(p)   LC_INIT_Function_SEL_Typed(p,REAL)
#define LC_INIT_Function_SEL_LREAL(p)  LC_INIT_Function_SEL_Typed(p,LREAL)
#define LC_INIT_Function_SEL_TIME(p)   LC_INIT_Function_SEL_Typed(p,TIME)
#define LC_INIT_Function_SEL_DATE(p)   LC_INIT_Function_SEL_Typed(p,DATE)
#define LC_INIT_Function_SEL_TOD(p)    LC_INIT_Function_SEL_Typed(p,TOD)
#define LC_INIT_Function_SEL_DT(p)     LC_INIT_Function_SEL_Typed(p,DT)
#define LC_INIT_Function_SEL_CHAR(p)   LC_INIT_Function_SEL_Typed(p,CHAR)
#define LC_INIT_Function_SEL_STRING(p) LC_INIT_Function_SEL_Typed(p,STRING)

/* for SEL */
#define LC_INIT_Function_SEL_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_SEL)); \
}

#define LC_INIT_Function_SEL__BOOL(p)   LC_INIT_Function_SEL_ANY(p,BOOL)
#define LC_INIT_Function_SEL__SINT(p)   LC_INIT_Function_SEL_ANY(p,SINT)
#define LC_INIT_Function_SEL__INT(p)    LC_INIT_Function_SEL_ANY(p,INT)
#define LC_INIT_Function_SEL__DINT(p)   LC_INIT_Function_SEL_ANY(p,DINT)
#define LC_INIT_Function_SEL__LINT(p)   LC_INIT_Function_SEL_ANY(p,LINT)
#define LC_INIT_Function_SEL__USINT(p)  LC_INIT_Function_SEL_ANY(p,USINT)
#define LC_INIT_Function_SEL__UINT(p)   LC_INIT_Function_SEL_ANY(p,UINT)
#define LC_INIT_Function_SEL__UDINT(p)  LC_INIT_Function_SEL_ANY(p,UDINT)
#define LC_INIT_Function_SEL__ULINT(p)  LC_INIT_Function_SEL_ANY(p,ULINT)
#define LC_INIT_Function_SEL__BYTE(p)   LC_INIT_Function_SEL_ANY(p,BYTE)
#define LC_INIT_Function_SEL__WORD(p)   LC_INIT_Function_SEL_ANY(p,WORD)
#define LC_INIT_Function_SEL__DWORD(p)  LC_INIT_Function_SEL_ANY(p,DWORD)
#define LC_INIT_Function_SEL__LWORD(p)  LC_INIT_Function_SEL_ANY(p,LWORD)
#define LC_INIT_Function_SEL__REAL(p)   LC_INIT_Function_SEL_ANY(p,REAL)
#define LC_INIT_Function_SEL__LREAL(p)  LC_INIT_Function_SEL_ANY(p,LREAL)
#define LC_INIT_Function_SEL__TIME(p)   LC_INIT_Function_SEL_ANY(p,TIME)
#define LC_INIT_Function_SEL__DATE(p)   LC_INIT_Function_SEL_ANY(p,DATE)
#define LC_INIT_Function_SEL__TOD(p)    LC_INIT_Function_SEL_ANY(p,TOD)
#define LC_INIT_Function_SEL__DT(p)     LC_INIT_Function_SEL_ANY(p,DT)
#define LC_INIT_Function_SEL__CHAR(p)   LC_INIT_Function_SEL_ANY(p,CHAR)
#define LC_INIT_Function_SEL__STRING(p) LC_INIT_Function_SEL_ANY(p,STRING)

/*                            Impl (not inlined)               */
#define LC_MF_SEL_ANY(G,IN0,IN1)          ((G)?(IN1):(IN0))

/* for SEL_Typed */
#define lcfu_iec61131__SEL_BOOL(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_BOOL   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_SINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_SINT   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_INT(LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL_INT    = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_DINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_DINT   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_LINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_LINT   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_USINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_USINT  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_UINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_UINT   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_UDINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_UDINT  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_ULINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_ULINT  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_BYTE(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_BYTE   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_WORD(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_WORD   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_DWORD(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_DWORD  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_LWORD(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_LWORD  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_REAL(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_REAL   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_LREAL(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL_LREAL  = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_TIME(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_TIME   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_DATE(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL_DATE   = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_TOD(LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL_TOD    = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_DT(LC_this, G, IN0, IN1, pEPDB)     (LC_this)->LC_VD_SEL_DT     = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL_CHAR(LC_this, G, IN0, IN1, pEPDB)   LC_MOV_CHAR((LC_this)->LC_VD_SEL_CHAR,(LC_MF_SEL_ANY(G,IN0,IN1)))
#define lcfu_iec61131__SEL_STRING(LC_this, G, IN0, IN1, pEPDB) LC_MOV_STRING_SIZED_OR_UNSIZED_OUTPUT(LC_this, SEL_STRING, LC_MF_SEL_ANY(G,IN0,IN1))

/* for SEL */
#define lcfu_iec61131__SEL__BOOL(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__SINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__INT(LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__DINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__LINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__USINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__UINT(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__UDINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__ULINT(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__BYTE(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__WORD(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__DWORD(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__LWORD(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REAL(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__LREAL(LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__TIME(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__DATE(LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__TOD(LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__DT(LC_this, G, IN0, IN1, pEPDB)     (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__CHAR(LC_this, G, IN0, IN1, pEPDB)   LC_MOV_CHAR((LC_this)->LC_VD_SEL,(LC_MF_SEL_ANY(G,IN0,IN1)))
#define lcfu_iec61131__SEL__STRING(LC_this, G, IN0, IN1, pEPDB) LC_MOV_STRING_SIZED_OR_UNSIZED_OUTPUT(LC_this, SEL, LC_MF_SEL_ANY(G,IN0,IN1))


/* support for elementary datatypes (references) ------------- */
/* for SEL */
#define LC_TD_IMPL__SEL__REF(stType, cType) \
struct \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	cType* LC_VD_SEL; \
} LCCG_StructAttrib

/*                            Initialization Macro             */
/* for SEL */
#define LC_INIT_IMPL__SEL__REF(stType,cType,p) \
{ \
	(p)->LC_VD_SEL = NULL; \
}

/*                            Impl (not inlined)               */
/* for SEL */
#define lcfu_iec61131__SEL__REF__BOOL(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__SINT(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__INT(ctype, LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__DINT(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__LINT(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__USINT(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__UINT(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__UDINT(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__ULINT(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__BYTE(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__WORD(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__DWORD(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__LWORD(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__REAL(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__LREAL(ctype, LC_this, G, IN0, IN1, pEPDB)  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__TIME(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__DATE(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__TOD(ctype, LC_this, G, IN0, IN1, pEPDB)    (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__DT(ctype, LC_this, G, IN0, IN1, pEPDB)     (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__CHAR(ctype, LC_this, G, IN0, IN1, pEPDB)   (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__STRING(ctype, LC_this, G, IN0, IN1, pEPDB) (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)


/* support for arrays, structs, refs ------------------------- */
/* for SEL */
#define LC_TD_IMPL__SEL__DERIVED(stType, cType) \
struct \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	cType LC_VD_SEL; \
} LCCG_StructAttrib
#define LC_TD_IMPL__SEL__ARRAY(stType, cType, dimension) \
struct \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	cType LC_VD_SEL[dimension]; \
} LCCG_StructAttrib
#define LC_TD_IMPL__SEL__REF__DERIVED(stType, cType) \
struct \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	cType* LC_VD_SEL; \
} LCCG_StructAttrib
#define LC_TD_IMPL__SEL__REF__ARRAY(stType, cType, dimension) \
struct \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	cType (* LC_VD_SEL)[dimension]; \
} LCCG_StructAttrib

/*                            Initialization Macro             */
/* for SEL */
#define LC_INIT_IMPL__SEL__DERIVED(stType, cType, p)               LC_INIT_##stType(&((p)->LC_VD_SEL));
#define LC_INIT_IMPL__SEL__ARRAY(stType, cType, dimension, p)      LC_INIT_ARRAY(&((p)->LC_VD_SEL), stType, dimension);
#define LC_INIT_IMPL__SEL__REF__DERIVED(stType, cType, p)          LC_INIT_IMPL__SEL__REF(stType, cType, p)
#define LC_INIT_IMPL__SEL__REF__ARRAY(stType, cType, dimension, p) LC_INIT_IMPL__SEL__REF(stType, cType, p)

/*                            Implementation Macros            */
/* for SEL */
#define lcfu_iec61131__SEL__DERIVED(ctype, LC_this, G, IN0, IN1, pEPDB)                       (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__ARRAY(ctype, dimension, LC_this, G, IN0, IN1, pEPDB)              LC_ASSIGN_ARRAY_VAR((LC_this)->LC_VD_SEL[0], (LC_MF_SEL_ANY(G,IN0,IN1))[0], ctype, dimension);
#define lcfu_iec61131__SEL__ARRAY__STRING(ctype, dimension, LC_this, G, IN0, IN1, pEPDB)      lcfu_iec61131__SEL__ARRAY(ctype, dimension, LC_this, G, IN0, IN1, pEPDB)
#define lcfu_iec61131__SEL__REF__DERIVED(ctype, LC_this, G, IN0, IN1, pEPDB)                  (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__ARRAY(ctype, dimension, LC_this, G, IN0, IN1, pEPDB)         (LC_this)->LC_VD_SEL = LC_MF_SEL_ANY(G,IN0,IN1)
#define lcfu_iec61131__SEL__REF__ARRAY__STRING(ctype, dimension, LC_this, G, IN0, IN1, pEPDB) lcfu_iec61131__SEL__REF__ARRAY(ctype, dimension, LC_this, G, IN0, IN1, pEPDB)

#endif
