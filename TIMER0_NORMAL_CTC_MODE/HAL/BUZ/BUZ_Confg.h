/*
 * BUZ_Confg.h
 *
 *  Created on: Nov 14, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef HAL_BUZ_BUZ_CONFG_H_
#define HAL_BUZ_BUZ_CONFG_H_

///***************** Macros **********//
/*
 * Select Buzzer port:
 * PORT -> PORTA_ID, PORTB_ID, PORTC_ID, PORTD_ID
 * PIN  -> PIN0 .... PIN7
 */
#define  BUZZER_PORT      PORTC_ID
#define  BUZZER_PIN       PIN5


/*
 * Select Buzzer delay time
 */
#define  BUZZER_Delay_Time    1000


#endif /* HAL_BUZ_BUZ_CONFG_H_ */
