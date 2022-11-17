/*
 * SSD_confg.h
 *
 *  Created on: Sep 19, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef HAL_SSD_SSD_CONFG_H_
#define HAL_SSD_SSD_CONFG_H_

//****************INCLUDES*************//

//***************MACROS**************//
//***************select_delay_time*********/

#define  SSD_DELAY_TIME   1

//***************select_F_CPU*********/

/*
 * choose:
 *
 * PORT -> PORTA_ID, PORTB_ID, PORTC_ID, PORTD_ID
 * PIN  -> PIN1 .... PIN7
 */

#define SSEG_LED_A_PORT   PORTA_ID     ///SSEG_LED_A_Port_Id
#define SSEG_LED_A_PIN    PIN0         ///SSEG_LED_A_PIN_Id

#define SSEG_LED_B_PORT   PORTA_ID    ///SSEG_LED_B_Port_Id
#define SSEG_LED_B_PIN    PIN1        ///SSEG_LED_B_PIN_Id

#define SSEG_LED_C_PORT   PORTA_ID    ///SSEG_LED_c_Port_Id
#define SSEG_LED_C_PIN    PIN2        ///SSEG_LED_C_PIN_Id

#define SSEG_LED_D_PORT   PORTA_ID    ///SSEG_LED_D_Port_Id
#define SSEG_LED_D_PIN    PIN3        ///SSEG_LED_D_PIN_Id

#define SSEG_LED_E_PORT   PORTA_ID     ///SSEG_LED_E_Port_Id
#define SSEG_LED_E_PIN    PIN4         ///SSEG_LED_E_PIN_Id

#define SSEG_LED_F_PORT   PORTA_ID     ///SSEG_LED_F_Port_Id
#define SSEG_LED_F_PIN    PIN5         ///SSEG_LED_F_PIN_Id

#define SSEG_LED_G_PORT   PORTA_ID     ///SSEG_LED_G_Port_Id
#define SSEG_LED_G_PIN    PIN6         ///SSEG_LED_G_PIN_Id

#define SSEG_DOT_PORT     PORTA_ID        //Decimal point
#define SSEG_DOT_PIN      PIN7

#define SSEG_EN1_PORT     PORTC_ID        // Enable SSEG digit 1
#define SSEG_EN1_PIN      PIN6

#define SSEG_EN2_PORT     PORTC_ID        // Enable SSEG digit 2
#define SSEG_EN2_PIN      PIN7





#endif /* HAL_SSD_SSD_CONFG_H_ */
