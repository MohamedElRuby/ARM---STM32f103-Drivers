/*
 * NVIC_program.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ElRuby
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_private.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"

void NVIC_init(){
#ifndef SCB_AIRCR
#define SCB_AIRCR *((u32*)(0xE000ED00+0x0C))
	SCB_AIRCR=NVIC_GROUP_SUB_MODE;
#endif

}

void NVIC_voidEnablePerInt(u8 INTNumber){
	if(INTNumber<32)
		NVIC_ISER0=(1<<INTNumber);
	else if(INTNumber>32){
		INTNumber -= 32;
		NVIC_ISER1=(1<<INTNumber);
	}
}

void NVIC_voidDisablePerInt(u8 INTNumber){
	if(INTNumber<32)
		NVIC_ICER0=(1<<INTNumber);
	else if(INTNumber>32){
		INTNumber -= 32;
		NVIC_ICER1=(1<<INTNumber);
	}
}

void NVIC_voidSetPendingFlag(u8 INTNumber){
	if(INTNumber<32)
		NVIC_ISPR0=(1<<INTNumber);
	else if(INTNumber>32){
		INTNumber -= 32;
		NVIC_ISPR1=(1<<INTNumber);
	}
}

void NVIC_voidClrPendingFlag(u8 INTNumber){
	if(INTNumber<32)
		NVIC_ICPR0=(1<<INTNumber);
	else if(INTNumber>32){
		INTNumber -= 32;
		NVIC_ICPR1=(1<<INTNumber);
	}
}

u8 NVIC_voidReadActiveFlag(u8 INTNumber){
	if(INTNumber<32)
		return GET_BIT(NVIC_IABR0,INTNumber);
	else if(INTNumber>32){
		INTNumber -= 32;
		return GET_BIT(NVIC_IABR1,INTNumber);
	}

	return 0x55;
}


void NVIC_voidSetSwPriority(u8 INTNumber,u8 Priority){
	NVIC_IPR[INTNumber]=(Priority<<4);
}


