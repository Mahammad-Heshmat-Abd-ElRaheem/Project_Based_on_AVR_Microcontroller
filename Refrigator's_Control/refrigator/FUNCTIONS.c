/*******************************/
/* Author: MAHAMMAD HESHMAT    */
/* Date: 1-8-2022              */
/* Version: 1.0                */
/* Module: DIO                 */
/*******************************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include "FUNCTIONS.h"
#include "GIE_int.h"
#include "LCD_int.h"

void FAN_ON (void)
{
	DIO_voidSetPinValue(COMP,0);
	DIO_voidSetPinValue(FAN,1);
}

void COMPRERSSOR_ON (void)
{
	DIO_voidSetPinValue(COMP,1);
	DIO_voidSetPinValue(FAN,0);
}

void BOTH_OFF (void)
{
	DIO_voidSetPinValue(COMP,0);
	DIO_voidSetPinValue(FAN,0);
}

u8 GET_TEMP (void)
{
	u8 temperature = 0;
	
	if(GET_BIT(PINC,3)==1) {SET_BIT(temperature,0);}
	else {CLEAR_BIT(temperature,0);}
		
	if(GET_BIT(PINC,4)==1) {SET_BIT(temperature,1);}
	else {CLEAR_BIT(temperature,1);}
	
	if(GET_BIT(PINC,5)==1) {SET_BIT(temperature,2);}
	else {CLEAR_BIT(temperature,2);}
	
	if(GET_BIT(PINC,6)==1) {SET_BIT(temperature,3);}
	else {CLEAR_BIT(temperature,3);}
		
	if(GET_BIT(PINB,4)==1) {SET_BIT(temperature,4);}
	else {CLEAR_BIT(temperature,4);}
	
	if(GET_BIT(PINB,5)==1) {SET_BIT(temperature,5);}
	else {CLEAR_BIT(temperature,5);}
	
	if(GET_BIT(PINB,6)==1) {SET_BIT(temperature,6);}
	else {CLEAR_BIT(temperature,6);}
	
	if(GET_BIT(PINB,7)==1) {SET_BIT(temperature,7);}
	else {CLEAR_BIT(temperature,7);}
	
	
	return temperature;
}

/*
void SHOW_TEMP (u8 temperature)
{
	
}
*/
