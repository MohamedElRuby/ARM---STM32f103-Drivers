/*
 * EXTI_private.h
 *
 *  Created on: Jan 11, 2024
 *      Author: ElRuby
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

#include "STD_TYPES.h"

#define EXTI_BASE_ADD			0x40010400



typedef struct {
	volatile u32 EXTI_IMR;
	volatile u32 EXTI_EMR;
	volatile u32 EXTI_RTSR;
	volatile u32 EXTI_FTSR;
	volatile u32 EXTI_SWIER;
	volatile u32 EXTI_PR;
}EXTI_type;


#define EXTI ((EXTI_type*) EXTI_BASE_ADD)

#define EXTI_FALLING_EDGE 0
#define EXTI_RISING_EDGE  1
#define EXTI_IOC	      2


#endif /* EXTI_PRIVATE_H_ */
