#ifndef LC_PROT_LCDT___BATTSTACKERR__H
#define LC_PROT_LCDT___BATTSTACKERR__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_BATTSTACKERR;

/*                            Named Value Constants                         */
#define LC_ED__BATTSTACKERR__NOERR ((LC_TD_UINT)0)
#define LC_ED__BATTSTACKERR__NORESP ((LC_TD_UINT)1)
#define LC_ED__BATTSTACKERR__INIT ((LC_TD_UINT)2)
#define LC_ED__BATTSTACKERR__MEASUREMENT ((LC_TD_UINT)4)
#define LC_ED__BATTSTACKERR__CONFIG ((LC_TD_UINT)8)
#define LC_ED__BATTSTACKERR__SQZACTIVE ((LC_TD_UINT)16)
#define LC_ED__BATTSTACKERR__RTOSERR ((LC_TD_UINT)32)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BATTSTACKERR(p) \
{ \
  (*(p)) = LC_ED__BATTSTACKERR__NOERR; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BATTSTACKERR(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BATTSTACKERR__NOERR; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BATTSTACKERR(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BATTSTACKERR * ptrToElement_ArrayOf_BATTSTACKERR = (LC_TD_DataType_BATTSTACKERR*)(p);\
  LC_TD_DataType_BATTSTACKERR * arrayEnd = ptrToElement_ArrayOf_BATTSTACKERR+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BATTSTACKERR < arrayEnd; ptrToElement_ArrayOf_BATTSTACKERR++) \
  { \
    LC_INIT_DataType_BATTSTACKERR(ptrToElement_ArrayOf_BATTSTACKERR); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BATTSTACKERR(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BATTSTACKERR(p,ARRAYSIZE); \
  } \
}

#endif
