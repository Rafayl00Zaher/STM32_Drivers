/************************************************************/
/* Name    :    RCC_Private.h 			       				*/
/* Author  :    Raphael Ayoub	   							*/
/* Version :    V01		  									*/
/* Date    :    31th October 2020							*/
/************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/*Private Types Section*/
typedef enum 		{TIM1,TIM2,TIM3,TIM4,TIM5,TIM6,TIM7,TIM8,TIM9,TIM10,TIM11,TIM12,TIM13,TIM14,GPIOA,GPIOB,GPIOC,
					 GPIOD,GPIOE,GPIOF,GPIOG,GPIOH,GPIOI,GPIOJ,GPIOK,USART1,USART2,USART3,UART4,UART5,USART6,UART7,
					 UART8,SPI1,SPI2,SPI3,SPI4,SPI5,SPI6,ADC1,ADC2,ADC3,I2C1,I2C2,I2C3,DMA1,DMA2,DMA2D,CAN1,CAN2,DAC,
					 WWDG,PWR,SDIO,SYSCFG,SAI1,LTDC}RCC_PERIPHERAL;


/*Register Definition*/

#define RCC_CR 				*((volatile u32*)(0x40023800))		//Clock Control Register
#define RCC_PLLCFGR 		*((volatile u32*)(0x40023804))		//PLL Configuration Register
#define RCC_CFGR 			*((volatile u32*)(0x40023808))		//Clock Configuration Register
#define RCC_CIR 			*((volatile u32*)(0x4002380C))
#define RCC_AHB1RSTR 		*((volatile u32*)(0x40023810))
#define RCC_AHB2RSTR 		*((volatile u32*)(0x40023814))
#define RCC_AHB3RSTR 		*((volatile u32*)(0x40023818))
#define RCC_APB1RSTR 		*((volatile u32*)(0x40023820))
#define RCC_APB2RSTR 		*((volatile u32*)(0x40023824))
#define RCC_AHB1ENR 		*((volatile u32*)(0x40023830))		//RCC AHB1 peripheral clock Enable register
#define RCC_AHB2ENR 		*((volatile u32*)(0x40023834))		//RCC AHB2 peripheral clock Enable register
#define RCC_AHB3ENR 		*((volatile u32*)(0x40023838))		//RCC AHB3 peripheral clock Enable register
#define RCC_APB1ENR 		*((volatile u32*)(0x40023840))		//RCC APB1 peripheral clock Enable register
#define RCC_APB2ENR 		*((volatile u32*)(0x40023844))		//RCC APB2 peripheral clock Enable register
#define RCC_AHB1LPENR 		*((volatile u32*)(0x40023850))
#define RCC_AHB2LPENR 		*((volatile u32*)(0x40023854))
#define RCC_AHB3LPENR 		*((volatile u32*)(0x40023858))
#define RCC_APB1LPENR 		*((volatile u32*)(0x40023860))
#define RCC_APB2LPENR 		*((volatile u32*)(0x40023864))
#define RCC_BDCR 			*((volatile u32*)(0x40023870))
#define RCC_CSR 			*((volatile u32*)(0x40023874))
#define RCC_SSCGR 			*((volatile u32*)(0x40023880))
#define RCC_PLLI2SCFGR 		*((volatile u32*)(0x40023884))
#define RCC_PLLSAICFGR 		*((volatile u32*)(0x40023888))
#define RCC_DCKCFGR 		*((volatile u32*)(0x4002388C))



/** BITS **/

/*RCC_CR  "Clock Control"*/
	#define HSION 		0 	// High-Speed Internal Clock ON
	#define HSIRDY 		1	// High-Speed Internal Clock READY
	#define HSITRIM0 	3	// HSI-TRIM used to calibrate the internal Clock (16 MHz RC ).....
	#define HSITRIM1 	4	// By default it has value of 0b1000 it be  either incremented or decreased ....
	#define HSITRIM2 	5	// Each step represents change of 40KHz
	#define HSITRIM3 	6
	#define HSITRIM4 	7
	#define HSICAL0 	8 	// From HSICAL0-HSICAL7 is read only digits represent the calibration value....
	#define HSICAL1 	9	// that added by the manufacturer to calibrate the internal RC Clock...
	#define HSICAL2 	10	// this value can't be written it is ** read only
	#define HSICAL3 	11
	#define HSICAL4 	12
	#define HSICAL5 	13
	#define HSICAL6 	14
	#define HSICAL7 	15
	#define HSEON 		16	// High-Speed External Clock (RC or Crystal Or Cyramic) ON
	#define HSERDY 		17	// High-Speed External Clock READY
	#define HSEBYP 		18	// High-Speed External Clock Bypass used in using RC External and discard functionality of XTAL1 Pin
	#define CSSON 		19	// Clock-Security-System Enable (Used to monitor external Clock
														//	if not stable switch to internal Automatically)
	#define PLLON 		24	// Main PLL Circuit Enable
	#define PLLRDY 		25	// Main PLL Circuit READY
	#define PLLI2SON 	26	// PLLI2S Enable
	#define PLLI2SRDY	27	// PLLI2S READY
	#define PLLSAION 	28	// PLLSAI Enable
	#define PLLSAIRDY	29	// PLLSAI READY


/*RCC_PLLCFGR		"Main PLL Configuration"*/
/**********System Clock = Clock Source *(N/(M*P))*********/
	#define PLLM0		0	// Clock Source Division Factor FROM PLLM0-PLLM5
	#define PLLM1		1
	#define PLLM2		2
	#define PLLM3		3
	#define PLLM4		4
	#define PLLM5		5
	#define PLLN0		6	// Main PLL Multiplication Factor From PLLN0-PLLN8....
	#define PLLN1		7	// CAUTION The output of these stage must be Between 100MHz-432MHz....
	#define PLLN2		8	// Refere TO STM32CUBE DIAGRAM For More Information
	#define PLLN3		9
	#define PLLN4		10
	#define PLLN5		11
	#define PLLN6		12
	#define PLLN7		13
	#define PLLN8		14
	#define PLLP0		16 	// Main PLL Division Factor (For Main System Clock) ....
	#define PLLP1		17	// CAUTION : The Output mustn't Exceed 180MHz (MAXIMUM SPEED)...
	#define PLLSRC		22	// Main PLL Clock Source (0=HSI , 1=HSE)
	#define PLLQ0		24	// Main PLL (PLL) division factor for USB OTG FS
	#define PLLQ1		25	// CAUTION For USB OTG It must be Equal to 48MHz else it should <= 48MHz
	#define PLLQ2		26
	#define PLLQ3		27  /***Very Important To Refer To STM32CUBE Diagram***/


/*RCC_CFGR  "Clock Configuration Register"*/
	#define SW0			0	// System Clock Switch to Select System Clock Source (The User Choice)
	#define SW1			1	// (00->HSI) (01->HSE) (10->PLL) (11->Not Allowed)
	#define SWS0		2	// System Clock Switch Status the Actual Clock used to feed the System
	#define SWS1		3	// (00->HSI) (01->HSE) (10->PLL) (11->Not Allowed)
	#define HPRE0		4	// AHB prescaler Set and cleared by software to control AHB clock division factor.
	#define HPRE1		5	// (0xxx-> Clock Not Divided) (1000->System Clock/2) (1001->System Clock/4) (1010->System Clock/8)
	#define HPRE2		6	// (1011->System Clock/16) (1100->System Clock/64) (1101->System Clock/128) (1110->System Clock/256)
	#define HPRE3		7	// (1111->System Clock/512) Caution :The AHB clock frequency must be at least 25 MHz when the Ethernet is used
	#define PPRE10		10	// APB Low speed prescaler (APB1) (0xx: AHB clock/1) (100: AHB clock/2)
	#define PPRE11		11	// (101: AHB clock/4) (110: AHB clock/8) (111: AHB clock/16)
	#define PPRE12		12	// Caution : The Output Shouldn't Exceed 45MHz
	#define PPRE20		13	// APB High speed prescaler (APB2) (0xx: AHB clock/1) (100: AHB clock/2)
	#define PPRE21		14	// (101: AHB clock/4) (110: AHB clock/8) (111: AHB clock/16
	#define PPRE22		15	// Caution : The Output Shouldn't Exceed 90MHz


/*RCC_AHB1ENR  "AHB1 Peripherals Clock Enable"*/
/**********((1= Enable , 0= Disable)*********/
	#define GPIOAEN			0	// GPIOA Clock Enable
	#define GPIOBEN			1	// GPIOB Clock Enable
	#define GPIOCEN			2	// GPIOC Clock Enable
	#define GPIODEN			3	// GPIOD Clock Enable
	#define GPIOEEN			4	// GPIOE Clock Enable
	#define GPIOFEN			5	// GPIOF Clock Enable
	#define GPIOGEN			6	// GPIOG Clock Enable
	#define GPIOHEN			7	// GPIOH Clock Enable
	#define GPIOIEN			8	// GPIOI Clock Enable
	#define GPIOJEN			9	// GPIOJ Clock Enable
	#define GPIOKEN			10	// GPIOK Clock Enable
	#define CRCEN			12	// CRC Module Clock Enable
	#define BKPSRAMEN		18	// Backup SRAM interface clock enable
	#define CCMDATARAMEN	20	// CCM data RAM clock enable
	#define DMA1EN			21	// DMA1 clock enable
	#define DMA2EN			22	// DMA2 clock enable
	#define DMA2DEN			23	// DMA2D clock enable
	#define ETHMACEN		25	// Ethernet MAC clock enable
	#define ETHMACTXEN		26	// Ethernet Transmission clock enable
	#define ETHMACRXEN		27	// Ethernet Reception clock enable
	#define ETHMACPTPEN		28	// Ethernet PTP clock enable
	#define OTGHSEN			29	// USB OTG HS clock enable
	#define OTGHSULPIEN		30  // USB OTG HSULPI clock enable


/*RCC_AHB2ENR  "AHB2 Peripherals Clock Enable"*/
/**********((1= Enable , 0= Disable)*********/
	#define DCMIEN 		0	// Camera interface enable
	#define CRYPEN		4	// Cryptographic modules clock enable
	#define HASHEN 		5	// Hash modules clock enable
	#define RNGEN 		6	// Random number generator clock enable
	#define TGFSEN 		7	// USB OTG FS clock enable


/*RCC_AHB3ENR  "AHB3 Peripherals Clock Enable"*/
/**********((1= Enable , 0= Disable)*********/
	#define FMCEN		0	// Flexible memory controller module clock enable


/*RCC_APB1ENR  "APB1 Peripherals Clock Enable"*/
/**********((1= Enable , 0= Disable)*********/
	#define TIM2EN			0	// TIMER2 clock enable
	#define TIM3EN			1	// TIMER3 clock enable
	#define TIM4EN			2	// TIMER4 clock enable
	#define TIM5EN			3	// TIMER5 clock enable
	#define TIM6EN			4	// TIMER6 clock enable
	#define TIM7EN			5	// TIMER7 clock enable
	#define TIM12EN			6	// TIMER12 clock enable
	#define TIM13EN			7	// TIMER13 clock enable
	#define TIM14EN			8	// TIMER14 clock enable
	#define WWDGEN			11	// Window Watch-Dog Timer clock enable
	#define SPI2EN			14	// SPI2 clock enable
	#define SPI3EN			15	// SPI3 clock enable
	#define USART2EN		17	// USART2 clock enable
	#define USART3EN		18	// USART3 clock enable
	#define UART4EN			19	// UART4 clock enable
	#define UART5EN			20	// UART5 clock enable
	#define I2C1EN			21	// I2C1 clock enable
	#define I2C2EN			22	// I2C2 clock enable
	#define I2C3EN			23	// I2C3 clock enable
	#define CAN1EN			25	// CAN1 clock enable
	#define CAN2EN			26	// CAN2 clock enable
	#define PWREN			28	// Power interface clock enable
	#define DACEN			29	// DAC interface clock enable
	#define UART7EN			30	// UART7 clock enable
	#define UART8EN			31	// UART8 clock enable


	/*RCC_APB2ENR  "APB2 Peripherals Clock Enable"*/
	/**********((1= Enable , 0= Disable)*********/
	#define TIM1EN		0	// TIMER1 clock enable
	#define TIM8EN		1	// TIMER8 clock enable
	#define USART1EN	4	// USART1 clock enable
	#define USART6EN	5	// USART6 clock enable
	#define ADC1EN		8	// ADC1 clock enable
	#define ADC2EN		9	// ADC2 clock enable
	#define ADC3EN		10	// ADC3 clock enable
	#define SDIOEN		11	// SDIO clock enable
	#define SPI1EN		12	// SPI1 clock enable
	#define SPI4EN		13	// SPI4 clock enable
	#define SYSCFGEN	14	// System configuration controller clock enable
	#define TIM9EN		16	// TIMER9 clock enable
	#define TIM10EN		17	// TIMER10 clock enable
	#define TIM11EN		18	// TIMER11 clock enable
	#define SPI5EN		20	// SPI5 clock enable
	#define SPI6EN		21	// SPI6 clock enable
	#define SAI1EN		22	// SAI1 clock enable
	#define LTDCEN		26	// LTDC clock enable




/*Private Prototypes Section*/
void RCC_SetM(u8 M);	// Only Accepts Values From (2 --> 63) it is recommended that output = 2MHz
void RCC_SetN(u16 N);	// Only Accepts Values From (50 --> 432) the output must range between (100 --> 432)MHz
void RCC_SetP(u8 P);	// Only Accepts 4 Values (2 , 4 , 6 , 8)
void RCC_SetQ(u8 Q);	// Only Accepts Values From (2 --> 15) The output mustn't Exceed 48MHz
void RCC_SetPLLClockSource(u8 Source); // Only accepts 2 values (0->HSI , 1-> HSE)
void RCC_SetSYSClockSource(u8 Source); // Only Accepts 3 values (0->HSI , 1->HSE , 2->PLL)
void RCC_AHBPrescaler(u16 Prescaler);  // Only Accepts 9 values  (1 2 4 8 16 64 128 256 512) shouldn't Exceed 180MHz
void RCC_APB1Prescaler(u8 Prescaler);  // Only Accepts 5 values (1 2 4 8 16) shouldn't Exceed 45MHz
void RCC_APB2Prescaler(u8 Prescaler);  // Only Accepts 5 values (1 2 4 8 16) shouldn't Exceed 90MHz



#endif
