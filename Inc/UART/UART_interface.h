/*
 * UART_interface.h
 *
 *  Created on: Jan 20, 2024
 *      Author: ElRuby
 */

#ifndef UART_UART_INTERFACE_H_
#define UART_UART_INTERFACE_H_

#include "UART_private.h"

void UART_voidinit ();

void UART_voidTxEnable();
void UART_voidTxDisable();

void UART_voidRxEnable();
void UART_voidRxDisable();

void UART_voidSendString(u32 str);
u8 UART_RecieveString();

#endif /* UART_UART_INTERFACE_H_ */
