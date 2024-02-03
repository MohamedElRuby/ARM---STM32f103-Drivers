/*
 * DMA_private.h
 *
 *  Created on: Jan 14, 2024
 *      Author: ElRuby
 */

#ifndef DMA_DMA_PRIVATE_H_
#define DMA_DMA_PRIVATE_H_

#define DMA_BASE_ADD 	0x40020000


typedef struct{
	u32 	CCR;
	u32 	CNDTR;
	u32 	CPAR;
	u32		CMAR;
	u32		Reserved;
}DMA_Ch;

typedef struct{
	u32 	ISR;
	u32 	IFCR;
	DMA_Ch  channel[7];
}DMA_Type;

#define DMA ((DMA_Type*) (0x40020000))

#define ON  0
#define OFF 1

#define DMA_Src_Per	0
#define DMA_Src_MEM	1

#define DMA_Dest_Per	0
#define DMA_Dest_MEM	1

#define Width_8bit		0
#define Width_16bit		1
#define Width_32it		2



#endif /* DMA_DMA_PRIVATE_H_ */
