/***************************************/
/*         Auother: Mahammad Heshmat   */
/*         Data   : 26-8-2022          */
/*         Version: 1.0                */
/*         Driver : EXTI               */
/***************************************/
#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_
/*
OPTIONS:	EXTI0_U8_LOW_LEVEL
			EXTI0_U8_RISING		
			EXTI0_U8_FALLING		
			EXTI0_U8_ANY_CHANGE
*/

#define EXTI0_U8_EVENT   EXTI0_U8_FALLING

/*
OPTIONS:	EXTI1_U8_LOW_LEVEL
			EXTI1_U8_RISING		
			EXTI1_U8_FALLING		
			EXTI1_U8_ANY_CHANGE
*/

#define EXTI1_U8_EVENT   EXTI1_U8_FALLING

/*
OPTIONS:	EXTI2_U8_RISING		
			EXTI2_U8_FALLING
*/

#define EXTI2_U8_EVENT   EXTI2_U8_RISING

#endif