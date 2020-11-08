/************************************************************/
/* Name    :    RCC_Interface.h 							*/
/* Author  :    Raphael Ayoub								*/
/* Version :    V01											*/
/* Date    :    31th October 2020							*/
/************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#include "STD_TYPES.h"
#include "RCC_Private.h"
#include "RCC_Config.h"


/*Prototypes Section*/
void RCC_AutoClock(void);
void RCC_CustomClock(u8 M, u16 N, u8 P, u8 Q, u8 PLLSource, u8 SYSSource, u16 AHBPre, u8 APB1Pre, u8 APB2Pre);
void RCC_AutoPeripheralsInit(void);
#if (RCC_INITIALIZATION_SCHEME==1)
void RCC_ManualPeripheralsInit(void);
#endif
void RCC_EnablePeripheralClock(RCC_PERIPHERAL periph);
void RCC_DisablePeripheralClock(RCC_PERIPHERAL periph);


#endif
