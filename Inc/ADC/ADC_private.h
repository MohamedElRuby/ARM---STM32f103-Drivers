/*
 * ADC_private.h
 *
 *  Created on: Jan 16, 2024
 *      Author: ElRuby
 */

#ifndef ADC_ADC_PRIVATE_H_
#define ADC_ADC_PRIVATE_H_

#define ADC_BASE_ADD 	0x40012400


typedef struct{
	u32 ADC_SR;
	u32 ADC_CR1;
	u32 ADC_CR2;
	u32 ADC_SMPR1;
	u32 ADC_SMPR2;
	u32 ADC_JOFR1;
	u32 ADC_JOFR2;
	u32 ADC_JOFR3;
	u32 ADC_JOFR4;
	u32 ADC_HTR;
	u32 ADC_LTR;
	u32 ADC_SQR1;
	u32 ADC_SQR2;
	u32 ADC_SQR3;
	u32 ADC_JSQR;
	u32 ADC_JDR1;
	u32 ADC_JDR2;
	u32 ADC_JDR3;
	u32 ADC_JDR4;
	u32 ADC_DR;
}ADC_Type;

#define ADC ((volatile ADC_Type*)(ADC_BASE_ADD))

#define OFF 0
#define ON  1

#endif /* ADC_ADC_PRIVATE_H_ */
