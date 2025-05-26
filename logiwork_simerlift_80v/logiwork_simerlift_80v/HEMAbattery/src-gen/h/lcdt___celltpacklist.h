#ifndef LC_PROT_LCDT___CELLTPACKLIST__H
#define LC_PROT_LCDT___CELLTPACKLIST__H

#include <LC3CGBase.h>

#include <lcdt___celltempinfo.h>
/*                            Typedefs                         */
typedef LC_TD_DataType_CELLTEMPINFO LC_TD_DataType_CELLTPACKLIST[10];

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CELLTPACKLIST(p) \
{ \
  LC_TD_DataType_CELLTEMPINFO * ptrToElement_CELLTPACKLIST = (LC_TD_DataType_CELLTEMPINFO*)(p);\
  LC_TD_DataType_CELLTEMPINFO * arrayEnd = ptrToElement_CELLTPACKLIST+10;\
  for (; ptrToElement_CELLTPACKLIST < arrayEnd; ptrToElement_CELLTPACKLIST++) \
  { \
    LC_INIT_DataType_CELLTEMPINFO(ptrToElement_CELLTPACKLIST); \
  } \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CELLTPACKLIST(p,RF) \
if (RF==0) \
{ \
  LC_INIT_DataType_CELLTPACKLIST(p); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CELLTPACKLIST(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CELLTPACKLIST * ptrToElement_ArrayOf_CELLTPACKLIST = (LC_TD_DataType_CELLTPACKLIST*)(p);\
  LC_TD_DataType_CELLTPACKLIST * arrayEnd = ptrToElement_ArrayOf_CELLTPACKLIST+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CELLTPACKLIST < arrayEnd; ptrToElement_ArrayOf_CELLTPACKLIST++) \
  { \
    LC_INIT_DataType_CELLTPACKLIST(ptrToElement_ArrayOf_CELLTPACKLIST); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CELLTPACKLIST(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CELLTPACKLIST(p,ARRAYSIZE); \
  } \
}

#endif
