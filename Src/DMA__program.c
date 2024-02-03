/*
 * DMA__program.c
 *
 *  Created on: Jan 14, 2024
 *      Author: ElRuby
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DMA_private.h"
#include "DMA_config.h"
#include "DMA_interface.h"

void DMA_voidChannelInit(u8 ch_num ,u8 	Src , u8 Dest){

/**************DMA_TCI********************/
	#if DMA_TransferComplete_INT==ON
		SET_BIT(DMA->channel[ch_num].CCR,1);
	#elif DMA_TransferComplete_INT==OFF
		CLR_BIT(DMA->channel[ch_num].CCR,1);
	#endif
/**************DMA_HCI********************/
	#if DMA_HalfTransferComplete_INT==ON
		SET_BIT(DMA->channel[ch_num].CCR,2);
	#elif DMA_HalfTransferComplete_INT==OFF
		CLR_BIT(DMA->channel[ch_num].CCR,2);
	#endif
/**************DMA_TEI********************/
	#if DMA_TransferError_INT==ON
		SET_BIT(DMA->channel[ch_num].CCR,3);
	#elif DMA_TransferError_INT==OFF
		CLR_BIT(DMA->channel[ch_num].CCR,3);
	#endif
/**************Source********************/
	#if DMA_Circular_Mode==ON
		SET_BIT(DMA->channel[ch_num].CCR,5);
	#elif DMA_Circular_Mode==OFF
		CLR_BIT(DMA->channel[ch_num].CCR,5);
	#endif

/**************Source & Destination********************/
if(Src==DMA_Src_MEM){
	SET_BIT(DMA->channel[ch_num].CCR,4);
	SET_BIT(DMA->channel[ch_num].CCR,7);

		if(Dest==DMA_Dest_MEM){
			SET_BIT(DMA->channel[ch_num].CCR,6);
			SET_BIT(DMA->channel[ch_num].CCR,14);
		}else if(Dest==DMA_Dest_Per){
			CLR_BIT(DMA->channel[ch_num].CCR,6);
		}
}
else if(Src==DMA_Src_Per){
	CLR_BIT(DMA->channel[ch_num].CCR,4);
	CLR_BIT(DMA->channel[ch_num].CCR,6);

		if(Dest==DMA_Dest_MEM){
			SET_BIT(DMA->channel[ch_num].CCR,7);
		}else if(Dest==DMA_Dest_Per){
			CLR_BIT(DMA->channel[ch_num].CCR,7);
		}
}
/**************WIDTH********************/
#if DMA_MEM_Width==Width_8bit
CLR_BIT(DMA->channel[ch_num].CCR,8);
CLR_BIT(DMA->channel[ch_num].CCR,9);
CLR_BIT(DMA->channel[ch_num].CCR,10);
CLR_BIT(DMA->channel[ch_num].CCR,11);

#elif DMA_MEM_Width==Width_16bit
SET_BIT(DMA->channel[ch_num].CCR,8);
CLR_BIT(DMA->channel[ch_num].CCR,9);
SET_BIT(DMA->channel[ch_num].CCR,10);
CLR_BIT(DMA->channel[ch_num].CCR,11);

#elif DMA_MEM_Width==Width_32bit
CLR_BIT(DMA->channel[ch_num].CCR,8);
SET_BIT(DMA->channel[ch_num].CCR,9);
CLR_BIT(DMA->channel[ch_num].CCR,10);
SET_BIT(DMA->channel[ch_num].CCR,11);
#endif

}





void DMA_voidStartChannel(u8 ch_num ,u32 *PerAdd ,u32 *MemAdd ,u32 blockLength){
	CLR_BIT(DMA->channel[ch_num].CCR,0);

	DMA->channel[ch_num].CNDTR=blockLength;

	DMA->channel[ch_num].CPAR=PerAdd;

	DMA->channel[ch_num].CMAR=MemAdd;

	SET_BIT(DMA->channel[ch_num].CCR,0);


}
