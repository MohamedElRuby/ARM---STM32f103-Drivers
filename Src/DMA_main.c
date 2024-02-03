///*
// * DMA_main.c
// *
// *  Created on: Jan 17, 2024
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
//
//
//u16 Processor_Arr1 [1000];
//u16 Processor_Arr2 [1000];
//
//u16 DMA_Arr1 [1000];
//u16 DMA_Arr2 [1000];
//
//
//int main (){
//
//	RCC_VoidSysClckInit();
//	RCC_VoidEnablePerClck(RCC_AHB, 0);
//
//	NVIC_init();
//	NVIC_voidEnablePerInt(11);
//	DMA_voidChannelInit(0, DMA_Src_MEM, DMA_Dest_MEM);
//
//	for(int i=0;i<1000;i++){
//		Processor_Arr1[i]=i;
//		DMA_Arr1[i]=i;
//	}
//
//	DMA_voidStartChannel(0, DMA_Arr2, DMA_Arr1, 1000);
//
//	for(int i=0;i<1000;i++){
//		Processor_Arr2[i]=Processor_Arr1[i];
//	}
//
//	while(1);
//
//return 0;
//}
//
//void DMA1_Channel1_IRQHandler(){
//	u8 x=10;
//	GET_BIT(x,0);
//}
//
//
