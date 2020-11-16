/************************************************************/
/* Name    :    GPIO_Config.c 			 					*/
/* Author  :    Raphael Ayoub	  							*/
/* Version :    V01											*/
/* Date    :    16th November 2020							*/
/************************************************************/


#include "STD_TYPES.h"
#include "GPIO_Private.h"
#include "GPIO_Interface.h"



GPIO_Port_T GPIO_Port_CFG[GPIO_PORT_NUMBER]={
	{

/***********************************************************************
* 																	   *
* 						PORT A Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_A,
	.Base_Address=GPIOA_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
	.GPIO_Pin=
		{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_AF,						//Default Value After Reset
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=PULL_UP,						//Default Value After Reset
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_AF,						//Default Value After Reset
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=VERY_HIGH_SPEED,		//Default Value After Reset
					.Pin_PUPD=PULL_DOWN,					//Default Value After Reset
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_AF,						//Default Value After Reset
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=PULL_UP,						//Default Value After Reset
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT B Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_B,
	.Base_Address=GPIOB_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
	.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_AF,						//Default Value After Reset
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=VERY_HIGH_SPEED,		//Default Value After Reset
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_AF,						//Default Value After Reset
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=PULL_UP,						//Default Value After Reset
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				}

		}

	},{
/***********************************************************************
* 																	   *
* 						PORT C Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_C,
	.Base_Address=GPIOC_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}

	},{
/***********************************************************************
* 																	   *
* 						PORT D Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_D,
	.Base_Address=GPIOD_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT E Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_E,
	.Base_Address=GPIOE_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT F Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_F,
	.Base_Address=GPIOF_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT G Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_G,
	.Base_Address=GPIOG_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT H Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_H,
	.Base_Address=GPIOH_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT I Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_I,
	.Base_Address=GPIOI_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT J Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_J,
	.Base_Address=GPIOJ_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	},{
/***********************************************************************
* 																	   *
* 						PORT K Configuration						   *
* 																	   *
************************************************************************/
	.Port_Name= GPIO_PORT_K,
	.Base_Address=GPIOK_BASE_ADDRESS,
	.Port_Lock= PORT_UNLOCKED,
		.GPIO_Pin=
			{
				{
					.Pin_Name=GPIO_PIN_1,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_2,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_3,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_4,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_5,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_6,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_7,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_8,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_9,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_10,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_11,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_12,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_13,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_14,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_15,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
				},{
					.Pin_Name=GPIO_PIN_16,
					.Pin_Type=PIN_INPUT,
					.Pin_Output_Type=PUSH_PULL,
					.Pin_Output_Speed=LOW_SPEED,
					.Pin_PUPD=NO_PULLUP_PULLDOWN,
					.Pin_Lock=PIN_UNLOCKED,
					.Pin_MUX=AF0,
					.Pin_Initial_Value= PIN_LOW
			}

		}
	}
};
