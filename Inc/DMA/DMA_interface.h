/*
 * DMA_interface.h
 *
 *  Created on: Jan 14, 2024
 *      Author: ElRuby
 */

#ifndef DMA_DMA_INTERFACE_H_
#define DMA_DMA_INTERFACE_H_

#include "DMA_config.h"
#include "DMA_private.h"


void DMA_voidChannelInit(u8 ch_num ,u8 	Src , u8 Dest);

void DMA_voidStartChannel(u8 ch_num ,u32 *PerAdd ,u32 *MemAdd ,u32 blockLength);





#endif /* DMA_DMA_INTERFACE_H_ */
