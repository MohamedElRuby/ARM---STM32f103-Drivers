/*
 * GPIO_main.c
 *
 *  Created on: Jan 10, 2024
 *      Author: ElRuby
 */


#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "SysTick_interface.h"

u8 flag=1;

void LED(){
	if(flag==1){
		GPIO_voidSetPinValue(PORTA,1, GPIO_HIGH);
		flag=0;
	}
	else if(flag==0){
		GPIO_voidSetPinValue(PORTA,1, GPIO_LOW);
		flag=1;
	}

}

int Gpio_main (){
	RCC_VoidSysClckInit();
	RCC_VoidEnablePerClck(RCC_APB2, 2);

	GPIO_voidSetPinDirection(PORTA,1, GPIO_OUTPUT_10MHZ_PP);
	SYSTICK_Init();

	SYSTICK_SetTime(1000000);
	SYSTICK_SetCallback(LED);
	SYSTICK_Start();

	while(1);

return 0;
}
