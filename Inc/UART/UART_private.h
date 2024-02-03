/*
 * UART_private.h
 *
 *  Created on: Jan 20, 2024
 *      Author: ElRuby
 */

#ifndef UART_UART_PRIVATE_H_
#define UART_UART_PRIVATE_H_

typedef struct {
	u32 USART_SR;
	u32 USART_DR;
	u32 USART_BRR;
	u32 USART_CR1;
	u32 USART_CR2;
	u32 USART_CR3;
	u32 USART_GTPR;
}UART_Type;

#define UART (( UART_Type*)(0x40013800))

#define ON  0
#define OFF 1

#define EVEN 0
#define ODD  1

#endif /* UART_UART_PRIVATE_H_ */
