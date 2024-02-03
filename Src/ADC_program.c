/*
 * ADC_program.c
 *
 *  Created on: Jan 17, 2024
 *      Author: ElRuby
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "ADC_private.h"
#include "ADC_config.h"
#include "ADC_interface.h"

void ADC_voidInit(){
/*******EOC INT Enable**********/
#if ADC_INT_EOCIE==ON
	SET_BIT(ADC->ADC_CR1,5);
#elif ADC_INT_EOCIE==OFF
	CLR_BIT(ADC->ADC_CR1,5);
#endif
/*******Analog WD INT Enable**********/
#if ADC_INT_AWDIE==ON
	SET_BIT(ADC->ADC_CR1,6);
#elif ADC_INT_AWDIE==OFF
	CLR_BIT(ADC->ADC_CR1,6);
#endif
/*******INJECTION INT Enable**********/
#if ADC_INT_JEOCIE==ON
	SET_BIT(ADC->ADC_CR1,7);
#elif ADC_INT_JEOCIE==OFF
	CLR_BIT(ADC->ADC_CR1,7);
#endif

#if ADC_SCAN_MODE==ON
	SET_BIT(ADC->ADC_CR1,8);
#elif ADC_SCAN_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,8);
#endif

#if ADC_AWDSGL_MODE==ON
	SET_BIT(ADC->ADC_CR1,9);
#elif ADC_AWDSGL_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,9);
#endif

#if ADC_JAUTO_MODE==ON
	SET_BIT(ADC->ADC_CR1,10);
#elif ADC_JAUTO_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,10);
#endif

#if ADC_DISCEN_MODE==ON
	SET_BIT(ADC->ADC_CR1,11);
#elif ADC_DISCEN_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,11);
#endif

#if ADC_JDISCEN_MODE==ON
	SET_BIT(ADC->ADC_CR1,12);
#elif ADC_JDISCEN_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,12);
#endif

#if ADC_JAWDEN_MODE==ON
	SET_BIT(ADC->ADC_CR1,22);
#elif ADC_JAWDEN_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,22);
#endif

#if ADC_AWDEN_MODE==ON
	SET_BIT(ADC->ADC_CR1,23);
#elif ADC_AWDEN_MODE==OFF
	CLR_BIT(ADC->ADC_CR1,23);
#endif

#if ADC_CONT_MODE==ON
	SET_BIT(ADC->ADC_CR2,1);
#elif ADC_CONT_MODE==OFF
	CLR_BIT(ADC->ADC_CR2,1);
#endif

#if ADC_DMA_MODE==ON
	SET_BIT(ADC->ADC_CR2,8);
#elif ADC_DMA_MODE==OFF
	CLR_BIT(ADC->ADC_CR2,8);
#endif

	SET_BIT(ADC->ADC_CR2,0);		//ADC ENABLE

}

void ADC_voidSTempStartConversion(){


	ADC->ADC_SQR3=16;

	SET_BIT(ADC->ADC_CR2,0);		//ADC ENABLE
	SET_BIT(ADC->ADC_CR2,23);		//TEMP SENSOR ENABLE

}

u16 ADC_u16ReadValue(){
	while(! GET_BIT(ADC->ADC_SR,1) );
	return ADC->ADC_DR;
}
