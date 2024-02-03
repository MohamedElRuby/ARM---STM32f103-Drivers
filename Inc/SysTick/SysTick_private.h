/*
 * SysTick_private.h
 *
 *  Created on: Jan 3, 2024
 *      Author: ElRuby
 */

#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_

#define SysTick_BASE_ADD		0xE000E010
#define STK_CTRL				*((u32*)(SysTick_BASE_ADD+0x00))
#define STK_LOAD				*((u32*)(SysTick_BASE_ADD+0x04))
#define STK_VAL					*((u32*)(SysTick_BASE_ADD+0x08))
#define STK_CALIB				*((u32*)(SysTick_BASE_ADD+0x0C))



#endif /* SYSTICK_PRIVATE_H_ */
