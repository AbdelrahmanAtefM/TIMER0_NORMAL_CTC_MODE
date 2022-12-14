/*
 * TIME0_Prog.c
 *
 *  Created on: Nov 16, 2022
 *      Author: AbdelRahman Atef
 */

///***************** INCLUDES **********//

#include "TIME0_Int.h"
u32 MTimer0_u32NumOfOV =0;
u8 MTimer0_u8RemTicks=0;
u32 MTimer0_u32NumOfCM =0;
void (*CallBack)(void);
///***************** FUNCTIONS **********//
/// M_TIMER0_void_Timer0Int is a function to initialize Timer0///
void M_TIMER0_void_Timer0Int(void)
{
	///TIMER0 in NORMAL MODE
#if TIMER0_MODE == NORMAL_MODE
	/// To Enable NORMAL_MODE clear the two bits (WGM00,WGM01) in TCCR0_REG
	  ClrBit(TCCR0_REG ,WGM00 );
	  ClrBit(TCCR0_REG ,WGM01 );
   /// To enable TIMER0 overflow INT
   // Set TOIEO in TIMSK_REG
	  SetBit(TIMSK_REG , TOIE0);
#elif TIMER0_MODE == CTC_MODE
	  /// To Enable CTC_MODE clear WGM00 and  set WGM01 in TCCR0_REG
	  	  ClrBit(TCCR0_REG ,WGM00 );
	  	  SetBit(TCCR0_REG ,WGM01 );
	  /// To enable TIMER0 compare match INT
	   // Set OCIE0 in TIMSK_REG
	  	 SetBit(TIMSK_REG , OCIE0);
#endif //// end if for  TIMER0_MODE

}
///M_TIMER0_U8_Timer0SetTime function to set time
void M_TIMER0_U8_Timer0SetTime(u32 Loacl_u8DesierdTime_ms)
{

	/// time of the tick  time
    u32 Local_u32TickTime = TIMER0_PRESCALER / FOSC ;  /// results will be in micro sec
    /// the number of the total ticks
    u32 Local_u32TotalTicks =  (Loacl_u8DesierdTime_ms *1000) / Local_u32TickTime;
#if   TIMER0_MODE == NORMAL_MODE
    /// the number of over flow
    MTimer0_u32NumOfOV = Local_u32TotalTicks / 256;
    /// the number of the reminded ticks
    MTimer0_u8RemTicks = Local_u32TotalTicks %256 ;
    //// If there is a reminded ticks
     if(MTimer0_u8RemTicks != 0)
     {
    	 //// TCNT0_REG will start from the reminded ticks number
    	 TCNT0_REG = 256 - MTimer0_u8RemTicks;
    	 MTimer0_u32NumOfOV++;
     }
#elif TIMER0_MODE == CTC_MODE
     u8 Local_8uCounter = 255;
     while(Local_u32TotalTicks % Local_8uCounter)
     {
    	 Local_8uCounter--;
     }
     MTimer0_u32NumOfCM = Local_u32TotalTicks /Local_8uCounter ;
     OCR0_REG = Local_8uCounter - 1;

#endif
}
/// M_TIMER0_void_Timer0Start to let Timer0 start

void M_TIMER0_void_Timer0Start(void)
{
	/// Selecting prescaler
#if  TIMER0_PRESCALER == 1024       /// 1024 mode
	 /// set   CS00 in TCCR0_REG
	    SetBit(TCCR0_REG , CS00);
     /// clear CS01 in TCCR0_REG
        ClrBit(TCCR0_REG , CS01);
     /// set   CS02 in TCCR0_REG
        SetBit(TCCR0_REG , CS02);

#elif TIMER0_PRESCALER == 256      /// 256 mode
	 /// set   CS02 in TCCR0_REG
        SetBit(TCCR0_REG , CS02);
	/// clear CS01 in TCCR0_REG
        ClrBit(TCCR0_REG , CS01);
	/// clear CS00 in TCCR0_REG
        ClrBit(TCCR0_REG , CS00);
#elif TIMER0_PRESCALER == 64      /// 64 mode
	 /// set   CS02 in TCCR0_REG
        ClrBit(TCCR0_REG , CS02);
	/// clear CS01 in TCCR0_REG
        SetBit(TCCR0_REG , CS01);
	/// clear CS00 in TCCR0_REG
        SetBit(TCCR0_REG , CS00);
#elif TIMER0_PRESCALER == 8      /// 8 mode
	 /// set   CS02 in TCCR0_REG
        ClrBit(TCCR0_REG , CS02);
	/// clear CS01 in TCCR0_REG
        SetBit(TCCR0_REG , CS01);
	/// clear CS00 in TCCR0_REG
        ClrBit(TCCR0_REG , CS00);
#endif //// end if for  PRESCALER

}
///M_TIMER0_void_Timer0Stop to let Timer0 stop
void M_TIMER0_void_Timer0Stop(void)
{
	///clear the three bits (CS00 , CS01 ,CS02 )
	ClrBit(TCCR0_REG , CS00);
	ClrBit(TCCR0_REG , CS01);
	ClrBit(TCCR0_REG , CS02);
}
/// M_TIMER0_void_Timer0SetCallBack to set callback function
void M_TIMER0_void_Timer0SetCallBack(void (*Local_Ptr)(void))
{
	CallBack = Local_Ptr;

}

#if TIMER0_MODE == NORMAL_MODE
ISR(TIMER0_OVF_vect)
{
	static u32 Local_u32Conter =0;
	    Local_u32Conter ++;
	  if(Local_u32Conter ==  MTimer0_u32NumOfOV)
	  {
           CallBack();
		  Local_u32Conter =0;
		  TCNT0_REG = 256 - MTimer0_u8RemTicks;
	  }
}

#elif TIMER0_MODE == CTC_MODE

ISR(TIMER0_COMP_vect)
{
	static u32 Local_u32Conter =0;
	    Local_u32Conter ++;
	  if(Local_u32Conter ==  MTimer0_u32NumOfCM)
	  {
           CallBack();
		  Local_u32Conter =0;
	  }
}
#endif
