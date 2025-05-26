/*
 * TMS570.h
 *
 *  Created on: Jan 28, 2020
 *      Author: yaslan
 */

#ifndef TMS570_H_
#define TMS570_H_

#include "TMSboard.h"

#ifdef BUILDPLATFORM
#include "gio.h"
#include "het.h"
#include "reg_gio.h"
#include "reg_het.h"
#include "can.h"
#include "reg_can.h"
#include "adc.h"
#include "reg_adc.h"

#define TMS570_GIO_PORT(PORT) ((gioPORT_t *)(PORT))
#define TMS570_CAN_REG(LINE) ((canBASE_t *)(LINE))
#endif

#endif /* TMS570_H_ */
