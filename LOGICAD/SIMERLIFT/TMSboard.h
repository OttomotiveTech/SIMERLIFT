/*
 * TMSboard.h
 *
 *  Created on: Feb 24, 2020
 *      Author: yaslan
 */

#ifndef TMSBOARD_H_
#define TMSBOARD_H_

#define LS1224     0
#define LC4357     1

//board options
#define TMS_LC4357_DEV 1
#define TMS_LS1224_DEV 0

//define the board
#ifdef LC43DEV
#define TARGET_TMS_BOARD  TMS_LC4357_DEV
#elif defined( LS12DEV)
#define TARGET_TMS_BOARD  TMS_LS1224_DEV
#endif

#if TARGET_TMS_BOARD==TMS_LC4357_DEV
#define TMS_MCU  LC4357
#define LC4357_DEV
#define LC4357_LAUNCH
#elif TARGET_TMS_BOARD==TMS_LS1224_DEV
#define TMS_MCU  LS1224
#define LS1224_DEV
#define LS1224_LAUNCH
#endif


#endif /* TMSBOARD_H_ */
