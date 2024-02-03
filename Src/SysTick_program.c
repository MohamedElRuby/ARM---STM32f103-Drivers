/*
 * SysTick_program.c
 *
 *  Created on: Jan 3, 2024
 *      Author: ElRuby
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "SysTick_private.h"
#include "SysTick_interface.h"
#include "SysTick_config.h"

void (*CallbackPtr) (void)=NULL;

void SYSTICK_Init (void){
/********INTERUPT MODE***********/
#if SysTick_INT_MODE==SYSTICK_TICK_INT_ENABLE
	SET_BIT(STK_CTRL,1);
#elif SysTick_INT_MODE==SYSTICK_TICK_INT_DISABLE
	CLR_BIT(STK_CTRL,1);
#endif

/********CLK PreScalar***********/
#if CLK_SRC==SYSTICK_CLK_AHB
	SET_BIT(STK_CTRL,2);
#elif CLK_SRC==SYSTICK_CLK_AHB_DIV_8
	CLR_BIT(STK_CTRL,2);
#endif

}

void SYSTICK_Start (void){
	SET_BIT(STK_CTRL,0);
}

void SYSTICK_Stop (void){
	CLR_BIT(STK_CTRL,0);
}

void SYSTICK_SetCallback (void (*PTR) (void)){
	CallbackPtr=PTR;
}

void SysTick_Handler(void)
{
	CallbackPtr();
}

u8 SYSTICK_SetTime (u32 timeus){
	STK_LOAD=timeus-1;

	return STK_LOAD;
}
