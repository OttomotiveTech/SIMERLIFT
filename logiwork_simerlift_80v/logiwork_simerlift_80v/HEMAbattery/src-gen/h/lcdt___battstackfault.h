#ifndef LC_PROT_LCDT___BATTSTACKFAULT__H
#define LC_PROT_LCDT___BATTSTACKFAULT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_BATTSTACKFAULT;

/*                            Named Value Constants                         */
#define LC_ED__BATTSTACKFAULT__NOERR ((LC_TD_UDINT)0UL)
#define LC_ED__BATTSTACKFAULT__OWD ((LC_TD_UDINT)2048UL)
#define LC_ED__BATTSTACKFAULT__STACK ((LC_TD_UDINT)1024UL)
#define LC_ED__BATTSTACKFAULT__UV ((LC_TD_UDINT)512UL)
#define LC_ED__BATTSTACKFAULT__OV ((LC_TD_UDINT)256UL)
#define LC_ED__BATTSTACKFAULT__AUXUV ((LC_TD_UDINT)128UL)
#define LC_ED__BATTSTACKFAULT__AUXOV ((LC_TD_UDINT)64UL)
#define LC_ED__BATTSTACKFAULT__CMPUV ((LC_TD_UDINT)32UL)
#define LC_ED__BATTSTACKFAULT__CMPOV ((LC_TD_UDINT)16UL)
#define LC_ED__BATTSTACKFAULT__COMM ((LC_TD_UDINT)8UL)
#define LC_ED__BATTSTACKFAULT__SYS ((LC_TD_UDINT)4UL)
#define LC_ED__BATTSTACKFAULT__CHIP ((LC_TD_UDINT)2UL)
#define LC_ED__BATTSTACKFAULT__GPI ((LC_TD_UDINT)1UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_BATTSTACKFAULT(p) \
{ \
  (*(p)) = LC_ED__BATTSTACKFAULT__NOERR; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_BATTSTACKFAULT(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__BATTSTACKFAULT__NOERR; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_BATTSTACKFAULT(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_BATTSTACKFAULT * ptrToElement_ArrayOf_BATTSTACKFAULT = (LC_TD_DataType_BATTSTACKFAULT*)(p);\
  LC_TD_DataType_BATTSTACKFAULT * arrayEnd = ptrToElement_ArrayOf_BATTSTACKFAULT+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_BATTSTACKFAULT < arrayEnd; ptrToElement_ArrayOf_BATTSTACKFAULT++) \
  { \
    LC_INIT_DataType_BATTSTACKFAULT(ptrToElement_ArrayOf_BATTSTACKFAULT); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_BATTSTACKFAULT(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_BATTSTACKFAULT(p,ARRAYSIZE); \
  } \
}

#endif
