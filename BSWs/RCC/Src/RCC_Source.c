/************************************************************/
/* Name    :    RCC_Source.c 								*/
/* Author  :    Raphael Ayoub							  	*/
/* Version :    V01											*/
/* Date    :    31th October 2020							*/
/************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_Interface.h"
#include "RCC_Config.h"
#include "RCC_Private.h"

void RCC_AutoClock(void) {

	if (RCC_SYSTEM_CLOCK == 1) {
		RCC_CustomClock(4, 72, 2, 2, 1, 2, 1, 2, 1);
	} else if (RCC_SYSTEM_CLOCK == 2) {
		RCC_CustomClock(4, 144, 2, 6, 1, 2, 1, 4, 2);
	} else if (RCC_SYSTEM_CLOCK == 3) {
		RCC_CustomClock(4, 180, 2, 8, 1, 2, 1, 4, 2);
	} else if (RCC_SYSTEM_CLOCK == 4) {
		RCC_CustomClock(4, 90, 2, 8, 1, 2, 1, 4, 2);
	} else if (RCC_SYSTEM_CLOCK == 5) {
		RCC_CustomClock(8, 180, 4, 8, 1, 2, 1, 4, 2);
	} else if (RCC_SYSTEM_CLOCK == 6) {
#if(RCC_SYSTEM_CLOCK==6)
		RCC_CustomClock(RCC_M, RCC_N, RCC_P, RCC_Q,RCC_PLL_SOURCE,RCC_SYS_SOURCE, RCC_AHB_PRESCALER,
				RCC_APB1_PRESCALER, RCC_APB2_PRESCALER);
#endif
	} else {
		/*Report Error Here*/
	}
	return;
}


void RCC_CustomClock(u8 M, u16 N, u8 P, u8 Q, u8 PLLSource, u8 SYSSource, u16 AHBPre, u8 APB1Pre, u8 APB2Pre){
	CLR_BIT(RCC_CR, HSEON);
	CLR_BIT(RCC_CR, PLLON);
	RCC_SetM(M);
	RCC_SetN(N);
	RCC_SetP(P);
	RCC_SetQ(Q);
	RCC_SetPLLClockSource(PLLSource);
	RCC_SetSYSClockSource(SYSSource);
	RCC_AHBPrescaler(AHBPre);
	RCC_APB1Prescaler(APB1Pre);
	RCC_APB2Prescaler(APB2Pre);
	SET_BIT(RCC_CR, HSEON);
	SET_BIT(RCC_CR, PLLON);
}





void RCC_EnablePeripheralClock(RCC_PERIPHERAL periph){
	switch(periph){
	case TIM1:
		SET_BIT(RCC_APB2ENR,TIM1EN);
		break;
	case TIM2:
		SET_BIT(RCC_APB1ENR,TIM2EN);
		break;
	case TIM3:
		SET_BIT(RCC_APB1ENR,TIM3EN);
		break;
	case TIM4:
		SET_BIT(RCC_APB1ENR,TIM4EN);
		break;
	case TIM5:
		SET_BIT(RCC_APB1ENR,TIM5EN);
		break;
	case TIM6:
		SET_BIT(RCC_APB1ENR,TIM6EN);
		break;
	case TIM7:
		SET_BIT(RCC_APB1ENR,TIM7EN);
		break;
	case TIM8:
		SET_BIT(RCC_APB2ENR,TIM8EN);
		break;
	case TIM9:
		SET_BIT(RCC_APB2ENR,TIM9EN);
		break;
	case TIM10:
		SET_BIT(RCC_APB2ENR,TIM10EN);
		break;
	case TIM11:
		SET_BIT(RCC_APB2ENR,TIM11EN);
		break;
	case TIM12:
		SET_BIT(RCC_APB1ENR,TIM12EN);
		break;
	case TIM13:
		SET_BIT(RCC_APB1ENR,TIM13EN);
		break;
	case TIM14:
		SET_BIT(RCC_APB1ENR,TIM14EN);
		break;
	case GPIOA:
		SET_BIT(RCC_AHB1ENR,GPIOAEN);
		break;
	case GPIOB:
		SET_BIT(RCC_AHB1ENR,GPIOBEN);
		break;
	case GPIOC:
		SET_BIT(RCC_AHB1ENR,GPIOCEN);
		break;
	case GPIOD:
		SET_BIT(RCC_AHB1ENR,GPIODEN);
		break;
	case GPIOE:
		SET_BIT(RCC_AHB1ENR,GPIOEEN);
		break;
	case GPIOF:
		SET_BIT(RCC_AHB1ENR,GPIOFEN);
		break;
	case GPIOG:
		SET_BIT(RCC_AHB1ENR,GPIOGEN);
		break;
	case GPIOH:
		SET_BIT(RCC_AHB1ENR,GPIOHEN);
		break;
	case GPIOI:
		SET_BIT(RCC_AHB1ENR,GPIOIEN);
		break;
	case GPIOJ:
		SET_BIT(RCC_AHB1ENR,GPIOJEN);
		break;
	case GPIOK:
		SET_BIT(RCC_AHB1ENR,GPIOKEN);
		break;
	case USART1:
		SET_BIT(RCC_APB2ENR,USART1EN);
		break;
	case USART2:
		SET_BIT(RCC_APB1ENR,USART2EN);
		break;
	case USART3:
		SET_BIT(RCC_APB1ENR,USART3EN);
		break;
	case UART4:
		SET_BIT(RCC_APB1ENR,UART4EN);
		break;
	case UART5:
		SET_BIT(RCC_APB1ENR,UART5EN);
		break;
	case USART6:
		SET_BIT(RCC_APB2ENR,USART6EN);
		break;
	case UART7:
		SET_BIT(RCC_APB1ENR,UART7EN);
		break;
	case UART8:
		SET_BIT(RCC_APB1ENR,UART8EN);
		break;
	case SPI1:
		SET_BIT(RCC_APB2ENR,SPI1EN);
		break;
	case SPI2:
		SET_BIT(RCC_APB1ENR,SPI2EN);
		break;
	case SPI3:
		SET_BIT(RCC_APB1ENR,SPI3EN);
		break;
	case SPI4:
		SET_BIT(RCC_APB2ENR,SPI4EN);
		break;
	case SPI5:
		SET_BIT(RCC_APB2ENR,SPI5EN);
		break;
	case SPI6:
		SET_BIT(RCC_APB2ENR,SPI6EN);
		break;
	case ADC1:
		SET_BIT(RCC_APB2ENR,ADC1EN);
		break;
	case ADC2:
		SET_BIT(RCC_APB2ENR,ADC2EN);
		break;
	case ADC3:
		SET_BIT(RCC_APB2ENR,ADC3EN);
		break;
	case I2C1:
		SET_BIT(RCC_APB1ENR,I2C1EN);
		break;
	case I2C2:
		SET_BIT(RCC_APB1ENR,I2C2EN);
		break;
	case I2C3:
		SET_BIT(RCC_APB1ENR,I2C3EN);
		break;
	case DMA1:
		SET_BIT(RCC_AHB1ENR,DMA1EN);
		break;
	case DMA2:
		SET_BIT(RCC_AHB1ENR,DMA2EN);
		break;
	case DMA2D:
		SET_BIT(RCC_AHB1ENR,DMA2DEN);
		break;
	case CAN1:
		SET_BIT(RCC_APB1ENR,CAN1EN);
		break;
	case CAN2:
		SET_BIT(RCC_APB1ENR,CAN2EN);
		break;
	case DAC:
		SET_BIT(RCC_APB1ENR,DACEN);
		break;
	case WWDG:
		SET_BIT(RCC_APB1ENR,WWDGEN);
		break;
	case PWR:
		SET_BIT(RCC_APB1ENR,PWREN);
		break;
	case SDIO:
		SET_BIT(RCC_APB2ENR,SDIOEN);
		break;
	case SYSCFG:
		SET_BIT(RCC_APB2ENR,SYSCFGEN);
		break;
	case SAI1:
		SET_BIT(RCC_APB2ENR,SAI1EN);
		break;
	case LTDC:
		SET_BIT(RCC_APB2ENR,LTDCEN);
		break;
	default:
		/*Report Error Here*/
		break;
	}
	return;
}





void RCC_DisablePeripheralClock(RCC_PERIPHERAL periph){
	switch(periph){
	case TIM1:
		CLR_BIT(RCC_APB2ENR,TIM1EN);
		break;
	case TIM2:
		CLR_BIT(RCC_APB1ENR,TIM2EN);
		break;
	case TIM3:
		CLR_BIT(RCC_APB1ENR,TIM3EN);
		break;
	case TIM4:
		CLR_BIT(RCC_APB1ENR,TIM4EN);
		break;
	case TIM5:
		CLR_BIT(RCC_APB1ENR,TIM5EN);
		break;
	case TIM6:
		CLR_BIT(RCC_APB1ENR,TIM6EN);
		break;
	case TIM7:
		CLR_BIT(RCC_APB1ENR,TIM7EN);
		break;
	case TIM8:
		CLR_BIT(RCC_APB2ENR,TIM8EN);
		break;
	case TIM9:
		CLR_BIT(RCC_APB2ENR,TIM9EN);
		break;
	case TIM10:
		CLR_BIT(RCC_APB2ENR,TIM10EN);
		break;
	case TIM11:
		CLR_BIT(RCC_APB2ENR,TIM11EN);
		break;
	case TIM12:
		CLR_BIT(RCC_APB1ENR,TIM12EN);
		break;
	case TIM13:
		CLR_BIT(RCC_APB1ENR,TIM13EN);
		break;
	case TIM14:
		CLR_BIT(RCC_APB1ENR,TIM14EN);
		break;
	case GPIOA:
		CLR_BIT(RCC_AHB1ENR,GPIOAEN);
		break;
	case GPIOB:
		CLR_BIT(RCC_AHB1ENR,GPIOBEN);
		break;
	case GPIOC:
		CLR_BIT(RCC_AHB1ENR,GPIOCEN);
		break;
	case GPIOD:
		CLR_BIT(RCC_AHB1ENR,GPIODEN);
		break;
	case GPIOE:
		CLR_BIT(RCC_AHB1ENR,GPIOEEN);
		break;
	case GPIOF:
		CLR_BIT(RCC_AHB1ENR,GPIOFEN);
		break;
	case GPIOG:
		CLR_BIT(RCC_AHB1ENR,GPIOGEN);
		break;
	case GPIOH:
		CLR_BIT(RCC_AHB1ENR,GPIOHEN);
		break;
	case GPIOI:
		CLR_BIT(RCC_AHB1ENR,GPIOIEN);
		break;
	case GPIOJ:
		CLR_BIT(RCC_AHB1ENR,GPIOJEN);
		break;
	case GPIOK:
		CLR_BIT(RCC_AHB1ENR,GPIOKEN);
		break;
	case USART1:
		CLR_BIT(RCC_APB2ENR,USART1EN);
		break;
	case USART2:
		CLR_BIT(RCC_APB1ENR,USART2EN);
		break;
	case USART3:
		CLR_BIT(RCC_APB1ENR,USART3EN);
		break;
	case UART4:
		CLR_BIT(RCC_APB1ENR,UART4EN);
		break;
	case UART5:
		CLR_BIT(RCC_APB1ENR,UART5EN);
		break;
	case USART6:
		CLR_BIT(RCC_APB2ENR,USART6EN);
		break;
	case UART7:
		CLR_BIT(RCC_APB1ENR,UART7EN);
		break;
	case UART8:
		CLR_BIT(RCC_APB1ENR,UART8EN);
		break;
	case SPI1:
		CLR_BIT(RCC_APB2ENR,SPI1EN);
		break;
	case SPI2:
		CLR_BIT(RCC_APB1ENR,SPI2EN);
		break;
	case SPI3:
		CLR_BIT(RCC_APB1ENR,SPI3EN);
		break;
	case SPI4:
		CLR_BIT(RCC_APB2ENR,SPI4EN);
		break;
	case SPI5:
		CLR_BIT(RCC_APB2ENR,SPI5EN);
		break;
	case SPI6:
		CLR_BIT(RCC_APB2ENR,SPI6EN);
		break;
	case ADC1:
		CLR_BIT(RCC_APB2ENR,ADC1EN);
		break;
	case ADC2:
		CLR_BIT(RCC_APB2ENR,ADC2EN);
		break;
	case ADC3:
		CLR_BIT(RCC_APB2ENR,ADC3EN);
		break;
	case I2C1:
		CLR_BIT(RCC_APB1ENR,I2C1EN);
		break;
	case I2C2:
		CLR_BIT(RCC_APB1ENR,I2C2EN);
		break;
	case I2C3:
		CLR_BIT(RCC_APB1ENR,I2C3EN);
		break;
	case DMA1:
		CLR_BIT(RCC_AHB1ENR,DMA1EN);
		break;
	case DMA2:
		CLR_BIT(RCC_AHB1ENR,DMA2EN);
		break;
	case DMA2D:
		CLR_BIT(RCC_AHB1ENR,DMA2DEN);
		break;
	case CAN1:
		CLR_BIT(RCC_APB1ENR,CAN1EN);
		break;
	case CAN2:
		CLR_BIT(RCC_APB1ENR,CAN2EN);
		break;
	case DAC:
		CLR_BIT(RCC_APB1ENR,DACEN);
		break;
	case WWDG:
		CLR_BIT(RCC_APB1ENR,WWDGEN);
		break;
	case PWR:
		CLR_BIT(RCC_APB1ENR,PWREN);
		break;
	case SDIO:
		CLR_BIT(RCC_APB2ENR,SDIOEN);
		break;
	case SYSCFG:
		CLR_BIT(RCC_APB2ENR,SYSCFGEN);
		break;
	case SAI1:
		CLR_BIT(RCC_APB2ENR,SAI1EN);
		break;
	case LTDC:
		CLR_BIT(RCC_APB2ENR,LTDCEN);
		break;
	default:
		/*Report Error Here*/
		break;
	}
	return;
}


void RCC_AutoPeripheralsInit(void) {
#if (RCC_TIM1==ENABLE)
	RCC_EnablePeripheralClock(TIM1);
#endif
#if (RCC_TIM2==ENABLE)
	RCC_EnablePeripheralClock(TIM2);
#endif
#if (RCC_TIM3==ENABLE)
	RCC_EnablePeripheralClock(TIM3);
#endif
#if (RCC_TIM4==ENABLE)
	RCC_EnablePeripheralClock(TIM4);
#endif
#if (RCC_TIM5==ENABLE)
	RCC_EnablePeripheralClock(TIM5);
#endif
#if (RCC_TIM6==ENABLE)
	RCC_EnablePeripheralClock(TIM6);
#endif
#if (RCC_TIM7==ENABLE)
	RCC_EnablePeripheralClock(TIM7);
#endif
#if (RCC_TIM8==ENABLE)
	RCC_EnablePeripheralClock(TIM8);
#endif
#if (RCC_TIM9==ENABLE)
	RCC_EnablePeripheralClock(TIM9);
#endif
#if (RCC_TIM10==ENABLE)
	RCC_EnablePeripheralClock(TIM10);
#endif
#if (RCC_TIM11==ENABLE)
	RCC_EnablePeripheralClock(TIM11);
#endif
#if (RCC_TIM12==ENABLE)
	RCC_EnablePeripheralClock(TIM12);
#endif
#if (RCC_TIM13==ENABLE)
	RCC_EnablePeripheralClock(TIM13);
#endif
#if (RCC_TIM14==ENABLE)
	RCC_EnablePeripheralClock(TIM14);
#endif
#if (RCC_GPIOA==ENABLE)
	RCC_EnablePeripheralClock(GPIOA);
#endif
#if (RCC_GPIOB==ENABLE)
	RCC_EnablePeripheralClock(GPIOB);
#endif
#if (RCC_GPIOC==ENABLE)
	RCC_EnablePeripheralClock(GPIOC);
#endif
#if (RCC_GPIOD==ENABLE)
	RCC_EnablePeripheralClock(GPIOD);
#endif
#if (RCC_GPIOE==ENABLE)
	RCC_EnablePeripheralClock(GPIOE);
#endif
#if (RCC_GPIOF==ENABLE)
	RCC_EnablePeripheralClock(GPIOF);
#endif
#if (RCC_GPIOG==ENABLE)
	RCC_EnablePeripheralClock(GPIOG);
#endif
#if (RCC_GPIOH==ENABLE)
	RCC_EnablePeripheralClock(GPIOH);
#endif
#if (RCC_GPIOI==ENABLE)
	RCC_EnablePeripheralClock(GPIOI);
#endif
#if (RCC_GPIOJ==ENABLE)
	RCC_EnablePeripheralClock(GPIOJ);
#endif
#if (RCC_GPIOK==ENABLE)
	RCC_EnablePeripheralClock(GPIOK);
#endif
#if (RCC_USART1==ENABLE)
	RCC_EnablePeripheralClock(USART1);
#endif
#if (RCC_USART2==ENABLE)
	RCC_EnablePeripheralClock(USART2);
#endif
#if (RCC_USART3==ENABLE)
	RCC_EnablePeripheralClock(USART3);
#endif
#if (RCC_UART4==ENABLE)
	RCC_EnablePeripheralClock(UART4);
#endif
#if (RCC_UART5==ENABLE)
	RCC_EnablePeripheralClock(UART5);
#endif
#if (RCC_USART6==ENABLE)
	RCC_EnablePeripheralClock(USART6);
#endif
#if (RCC_UART7==ENABLE)
	RCC_EnablePeripheralClock(UART7);
#endif
#if (RCC_UART8==ENABLE)
	RCC_EnablePeripheralClock(UART8);
#endif
#if (RCC_SPI1==ENABLE)
	RCC_EnablePeripheralClock(SPI1);
#endif
#if (RCC_SPI2==ENABLE)
	RCC_EnablePeripheralClock(SPI2);
#endif
#if (RCC_SPI3==ENABLE)
	RCC_EnablePeripheralClock(SPI3);
#endif
#if (RCC_SPI4==ENABLE)
	RCC_EnablePeripheralClock(SPI4);
#endif
#if (RCC_SPI5==ENABLE)
	RCC_EnablePeripheralClock(SPI5);
#endif
#if (RCC_SPI6==ENABLE)
	RCC_EnablePeripheralClock(SPI6);
#endif
#if (RCC_ADC1==ENABLE)
	RCC_EnablePeripheralClock(ADC1);
#endif
#if (RCC_ADC2==ENABLE)
	RCC_EnablePeripheralClock(ADC2);
#endif
#if (RCC_ADC3==ENABLE)
	RCC_EnablePeripheralClock(ADC3);
#endif
#if (RCC_I2C1==ENABLE)
	RCC_EnablePeripheralClock(I2C1);
#endif
#if (RCC_I2C2==ENABLE)
	RCC_EnablePeripheralClock(I2C2);
#endif
#if (RCC_I2C3==ENABLE)
	RCC_EnablePeripheralClock(I2C3);
#endif
#if (RCC_DMA1==ENABLE)
	RCC_EnablePeripheralClock(DMA1);
#endif
#if (RCC_DMA2==ENABLE)
	RCC_EnablePeripheralClock(DMA2);
#endif
#if (RCC_DMA2D==ENABLE)
	RCC_EnablePeripheralClock(DMA2D);
#endif
#if (RCC_CAN1==ENABLE)
	RCC_EnablePeripheralClock(CAN1);
#endif
#if (RCC_CAN2==ENABLE)
	RCC_EnablePeripheralClock(CAN2);
#endif
#if (RCC_DAC==ENABLE)
	RCC_EnablePeripheralClock(DAC);
#endif
#if (RCC_WWDG==ENABLE)
	RCC_EnablePeripheralClock(WWDG);
#endif
#if (RCC_PWR==ENABLE)
	RCC_EnablePeripheralClock(PWR);
#endif
#if (RCC_SYSCFG==ENABLE)
	RCC_EnablePeripheralClock(SYSCFG);
#endif
#if (RCC_SDIO==ENABLE)
	RCC_EnablePeripheralClock(SDIO);
#endif
#if (RCC_SAI1==ENABLE)
	RCC_EnablePeripheralClock(SAI1);
#endif
#if (RCC_LTDC==ENABLE)
	RCC_EnablePeripheralClock(LTDC);
#endif

	return;
}




/*Private Functions*/

void RCC_SetPLLClockSource(u8 Source) {
	switch (Source) {
	case 0:
		CLR_BIT(RCC_PLLCFGR, PLLSRC);
		break;
	case 1:
		SET_BIT(RCC_PLLCFGR, PLLSRC);
		break;
	default:
		/*Error Here*/
		break;
	}

	return;
}



void RCC_SetM(u8 M) {
	u32 temp;
	if (M >= 2 && M <= 63) {
		temp = RCC_PLLCFGR;
		CLR_BIT(temp, PLLM0);
		CLR_BIT(temp, PLLM1);
		CLR_BIT(temp, PLLM2);
		CLR_BIT(temp, PLLM3);
		CLR_BIT(temp, PLLM4);
		CLR_BIT(temp, PLLM5);
		temp |= M;
		RCC_PLLCFGR = temp;
	} else {
		/*Report Error Here*/
	}
	return;
}


void RCC_SetN(u16 N) {
	u32 temp;
	if (N >= 50 && N <= 432) {
		temp = RCC_PLLCFGR;
		CLR_BIT(temp, PLLN0);
		CLR_BIT(temp, PLLN1);
		CLR_BIT(temp, PLLN2);
		CLR_BIT(temp, PLLN3);
		CLR_BIT(temp, PLLN4);
		CLR_BIT(temp, PLLN5);
		CLR_BIT(temp, PLLN6);
		CLR_BIT(temp, PLLN7);
		CLR_BIT(temp, PLLN8);
		temp |= (N << PLLN0);
		RCC_PLLCFGR = temp;
	} else {
		/*Report Error Here*/
	}

	return;
}


void RCC_SetP(u8 P) {
	u32 temp;
	temp = RCC_PLLCFGR;
	switch (P) {
	case 2:
		CLR_BIT(temp, PLLP0);
		CLR_BIT(temp, PLLP1);
		RCC_PLLCFGR = temp;
		break;
	case 4:
		SET_BIT(temp, PLLP0);
		CLR_BIT(temp, PLLP1);
		RCC_PLLCFGR = temp;
		break;
	case 6:
		CLR_BIT(temp, PLLP0);
		SET_BIT(temp, PLLP1);
		RCC_PLLCFGR = temp;
		break;
	case 8:
		SET_BIT(temp, PLLP0);
		SET_BIT(temp, PLLP1);
		RCC_PLLCFGR = temp;
		break;
	default:
		/*Report Error Here*/
		break;
	}

	return;
}

void RCC_SetQ(u8 Q) {
	u32 temp;
	if (Q >= 2 && Q <= 15) {
		temp = RCC_PLLCFGR;
		CLR_BIT(temp, PLLQ0);
		CLR_BIT(temp, PLLQ1);
		CLR_BIT(temp, PLLQ2);
		CLR_BIT(temp, PLLQ3);
		temp |= (Q << PLLQ0);
		RCC_PLLCFGR = temp;
	} else {
		/*Report Error Here*/
	}
	return;
}


void RCC_SetSYSClockSource(u8 Source) {
	u32 temp;
	temp = RCC_CFGR;
	switch (Source) {
	case 0:
		CLR_BIT(temp, SW0);
		CLR_BIT(temp, SW1);
		RCC_PLLCFGR = temp;
		break;
	case 1:
		SET_BIT(temp, SW0);
		CLR_BIT(temp, SW1);
		RCC_PLLCFGR = temp;
		break;
	case 2:
		CLR_BIT(temp, SW0);
		SET_BIT(temp, SW1);
		RCC_CFGR = temp;
		break;
	default:
		/*Report Error Here*/
		break;
	}

	return;
}


void RCC_AHBPrescaler(u16 Prescaler){
	u32 temp;
	temp=RCC_CFGR;
	switch(Prescaler){
	case 1:
		CLR_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 2:
		CLR_BIT(temp,HPRE0);
		CLR_BIT(temp,HPRE1);
		CLR_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 4:
		SET_BIT(temp,HPRE0);
		CLR_BIT(temp,HPRE1);
		CLR_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 8:
		CLR_BIT(temp,HPRE0);
		SET_BIT(temp,HPRE1);
		CLR_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 16:
		SET_BIT(temp,HPRE0);
		SET_BIT(temp,HPRE1);
		CLR_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 64:
		CLR_BIT(temp,HPRE0);
		CLR_BIT(temp,HPRE1);
		SET_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 128:
		SET_BIT(temp,HPRE0);
		CLR_BIT(temp,HPRE1);
		SET_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 256:
		CLR_BIT(temp,HPRE0);
		SET_BIT(temp,HPRE1);
		SET_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	case 512:
		SET_BIT(temp,HPRE0);
		SET_BIT(temp,HPRE1);
		SET_BIT(temp,HPRE2);
		SET_BIT(temp,HPRE3);
		RCC_CFGR=temp;
		break;
	default:
		/*Report Error Here*/
		break;
	}
	return;
}

void RCC_APB1Prescaler(u8 Prescaler) {
	u32 temp;
	temp = RCC_CFGR;
	switch (Prescaler) {
	case 1:
		CLR_BIT(temp, PPRE12);
		RCC_CFGR = temp;
		break;
	case 2:
		CLR_BIT(temp, PPRE10);
		CLR_BIT(temp, PPRE11);
		SET_BIT(temp, PPRE12);
		RCC_CFGR = temp;
		break;
	case 4:
		SET_BIT(temp, PPRE10);
		CLR_BIT(temp, PPRE11);
		SET_BIT(temp, PPRE12);
		RCC_CFGR = temp;
		break;
	case 8:
		CLR_BIT(temp, PPRE10);
		SET_BIT(temp, PPRE11);
		SET_BIT(temp, PPRE12);
		RCC_CFGR = temp;
		break;
	case 16:
		SET_BIT(temp, PPRE10);
		SET_BIT(temp, PPRE11);
		SET_BIT(temp, PPRE12);
		RCC_CFGR = temp;
		break;
	default:
		/*Report Error Here*/
		break;
	}
	return;
}


void RCC_APB2Prescaler(u8 Prescaler) {
	u32 temp;
	temp = RCC_CFGR;
	switch (Prescaler) {
	case 1:
		CLR_BIT(temp, PPRE22);
		RCC_CFGR = temp;
		break;
	case 2:
		CLR_BIT(temp, PPRE20);
		CLR_BIT(temp, PPRE21);
		SET_BIT(temp, PPRE22);
		RCC_CFGR = temp;
		break;
	case 4:
		SET_BIT(temp, PPRE20);
		CLR_BIT(temp, PPRE21);
		SET_BIT(temp, PPRE22);
		RCC_CFGR = temp;
		break;
	case 8:
		CLR_BIT(temp, PPRE20);
		SET_BIT(temp, PPRE21);
		SET_BIT(temp, PPRE22);
		RCC_CFGR = temp;
		break;
	case 16:
		SET_BIT(temp, PPRE20);
		SET_BIT(temp, PPRE21);
		SET_BIT(temp, PPRE22);
		RCC_CFGR = temp;
		break;
	default:
		/*Report Error Here*/
		break;
	}
	return;
}
