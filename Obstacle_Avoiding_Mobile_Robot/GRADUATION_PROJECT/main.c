/*
 * GRADUATION_PROJECT.c
 *
 * Created: 04/12/2022 02:34:22 AM
 * Author : MAHAMMAD_HESHMAT
 */ 

#define F_CPU 16000000UL
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "Timer_int.h"
#include "Timer1_int.h"
#include "LCD_int.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include <stdlib.h>
#include "FUNCTIONS.h"
#include "EXTI_int.h"
#include "GIE_int.h"

u8 LOCK =0 ;

ISR(INT0_vect)
{
	if ( LOCK==0 )
	{
		LOCK=1;
	} 
	else
	{
		LOCK=0;
		STOP();
	}
}

ISR(INT1_vect)
{
	STOP();
	CHECK();
	DIO_voidSetPinValue(INT1_PIN,HIGH);
}

f64 Obstacle_Dis ;

int main(void)
{
	DIO_voidInit();
	LCD_voidInit();
	TIMER0_void_Init();   // Enable Timer0 overflow interrupts
	TIMER1_voidOvInt();  // Enable Timer1 overflow interrupts
	DIO_voidSetPinValue(INT1_PIN,HIGH);  //PULLUP RESISTOR TO INT1
	EXTI_voidInitINT0();         //set INT0 on falling edge on PD2
	EXTI_voidEnableINT0();		
	EXTI_voidInitINT1();		//set INT0 on falling edge on PD3 from PC7 that mean that our controller will interrupt its self
	EXTI_voidEnableINT1();
	GIE_voidEnable();   // Enable global interrupt
	
	TIMER0_void_SetCompareVal(24);  //SET THE SERVO ON 90 DEGREE
	
	LCD_voidClear();                                // clear our LCD
	LCD_voidSetCursor( LCD_U8_LINE1 , 1 );			// set our cursor on the upper line  in digit 1
	LCD_voidSendString("OBSTACLE AFTER");
	LCD_voidSetCursor( LCD_U8_LINE2 , 9 );
	LCD_voidSendString("cm");
	
	while(1)
	{	
		while ( LOCK == 1 )		//while variable LOCK doesn't change from INT0 MAGNAM will work 
		{
			GO_FORWARD();			//function to make MAGNAM go forward
			
			Obstacle_Dis = ULTRASONIC_f64Distance();     // getting the distance from the ultrasonic
			LCD_voidSetCursor( LCD_U8_LINE2 , 5 );		// and display it 
			LCD_voidSendNumberIII ((u16)Obstacle_Dis);
			
			if( Obstacle_Dis < 45.0000 )
			{
				DIO_voidSetPinValue(INT1_PIN,LOW);   // making falling edge if we are in thread to interrupt our ATmega
			}		
		}
	}
}


