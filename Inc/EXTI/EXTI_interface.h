/*
 * EXTI_interface.h
 *
 *  Created on: Jan 11, 2024
 *      Author: ElRuby
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#include "EXTI_private.h"


void EXTI0_voidInit(void);
void EXTI_voidEnableInt(u8 line_num);
void EXTI_voidDisableInt(u8 line_num);

void EXTI_voidEnableSwi(u8 line_num);
void EXTI_voidChangeSenseMode(u8 line_num,u8 Sense_Mode);
void EXTI0_voidSetCallback( void (*PTR)(void) );










#endif /* EXTI_INTERFACE_H_ */
