/*
 *
 *  Created on: DEC 21, 2023
 *      Author: ElRuby
 */

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


#define RCC_BASE_ADD 	0x40021000

#define RCC_CR   	 	*((u32*)(RCC_BASE_ADD+0x00))
#define RCC_CFGR 		*((u32*)(RCC_BASE_ADD+0x04))
#define RCC_CIR   	 	*((u32*)(RCC_BASE_ADD+0x08))
#define RCC_APB2RSTR  	*((u32*)(RCC_BASE_ADD+0x0C))
#define RCC_APB1RSTR  	*((u32*)(RCC_BASE_ADD+0x10))
#define RCC_AHBENR  	*((u32*)(RCC_BASE_ADD+0x14))
#define RCC_APB2ENR  	*((u32*)(RCC_BASE_ADD+0x18))
#define RCC_APB1ENR  	*((u32*)(RCC_BASE_ADD+0x18))
#define RCC_BDCR 		*((u32*)(RCC_BASE_ADD+0x1C))
#define RCC_CSR  		*((u32*)(RCC_BASE_ADD+0x20))
#define RCC_AHBSTR		*((u32*)(RCC_BASE_ADD+0x24))
#define RCC_CFGR2 		*((u32*)(RCC_BASE_ADD+0x28))

#define RCC_AHB			0
#define RCC_APB1		1
#define RCC_APB2		2

#define HSI 			1
#define HSE 			2
#define PLL 			3

#define HSI_DIV2        0
#define HSE_DIV2		2





#endif
