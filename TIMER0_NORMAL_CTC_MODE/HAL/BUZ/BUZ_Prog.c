/*
 * BUZ_Prog.c
 *
 *  Created on: Nov 14, 2022
 *      Author: AbdelRahman Atef
 */

///******'*********** INCLUDES **********//
#include  "BUZ_Int.h"

///***************** Functions **********//

///  H_BUZ_Void_BUZint function to initialize  Buzzer
void H_BUZ_Void_BUZint(void)
{
   M_DIO_void_SetPinDirection(BUZZER_PORT, BUZZER_PIN, OUTPUT);
}
void H_BUZ_Void_BUZSetON(void)
{
	M_DIO_void_SetPinValue(BUZZER_PORT, BUZZER_PIN, HIGH);
}
void H_BUZ_Void_BUZSetOFF(void)
{
	M_DIO_void_SetPinValue(BUZZER_PORT, BUZZER_PIN, LOW);
}
