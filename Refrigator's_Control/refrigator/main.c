/*
 * refrigator.c
 *
 * Created: 13/12/2022 06:40:22 AM
 * Author : MA7AMMAD_7esHmaT
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "EXTI_int.h"
#include "GIE_int.h"
#include "LCD_int.h"
#include "FUNCTIONS.h"

u8 TEMP ;

ISR(INT0_vect)
{
	
	
	DIO_voidSetPinValue(INT0_PIN,1);
}



int main(void)
{
	DIO_voidInit();
    EXTI_voidInitINT0();
	EXTI_voidEnableINT0();
	GIE_voidEnable();
	LCD_voidInit();
	PORTC=30;
	SET_BIT(PORTB,4);
	SET_BIT(PORTB,5);
	SET_BIT(PORTB,6);
	SET_BIT(PORTB,7);
	DIO_voidSetPinValue(INT0_PIN,1);
	
	
	
    while (1) 
    {
		
	 
    }
}

