/*
 *
 *  Created on: DEC 27, 2023
 *      Author: ElRuby
 */

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "GPIO_private.h"

void	GPIO_voidSetPinDirection		(u8 PortId,u8 PinId,u8 Value);
void	GPIO_voidSetPinValue			(u8 PortId,u8 PinId,u8 Value);
u8      GPIO_u8GetPinValue              (u8 portId,u8 PinId);



#endif
