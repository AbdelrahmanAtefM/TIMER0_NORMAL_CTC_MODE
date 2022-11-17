/*
 * TIME0_Priv.h
 *
 *  Created on: Nov 16, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef MCAL_TIMER0_TIME0_PRIV_H_
#define MCAL_TIMER0_TIME0_PRIV_H_

///***************** MACROS **********//
///***************** TIMER0 Registers **********//
#define  TCCR0_REG    *((volatile u8 *)0x53)
#define  WGM00        6
#define  WGM01        3
#define  CS00         0
#define  CS01         1
#define  CS02         2
#define  TIMSK_REG    *((volatile u8 *)0x59)
#define  TOIE0        0
#define  OCIE0        1

#define  TCNT0_REG	  *((volatile u8 *)0x52)
#define  OCR0_REG	  *((volatile u8 *)0x5C)




//// TIMER0 MODES
#define NORMAL_MODE      1
#define CTC_MODE         2


#endif /* MCAL_TIMER0_TIME0_PRIV_H_ */
