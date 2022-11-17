/*
 * SSD_prog.c
 *
 *  Created on: Sep 19, 2022
 *      Author: AbdelRahman Atef
 */

///****************INCLUDES****//

#include "SSD_int.h"

///******************_Initialization Function to Set Pins direction_***********///
void H_SSD_Void_SsdInt(void)
{
	///******_Setting SSEG_LED_A_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_A_PORT, SSEG_LED_A_PIN, OUTPUT);
	///******_Setting SSEG_LED_B_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_B_PORT, SSEG_LED_B_PIN, OUTPUT);
	///******_Setting SSEG_LED_C_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_C_PORT, SSEG_LED_C_PIN, OUTPUT);
	///******_Setting SSEG_LED_D_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_D_PORT, SSEG_LED_D_PIN, OUTPUT);
	///******_Setting SSEG_LED_E_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_E_PORT, SSEG_LED_E_PIN, OUTPUT);
	///******_Setting SSEG_LED_F_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_F_PORT, SSEG_LED_F_PIN, OUTPUT);
	///******_Setting SSEG_LED_G_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_LED_G_PORT, SSEG_LED_G_PIN, OUTPUT);

	///******_Setting SSEG_DOT_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_DOT_PORT  , SSEG_DOT_PIN  , OUTPUT);


	///******_Setting SSEG_EN1_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_EN1_PORT  , SSEG_EN1_PIN   , OUTPUT);
	///******_Setting SSEG_EN2_PIN Pin direction to OUTPUT _***********///
	M_DIO_void_SetPinDirection(SSEG_EN2_PORT  , SSEG_EN2_PIN   , OUTPUT);


}

void H_SSD_Void_SsdDisplay(u8 Local_u8_Num)
{
  ///***** Local_u8_Units is a local variable to get Units number *******//
	 u8 Local_u8_Units = Local_u8_Num %10;
 ///***** Local_u8_Tens is a local variable to get Tens number *******//
	 u8 Local_u8_Tens  = Local_u8_Num / 10;
	 u8 Local_U8_Conter ;
	 ///*******for loop to Repeat  the number displayed  to be able to see it*******///
	 for (Local_U8_Conter=0;Local_U8_Conter<200;Local_U8_Conter++)
	 	{
///********* switch case to Display the Units number ***********//
	 switch (Local_u8_Units)
	 {
	 ///**case number is 0 turn on all SSD_LEDs_ and turn off  SSD_LED_G
	  case   0:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
	  ///**case number is 1 turn on  SSD_LED_B and SSD_LED_C****//
	  case   1:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
    ///**case number is 2 turn on all LEDs_ and turn off LED_C & LED_F**//
	  case   2:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
	///**case number is 3 turn on all LEDs_ and turn off LED_E & LED_F**//
	  case   3:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
  ///**case number is 4 turn on all LEDs_ and turn off LED_A,LED_D& LED_E**//
	  case   4:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 5 turn on all LEDs_ and turn off LED_B & LED_E**//
	  case   5:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 6 turn on all LEDs_ and turn off LED_F**//
	  case   6:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 7 turn on all LEDs_ and turn off LED_D,LED_E& LED_G**//
	  case   7:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
 ///**case number is 8 turn on all LEDs_ ****************************//
	  case   8:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
  ///**case number is 9 turn on all LEDs_ and turn off  LED_E**//
	  case   9:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
	  default :             break;

	 }

 /*
  * *************_NOTE : This is used only for Enable Bits_********
  * To get units Numbers displayed on
  * Enable the SSEG_EN1_PIN = SetBit LOW
  * and
  * Disable the SSEG_EN2_PIN = SetBit HIGH
  */
	 M_DIO_void_SetPinValue(SSEG_EN1_PORT, SSEG_EN1_PIN,  LOW);
	 M_DIO_void_SetPinValue(SSEG_EN2_PORT, SSEG_EN2_PIN, HIGH);
	 	 	         _delay_ms(SSD_DELAY_TIME); ///delay for one mile second
	 M_DIO_void_SetPinValue(SSEG_EN1_PORT, SSEG_EN1_PIN,  HIGH);



///********* switch case to Display the Tens number ***********//
	 switch (Local_u8_Tens)
	 {

	 ///**case number is 0 turn on all SSD_LEDs_ and turn off  SSD_LED_G
	  case   0:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
	  ///**case number is 1 turn on  SSD_LED_B and SSD_LED_C****//
	  case   1:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
    ///**case number is 2 turn on all LEDs_ and turn off LED_C & LED_F**//
	  case   2:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
	///**case number is 3 turn on all LEDs_ and turn off LED_E & LED_F**//
	  case   3:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
  ///**case number is 4 turn on all LEDs_ and turn off LED_A,LED_D& LED_E**//
	  case   4:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 5 turn on all LEDs_ and turn off LED_B & LED_E**//
	  case   5:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 6 turn on all LEDs_ and turn off LED_F**//
	  case   6:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
 ///**case number is 7 turn on all LEDs_ and turn off LED_D,LED_E& LED_G**//
	  case   7:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN ,  LOW);
	  break;
 ///**case number is 8 turn on all LEDs_ ****************************//
	  case   8:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
  ///**case number is 9 turn on all LEDs_ and turn off  LED_E**//
	  case   9:
		  M_DIO_void_SetPinValue(SSEG_LED_A_PORT, SSEG_LED_A_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_B_PORT, SSEG_LED_B_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_C_PORT, SSEG_LED_C_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_D_PORT, SSEG_LED_D_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_E_PORT, SSEG_LED_E_PIN ,  LOW);
		  M_DIO_void_SetPinValue(SSEG_LED_F_PORT, SSEG_LED_F_PIN , HIGH);
		  M_DIO_void_SetPinValue(SSEG_LED_G_PORT, SSEG_LED_G_PIN , HIGH);
	  break;
	  default :             break;

	 }

/*
 * *************_NOTE : This is used only for Enable Bits_********
 * To get Tens Numbers displayed on
 * Disable the SSEG_EN1_PIN = SetBit HIGH
 * and
 * Enable the SSEG_EN2_PIN = SetBit LOW
 *
 */
     M_DIO_void_SetPinValue(SSEG_EN1_PORT, SSEG_EN1_PIN, HIGH);
     M_DIO_void_SetPinValue(SSEG_EN2_PORT, SSEG_EN2_PIN, LOW);
          _delay_ms(SSD_DELAY_TIME); ///delay for one mile second
	 M_DIO_void_SetPinValue(SSEG_EN2_PORT, SSEG_EN2_PIN, HIGH);

}
}
///***********to count down and display numbers*******/
void H_SSD_Void_SsdDisplayCountDown(u8 Local_u8_num)
{

	   s8 Local_s8_Counter = 0;   ////for loop local counter
   /////for loop to count down the number entered from the user
	 for(  Local_s8_Counter  = Local_u8_num ; Local_s8_Counter >=0 ; Local_s8_Counter--)
	     {
		     /////calling  H_SSD_Void_SsdDisplay to display numbers counted down
			H_SSD_Void_SsdDisplay(Local_s8_Counter);
		 }


}
