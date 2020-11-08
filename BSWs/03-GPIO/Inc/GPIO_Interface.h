/************************************************************/
/* Name    :    GPIO_Interface.h 							*/
/* Author  :    Raphael Ayoub								*/
/* Version :    V01											*/
/* Date    :    8th November 2020							*/
/************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "STD_TYPES.h"
#include "GPIO_Private.h"



/*GPIO Initialization According To Configuration File*/
void GPIO_Initialization(GPIO_Port_T* Port_CFG);




/*Setup Prototypes Section*/
	// Input Output AF Analog
	void GPIO_Set_Pin_Type(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin , Pin_Type_T Type);
	// PushPull OpenDrain
	void GPIO_Set_Pin_Output_Type(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin , Pin_Output_Type_T Type);
	// Low Medium High V.High
	void GPIO_Set_Pin_Output_Speed(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin , Pin_Output_Speed_T Speed);
	//PullUp PullDown NoPullUpPullDown
	void GPIO_Set_Pin_PUPD(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin , Pin_PUPD_T PUPD);
	// Lock Pin Not taken into consideration unless the Lock Confirmation is Called
	void GPIO_Lock_Pin(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin);
	// Save The Edit caused by Lock_Pin And Confirm Port Lock (Write Lock Sequence) Require MCU Reset To Undo
	void GPIO_Port_Lock_Confirmation(GPIO_Port_Select_T Port);
	// Choose AF0 -> AF15 According to the Used AF at the Pin
	void GPIO_Set_Pin_AF(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin, Pin_MUX_T MUX);



/*Interface Prototypes Section*/
	// Used To Set Individual Pin Value
	void GPIO_Set_Pin_Value(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin , Pin_Value_T Value );
	// Used To Toggel Individual Pin Value
	void GPIO_Toggle_Pin(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin );
	// Used To Set The Entire Port Value
	void GPIO_Set_Port_Value(GPIO_Port_Select_T Port , u16 Value);
	// Used To Get an in Individual Pin Value
	u8 GPIO_Get_Pin_Value(GPIO_Port_Select_T Port , GPIO_Pin_Select_T Pin);
	// Used To Get The Entire Port Value
	u16 GPIO_Get_Port_Value(GPIO_Port_Select_T Port);

#endif
