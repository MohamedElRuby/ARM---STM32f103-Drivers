/*
 *
 *  Created on: DEC 21, 2023
 *      Author: ElRuby
 */

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H


void RCC_VoidSysClckInit();
void RCC_VoidEnablePerClck(u8 BusID , u8 PerID);
void RCC_VoidDisablePerClck(u8 BusID , u8 PerID);



#endif
