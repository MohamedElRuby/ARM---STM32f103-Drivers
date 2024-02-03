/*
 * NVIC_main.c
 *
 *  Created on: Jan 11, 2024
 *      Author: ElRuby
 */

/*
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "STD_Functions.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "SysTick_interface.h"
#include "NVIC_interface.h"


int NVIC_main (){

	RCC_VoidSysClckInit();
	RCC_VoidEnablePerClck(RCC_APB2, 2);

	GPIO_voidSetPinDirection(PORTA,1, GPIO_OUTPUT_10MHZ_PP);
	GPIO_voidSetPinDirection(PORTA,2, GPIO_OUTPUT_10MHZ_PP);


	NVIC_init();
	NVIC_voidSetPendingFlag(6);
	NVIC_voidSetPendingFlag(7);

	NVIC_voidSetSwPriority(6, 0b1001);
	NVIC_voidSetSwPriority(7, 0b1000);
//
//	NVIC_voidEnablePerInt(6);
//	NVIC_voidEnablePerInt(7);

	NVIC_ISER0=(1<<6)|(1<<7);


	while(1);

return 0;
}

void EXTI0_IRQHandler(void) {
	GPIO_voidSetPinValue(PORTA,1, GPIO_HIGH);
	_delay_ms(1000);
	NVIC_voidClrPendingFlag(6);
}

void EXTI1_IRQHandler(void) {

	GPIO_voidSetPinValue(PORTA,2, GPIO_HIGH);
	_delay_ms(1000);
	NVIC_voidClrPendingFlag(7);
}

*/
