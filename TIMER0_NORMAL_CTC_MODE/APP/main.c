/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///************************* Application on TIMER0 in NORMAL_MODE & CTC_MODE ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{

	    //// initialize blue led
	    H_LED_Void_LedInit(BLUE_LED);
	    //// CallBack function
	    M_TIMER0_void_Timer0SetCallBack(A_TIMER0_void_Timer0Exc);
	    //// Enabling the general interrupts
	    M_GIE_void_GIE_EN();
	    //// initialize TIMER0
        M_TIMER0_void_Timer0Int();
        /// function to set desired  time to the TIMER0
        M_TIMER0_U8_Timer0SetTime(500);   ///  desired time (500ms)
        //// function to start the TIMER0
        M_TIMER0_void_Timer0Start();

    while (1)
       {


       }


}

//// TIMER0 execution function
void A_TIMER0_void_Timer0Exc(void)
{
   ///Interrupt the CPU and  toggle the BLUE_LED
   H_LED_Void_LedTogg(BLUE_LED);
}
