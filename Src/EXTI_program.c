/*
 * EXTI_program.c
 *
 *  Created on: Jan 11, 2024
 *      Author: ElRuby
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTI_private.h"
#include "EXTI_config.h"
#include "EXTI_interface.h"

static void(*CallbackPTR)(void)=NULL;


void EXTI0_voidInit(void){}


void EXTI_voidEnableInt(u8 line_num){
	SET_BIT(EXTI->EXTI_IMR,line_num);
}

void EXTI_voidDisableInt(u8 line_num){
	CLR_BIT(EXTI->EXTI_IMR,line_num);
}

void EXTI_voidChangeSenseMode(u8 line_num,u8 Sense_Mode){
	switch(Sense_Mode){
	case EXTI_FALLING_EDGE: SET_BIT(EXTI->EXTI_FTSR,line_num);
							CLR_BIT(EXTI->EXTI_RTSR,line_num);
	break;

	case EXTI_RISING_EDGE: CLR_BIT(EXTI->EXTI_FTSR,line_num);
						   SET_BIT(EXTI->EXTI_RTSR,line_num);
	break;
	case EXTI_IOC: 		   SET_BIT(EXTI->EXTI_FTSR,line_num);
						   SET_BIT(EXTI->EXTI_RTSR,line_num);
	break;
	}
}


void EXTI_voidEnableSwi(u8 line_num){
	SET_BIT(EXTI->EXTI_SWIER,line_num);
}


void EXTI0_voidSetCallback( void (*PTR)(void) ){
	CallbackPTR=PTR;
}

void EXTI0_IRQHandler(void){
	if(CallbackPTR != 0){
		CallbackPTR();
	}
}

