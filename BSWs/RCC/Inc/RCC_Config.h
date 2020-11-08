/************************************************************/
/* Name    :    RCC_Config.h 			 					*/
/* Author  :    Raphael Ayoub	  							*/
/* Version :    V01											*/
/* Date    :    31th October 2020							*/
/************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H


/*USER Configurations*/

#define RCC_SYSTEM_CLOCK 3
	/*
	 * 1-> default      (SYS=72MHz, AHB=72MHz, APB1=36MHz, APB2=72MHz, USB&RND=48MHz) USB Compatible
	 * 2-> default*2	(SYS=144MHz, AHB=144MHz, APB1=36MHz, APB2=144MHz, USB&RND=48MHz) USB Compatible
	 * 3-> Top-Speed	(SYS=180MHz, AHB=180MHz, APB1=45MHz, APB2=90MHz, USB&RND=45MHz) Not USB Compatible
	 * 4-> Top-Speed/2	(SYS=90MHz, AHB=90MHz, APB1=22.5MHz, APB2=45MHz, USB&RND=22.5MHz) Not USB Compatible
	 * 5-> Top-Speed/4  (SYS=45MHz, AHB=45MHz, APB1=11.25MHz, APB2=22.5MHz, USB&RND=22.5MHz) USB Compatible
	 * 6-> Custom
	 */
#if (RCC_SYSTEM_CLOCK == 6)
	#define RCC_N					(u16)		// Only Accepts Values From (50 --> 432) the output must range between (100 --> 432)MHz
	#define RCC_M					(u8)		// Only Accepts Values From (2 --> 63) it is recommended that output = 2MHz
	#define RCC_Q					(u8)		// Only Accepts Values From (2 --> 15) The output mustn't Exceed 48MHz
	#define RCC_P					(u8)		// Only Accepts 4 Values (2 , 4 , 6 , 8)
	#define RCC_PLL_SOURCE			(u8)		// Only accepts 2 values (0->HSI , 1-> HSE)
	#define RCC_SYS_SOURCE			(u8)		// Only Accepts 3 values (0->HSI , 1->HSE , 2->PLL)
	#define RCC_AHB_PRESCALER		(u16)		// Only Accepts 9 values  (1 2 4 8 16 64 128 256 512) shouldn't Exceed 180MHz
	#define RCC_APB1_PRESCALER		(u8)		// Only Accepts 5 values (1 2 4 8 16) shouldn't Exceed 45MHz
	#define RCC_APB2_PRESCALER		(u8)		// Only Accepts 5 values (1 2 4 8 16) shouldn't Exceed 90MHz
#endif





#define RCC_INITIALIZATION_SCHEME 2
	/*
	 * 1-> Manual
	 * 2-> Automatic
	 */

#if (RCC_INITIALIZATION_SCHEME ==2)
	/*TIMER*/
	#define RCC_TIM1 		DISABLE
	#define RCC_TIM2 		DISABLE
	#define RCC_TIM3 		DISABLE
	#define RCC_TIM4 		DISABLE
	#define RCC_TIM5 		DISABLE
	#define RCC_TIM6 		DISABLE
	#define RCC_TIM7 		DISABLE
	#define RCC_TIM8 		DISABLE
	#define RCC_TIM9 		DISABLE
	#define RCC_TIM10	 	DISABLE
	#define RCC_TIM11		DISABLE
	#define RCC_TIM12 		DISABLE
	#define RCC_TIM13 		DISABLE
	#define RCC_TIM14 		DISABLE
	/*GPIO*/
	#define RCC_GPIOA 		DISABLE
	#define RCC_GPIOB		DISABLE
	#define RCC_GPIOC 		DISABLE
	#define RCC_GPIOD 		DISABLE
	#define RCC_GPIOE		DISABLE
	#define RCC_GPIOF		DISABLE
	#define RCC_GPIOG		DISABLE
	#define RCC_GPIOH		DISABLE
	#define RCC_GPIOI 		DISABLE
	#define RCC_GPIOJ 		DISABLE
	#define RCC_GPIOK 		DISABLE
	/*USART*/
	#define RCC_USART1 		DISABLE
	#define RCC_USART2 		DISABLE
	#define RCC_USART3 		DISABLE
	#define RCC_UART4 		DISABLE
	#define RCC_UART5 		DISABLE
	#define RCC_USART6 		DISABLE
	#define RCC_UART7 		DISABLE
	#define RCC_UART8 		DISABLE
	/*SPI*/
	#define RCC_SPI1 		DISABLE
	#define RCC_SPI2		DISABLE
	#define RCC_SPI3		DISABLE
	#define RCC_SPI4		DISABLE
	#define RCC_SPI5		DISABLE
	#define RCC_SPI6	 	DISABLE
	/*ADC*/
	#define RCC_ADC1 		DISABLE
	#define RCC_ADC2 		DISABLE
	#define RCC_ADC3 		DISABLE
	/*I2C*/
	#define RCC_I2C1 		DISABLE
	#define RCC_I2C2 		DISABLE
	#define RCC_I2C3 		DISABLE
	/*DMA*/
	#define RCC_DMA1 		DISABLE
	#define RCC_DMA2 		DISABLE
	#define RCC_DMA2D 		DISABLE
	/*CAN*/
	#define RCC_CAN1 		DISABLE
	#define RCC_CAN2 		DISABLE
	/*DAC*/
	#define RCC_DAC 		DISABLE
	/*WATH-DOG*/
	#define RCC_WWDG 		DISABLE
	/*POWER INTERFACE*/
	#define RCC_PWR 		DISABLE
	/*SDIO*/
	#define RCC_SDIO 		DISABLE
	/*SYSTEM CONFIGURATION*/
	#define RCC_SYSCFG 		DISABLE
	/*SAI1*/
	#define RCC_SAI1 		DISABLE
	/*LTDC*/
	#define RCC_LTDC 		DISABLE
#endif

#endif










