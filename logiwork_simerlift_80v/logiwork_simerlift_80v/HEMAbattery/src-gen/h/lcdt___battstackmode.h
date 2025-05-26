#ifndef LC_PROT_LCDT___BATTSTACKMODE__H
#define LC_PROT_LCDT___BATTSTACKMODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_BATTSTACKMODE;

/*                            Named Value Constants                         */
#define LC_ED__BATTSTACKMODE__BNULL ((LC_TD_UINT)0)
#define LC_ED__BATTSTACKMODE__SHUTDOWN ((LC_TD_UINT)1)
#define LC_ED__BATTSTACKMODE__ACTIVE ((LC_TD_UINT)2)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BATTSTACKMODE(p) \
{ \
  (*(p)) = LC_ED__BATTSTACKMODE__BNULL; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BATTSTACKMODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BATTSTACKMODE__BNULL; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BATTSTACKMODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BATTSTACKMODE * ptrToElement_ArrayOf_BATTSTACKMODE = (LC_TD_DataType_BATTSTACKMODE*)(p);\
  LC_TD_DataType_BATTSTACKMODE * arrayEnd = ptrToElement_ArrayOf_BATTSTACKMODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BATTSTACKMODE < arrayEnd; ptrToElement_ArrayOf_BATTSTACKMODE++) \
  { \
    LC_INIT_DataType_BATTSTACKMODE(ptrToElement_ArrayOf_BATTSTACKMODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BATTSTACKMODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BATTSTACKMODE(p,ARRAYSIZE); \
  } \
}

#endif
