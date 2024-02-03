///*
// * ADC_main.c
// *
// *  Created on: Jan 25, 2024
// *      Author: ElRuby
// */
//
//
//#include "BIT_MATH.h"
//#include "STD_TYPES.h"
//#include "STD_Functions.h"
//
//#include "RCC_interface.h"
//#include "RCC_private.h"
//#include "RCC_config.h"
//
//#include "GPIO_interface.h"
//#include "GPIO_private.h"
//#include "GPIO_config.h"
//#include "SysTick_interface.h"
//#include "NVIC_interface.h"
//#include "EXTI_interface.h"
//#include "DMA_interface.h"
//#include "ADC_interface.h"
//
//u16 Reading=0;
//u16 Temp=0;
//
//int main (){
//
//	RCC_VoidSysClckInit();
//	RCC_VoidEnablePerClck(RCC_APB2, 9);
//
//	ADC_voidInit();
//	ADC_voidSTempStartConversion();
//	Reading= ADC_u16ReadValue();
//
//	while(1){
//		Reading= ADC_u16ReadValue();
//		Temp=((1.43 - 3.3/4096 * Reading) / 0.0043) + 25;
//	}
//
//return 0;
//}
//
