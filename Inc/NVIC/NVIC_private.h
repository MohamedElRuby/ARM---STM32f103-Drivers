/*
 * NVIC_private.h
 *
 *  Created on: Jan 9, 2024
 *      Author: ElRuby
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

#define NVIC_BASE_ADD		 0xE000E100

#define NVIC_ISER0           *( (u32*)(NVIC_BASE_ADD+0x00) )
#define NVIC_ISER1           *( (u32*)(NVIC_BASE_ADD+0x04) )
#define NVIC_ISER2           *( (u32*)(NVIC_BASE_ADD+0x08) )

#define NVIC_ICER0           *( (u32*)(NVIC_BASE_ADD+0x80) )
#define NVIC_ICER1     	     *( (u32*)(NVIC_BASE_ADD+0x84) )
#define NVIC_ICER2           *( (u32*)(NVIC_BASE_ADD+0x88) )

#define NVIC_ISPR0           *( (u32*)(NVIC_BASE_ADD+0x100) )
#define NVIC_ISPR1           *( (u32*)(NVIC_BASE_ADD+0x104) )
#define NVIC_ISPR2           *( (u32*)(NVIC_BASE_ADD+0x108) )


#define NVIC_ICPR0           *( (u32*)(NVIC_BASE_ADD+0x180) )
#define NVIC_ICPR1           *( (u32*)(NVIC_BASE_ADD+0x184) )
#define NVIC_ICPR2           *( (u32*)(NVIC_BASE_ADD+0x188) )

#define NVIC_IABR0           *( (u32*)(NVIC_BASE_ADD+0x200) )
#define NVIC_IABR1           *( (u32*)(NVIC_BASE_ADD+0x204) )
#define NVIC_IABR2           *( (u32*)(NVIC_BASE_ADD+0x208) )

#define NVIC_IPR	         ( (u8*)(NVIC_BASE_ADD+0x300) )

#define Group16_Sub00		0x05FA0300
#define Group08_Sub02		0x05FA0400
#define Group04_Sub04		0x05FA0500
#define Group02_Sub08		0x05FA0600
#define Group00_Sub16		0x05FA0700






#endif /* NVIC_PRIVATE_H_ */
