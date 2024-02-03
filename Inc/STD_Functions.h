/*
 * STD_Functions.h
 *
 *  Created on: Jan 2, 2024
 *      Author: ElRuby
 */

#ifndef STD_FUNCTIONS_H_
#define STD_FUNCTIONS_H_


//Delay function works efficiently with 8MHz
void _delay_ms(u32 ticks){
	for(int i=0;i<ticks*500;i++){
		asm("NOP");
	}
}

#endif /* STD_FUNCTIONS_H_ */
