/*
 * SysTick_interface.h
 *
 *  Created on: Jan 3, 2024
 *      Author: ElRuby
 */

#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_


/*************************************
 *****MACROS_AHB_CLK_PRESCALER********
 *************************************/
#define SYSTICK_CLK_AHB  	   0
#define SYSTICK_CLK_AHB_DIV_8  1


/*************************************
 ****MACROS_SYSTICK_TICK_INTERRUPT****
 *************************************/
#define SYSTICK_TICK_INT_ENABLE  0
#define SYSTICK_TICK_INT_DISABLE 1

//typedef void (*systickcbf_t) (void);

/******************************************************************************
 * Function name: SYSTICK_Init                                                *
 * parameters:  Input:  NA                                                    *
 *              Output: NA                                                    *
 *              In/out: NA                                                    *
 * return: void                                                        *
 * Description: a function initialize the clk source and interrupt of SYSTICK *
 ******************************************************************************/
void SYSTICK_Init (void);

/**************************************************************************
 * Function name: SYSTICK_Start                                           *
 * parameters:  Input:  NA                                                *
 *              Output: NA                                                *
 *              In/out: NA                                                *
 * return: OK, NOT_OK                                                     *
 * Description: a function Start SYSYTICK                                 *
 *************************************************************************/
void SYSTICK_Start (void);

/*************************************************************************
 * Function name: SYSTICK_Stop                                           *
 * parameters:  Input:  NA                                               *
 *              Output: NA                                               *
 *              In/out: NA                                               *
 * return: void                                                    *
 * Description: a function Stop SYSYTICK                                 *
 *************************************************************************/
void SYSTICK_Stop (void);

/*************************************************************************
 * Function name: SYSTICK_SetCallback                                    *
 * parameters:  Input:                                                   *
 *                 cbf                                                   *
 *                     type: systickcbf_t                                *
 *                      Description:Call Back Function indicate the      *
 *                                   SYSTICK Counter finished            *
 *              Output: NA                                               *
 *              In/out: NA                                               *
 * return: void                                                    *
 * Description: a function set call back function                        *
 *************************************************************************/
void SYSTICK_SetCallback (void (*PTR) (void));

/*************************************************************************
 * Function name: SYSTICK_SetTime                                        *
 * parameters:  Input:                                                   *
 *                 timeus                                                *
 *                     type: uint_32t                                    *
 *                      Description:variable that contains time          *
                                    in micro secs                        *
 *                 clk                                                   *
 *                     type: uint_32t                                    *
 *                      Description:variable that contains System clk    *
 *              Output: NA                                               *
 *              In/out: NA                                               *
 * return: OK, NOT_OK                                                    *
 * Description: a function sets the time to be counted until interuupt   *
 *              fires                                                    *
 *************************************************************************/
u8 SYSTICK_SetTime (u32 timeus);


#endif /* SYSTICK_INTERFACE_H_ */
