#ifndef LC_PROT_LCDT___TMSADCGRP__H
#define LC_PROT_LCDT___TMSADCGRP__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_USINT LC_TD_DataType_TMSADCGRP;

/*                            Named Value Constants                         */
#define LC_ED__TMSADCGRP__EVENT ((LC_TD_USINT)0)
#define LC_ED__TMSADCGRP__G1 ((LC_TD_USINT)1)
#define LC_ED__TMSADCGRP__G2 ((LC_TD_USINT)2)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_TMSADCGRP(p) \
{ \
  (*(p)) = LC_ED__TMSADCGRP__EVENT; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_TMSADCGRP(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__TMSADCGRP__EVENT; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_TMSADCGRP(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_TMSADCGRP * ptrToElement_ArrayOf_TMSADCGRP = (LC_TD_DataType_TMSADCGRP*)(p);\
  LC_TD_DataType_TMSADCGRP * arrayEnd = ptrToElement_ArrayOf_TMSADCGRP+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_TMSADCGRP < arrayEnd; ptrToElement_ArrayOf_TMSADCGRP++) \
  { \
    LC_INIT_DataType_TMSADCGRP(ptrToElement_ArrayOf_TMSADCGRP); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_TMSADCGRP(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_TMSADCGRP(p,ARRAYSIZE); \
  } \
}

#endif
