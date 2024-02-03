/*
 * UART_program.c
 *
 *  Created on: Jan 25, 2024
 *      Author: ElRuby
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "UART_private.h"
#include "UART_config.h"
#include "UART_interface.h"

void UART_voidinit (){
#if UART_IDLEIE_ENABLE==ON
	SET_BIT(UART->USART_CR1,4);
#else
	CLR_BIT(UART->USART_CR1,4);
#endif
/*************************************/
#if UART_RXNEIE_ENABLE==ON
	SET_BIT(UART->USART_CR1,5);
#else
	CLR_BIT(UART->USART_CR1,5);
#endif
/*************************************/
#if UART_TCIE_ENABLE==ON
	SET_BIT(UART->USART_CR1,6);
#else
	CLR_BIT(UART->USART_CR1,6);
#endif
/*************************************/
#if UART_TXEIE_ENABLE==ON
	SET_BIT(UART->USART_CR1,7);
#else
	CLR_BIT(UART->USART_CR1,7);
#endif
/*************************************/
#if UART_PEIE_ENABLE==ON
	SET_BIT(UART->USART_CR1,8);
#else
	CLR_BIT(UART->USART_CR1,8);
#endif
/*************************************/
#if UART_PARITY_ENABLE==ON
	SET_BIT(UART->USART_CR1,10);
	#if UART_PARITY_MODE==ODD
		SET_BIT(UART->USART_CR1,9);
	#elif UART_PARITY_MODE==EVEN
		CLR_BIT(UART->USART_CR1,9);
	#endif
#else
	CLR_BIT(UART->USART_CR1,10);
#endif
/*************************************/
//UART->USART_BRR=1;					//FRACTION
//
//UART->USART_BRR |= 52<<4;			    //MANSIETA
	UART->USART_BRR =0x341;
/*************************************/

	CLR_BIT(UART->USART_CR1,12);        //Word_length

	SET_BIT(UART->USART_CR1,13);		//ENABLE UART

	UART->USART_SR=0;
}

void UART_voidTxEnable(){
	SET_BIT(UART->USART_CR1,3);
}
void UART_voidTxDisable(){
	CLR_BIT(UART->USART_CR1,3);
}

void UART_voidRxEnable(){
	SET_BIT(UART->USART_CR1,2);
}
void UART_voidRxDisable(){
	CLR_BIT(UART->USART_CR1,2);
}

void UART_voidSendString(u32 str){
	UART->USART_DR=str;
	while(!GET_BIT(UART->USART_SR,6));
}
u8 UART_RecieveString(){
	u8 Local_Reading=0;
	while(!GET_BIT(UART->USART_SR,5));

	Local_Reading=UART->USART_DR;
	return Local_Reading;
}
