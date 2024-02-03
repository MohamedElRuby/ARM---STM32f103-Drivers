/*
 * NVIC_interface.h
 *
 *  Created on: Jan 9, 2024
 *      Author: ElRuby
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_
#include "NVIC_private.h"

void NVIC_init();

void NVIC_voidEnablePerInt(u8 INTNumber);

void NVIC_voidDisablePerInt(u8 INTNumber);

void NVIC_voidSetPendingFlag(u8 INTNumber);

void NVIC_voidClrPendingFlag(u8 INTNumber);

u8	 NVIC_voidReadActiveFlag(u8 INTNumber);

void NVIC_voidSetSwPriority(u8 INTNumber,u8 Priority);






#endif /* NVIC_INTERFACE_H_ */
