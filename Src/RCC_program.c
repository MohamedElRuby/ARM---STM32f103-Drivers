/*
 *
 *  Created on: DEC 21, 2023
 *      Author: ElRuby
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"


void RCC_VoidSysClckInit(){

#if RCC_Source==HSI
	SET_BIT(RCC_CR,0);			//HSI: ON
	while(!GET_BIT(RCC_CR,1));	//WAIT TO BE READY

	CLR_BIT(RCC_CFGR,0);
	CLR_BIT(RCC_CFGR,1);		//CHOOSING HSI AS SYS CLCK

#endif
/*----------------------------------------------------*/
#if RCC_Source==HSE
	SET_BIT(RCC_CR,16);			//HSE: ON
	while(!GET_BIT(RCC_CR,17));	//WAIT TO BE READY

	SET_BIT(RCC_CFGR,0);
	CLR_BIT(RCC_CFGR,1);		//CHOOSING HSE AS SYS CLCK

#endif
/*----------------------------------------------------*/
#if RCC_Source==PLL

	CLR_BIT(RCC_CR,24);			//PLL:OFF
	#if PLLSRC==HSI_DIV2
		CLR_BIT(RCC_CFGR,16);
	#elif PLLSRC==HSE
		SET_BIT(RCC_CFGR,16);
		CLR_BIT(RCC_CFGR,17);
	#elif PLLSRC==HSE_DIV2
		SET_BIT(RCC_CFGR,16);
		SET_BIT(RCC_CFGR,17);
	#endif

	#if PLLMUL==4
		CLR_BIT(RCC_CFGR,18);
		SET_BIT(RCC_CFGR,19);
		CLR_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==5
		SET_BIT(RCC_CFGR,18);
		SET_BIT(RCC_CFGR,19);
		CLR_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==6
		CLR_BIT(RCC_CFGR,18);
		CLR_BIT(RCC_CFGR,19);
		SET_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==7
		SET_BIT(RCC_CFGR,18);
		CLR_BIT(RCC_CFGR,19);
		SET_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==8
		CLR_BIT(RCC_CFGR,18);
		SET_BIT(RCC_CFGR,19);
		SET_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==9
		SET_BIT(RCC_CFGR,18);
		SET_BIT(RCC_CFGR,19);
		SET_BIT(RCC_CFGR,20);
		CLR_BIT(RCC_CFGR,21);
	#elif PLLMUL==6.5
		SET_BIT(RCC_CFGR,18);
		CLR_BIT(RCC_CFGR,19);
		SET_BIT(RCC_CFGR,20);
		SET_BIT(RCC_CFGR,21);
	#endif



	SET_BIT(RCC_CR,24);			//PLL: ON
	while(!GET_BIT(RCC_CR,25));	//WAIT TO BE READY

	CLR_BIT(RCC_CFGR,0);
	SET_BIT(RCC_CFGR,1);		//CHOOSING PLL AS SYS CLCK





#endif
	/*--------------------------AHB_PRESCALER------------------------*/
#if  AHB_PreScaler==0
	CLR_BIT(RCC_CFGR,4);
	CLR_BIT(RCC_CFGR,5);
	CLR_BIT(RCC_CFGR,6);
	CLR_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==2
	CLR_BIT(RCC_CFGR,4);
	CLR_BIT(RCC_CFGR,5);
	CLR_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==4
	SET_BIT(RCC_CFGR,4);
	CLR_BIT(RCC_CFGR,5);
	CLR_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==8
	CLR_BIT(RCC_CFGR,4);
	SET_BIT(RCC_CFGR,5);
	CLR_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==16
	SET_BIT(RCC_CFGR,4);
	SET_BIT(RCC_CFGR,5);
	CLR_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==64
	CLR_BIT(RCC_CFGR,4);
	CLR_BIT(RCC_CFGR,5);
	SET_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==128
	SET_BIT(RCC_CFGR,4);
	CLR_BIT(RCC_CFGR,5);
	SET_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==256
	CLR_BIT(RCC_CFGR,4);
	SET_BIT(RCC_CFGR,5);
	SET_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#elif AHB_PreScaler==512
	SET_BIT(RCC_CFGR,4);
	SET_BIT(RCC_CFGR,5);
	SET_BIT(RCC_CFGR,6);
	SET_BIT(RCC_CFGR,7);
#endif
	/*----------------------------APB1_PRESCALER------------------------*/
#if  APB1_PreScaler==0
	CLR_BIT(RCC_CFGR,8);
	CLR_BIT(RCC_CFGR,9);
	CLR_BIT(RCC_CFGR,10);
#elif  APB1_PreScaler==2
	CLR_BIT(RCC_CFGR,8);
	CLR_BIT(RCC_CFGR,9);
	SET_BIT(RCC_CFGR,10);
#elif  APB1_PreScaler==4
	SET_BIT(RCC_CFGR,8);
	CLR_BIT(RCC_CFGR,9);
	SET_BIT(RCC_CFGR,10);
#elif  APB1_PreScaler==8
	CLR_BIT(RCC_CFGR,8);
	SET_BIT(RCC_CFGR,9);
	SET_BIT(RCC_CFGR,10);
#elif  APB1_PreScaler==16
	SET_BIT(RCC_CFGR,8);
	SET_BIT(RCC_CFGR,9);
	SET_BIT(RCC_CFGR,10);
#elif
	#error "Wrong APB1 prescaler entery"
#endif
	/*----------------------------APB2_PRESCALER------------------------*/
#if  APB2_PreScaler==0
	CLR_BIT(RCC_CFGR,11);
	CLR_BIT(RCC_CFGR,12);
	CLR_BIT(RCC_CFGR,13);
#elif  APB2_PreScaler==2
	CLR_BIT(RCC_CFGR,11);
	CLR_BIT(RCC_CFGR,12);
	SET_BIT(RCC_CFGR,13);
#elif  APB2_PreScaler==4
	SET_BIT(RCC_CFGR,11);
	CLR_BIT(RCC_CFGR,12);
	SET_BIT(RCC_CFGR,13);
#elif  APB2_PreScaler==8
	CLR_BIT(RCC_CFGR,11);
	SET_BIT(RCC_CFGR,12);
	SET_BIT(RCC_CFGR,13);
#elif  APB2_PreScaler==16
	SET_BIT(RCC_CFGR,11);
	SET_BIT(RCC_CFGR,12);
	SET_BIT(RCC_CFGR,13);
#elif
	#error "Wrong APB2 prescaler entery"
#endif

}

void RCC_VoidEnablePerClck(u8 BusID , u8 PerID){
	if(PerID<32){
		switch(BusID){
		case RCC_AHB:  SET_BIT(RCC_AHBENR, PerID); break;
		case RCC_APB1: SET_BIT(RCC_APB1ENR,PerID); break;
		case RCC_APB2: SET_BIT(RCC_APB2ENR,PerID); break;
		default: break;
		}
	}
}

void RCC_VoidDisablePerClck(u8 BusID , u8 PerID){
	if(PerID<32){
		switch(BusID){
		case RCC_AHB:  CLR_BIT(RCC_AHBENR, PerID); break;
		case RCC_APB1: CLR_BIT(RCC_APB1ENR,PerID); break;
		case RCC_APB2: CLR_BIT(RCC_APB2ENR,PerID); break;
		default: break;
		}
	}
}
