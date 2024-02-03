/*
 *
 *  Created on: DEC 21, 2023
 *      Author: ElRuby
 */

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

#define RCC_Source HSI 				/*OPTIONS
									  1.HSI
									  2.HSE
									  3.PLL
									 */

#define AHB_PreScaler 0				/*
									  1.2
									  2.4
									  3.8
									  4.16
									  5.32
									  6.64
									  7.132
									  8.256
									  9.512
									  10. 0
									 */

#define APB1_PreScaler 0				/*
									  1.0
									  2.2
									  3.4
									  4.8
									  5.16
									 */

#define APB2_PreScaler 0			/*
									  1.0
									  2.2
									  3.4
									  4.8
									  5.16
									 */

#define PLLSRC HSI_DIV2					/*
									  1.HSI/2
									  2.HSE
									  3.HSE/2

									 */

#define PLLMUL 4					/*
									  1.4
									  2.5
									  3.6
									  4.7
									  5.8
									  6.9
									  7.(6.5)

									 */





#endif
