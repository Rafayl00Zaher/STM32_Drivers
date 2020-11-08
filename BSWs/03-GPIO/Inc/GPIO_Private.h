/************************************************************/
/* Name    :    GPIO_Private.h 			       				*/
/* Author  :    Raphael Ayoub	   							*/
/* Version :    V01		  									*/
/* Date    :    8th November 2020							*/
/************************************************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/*Private Types Section*/

	/*Used as Function Parameter If Needed*/
	typedef enum{
		GPIO_PORT_A , GPIO_PORT_B , GPIO_PORT_C ,GPIO_PORT_D ,GPIO_PORT_E ,GPIO_PORT_F ,GPIO_PORT_G ,
		GPIO_PORT_H ,GPIO_PORT_I ,GPIO_PORT_J ,GPIO_PORT_K
	} GPIO_Port_Select_T;

	/*Used as Function Parameter If Needed*/
	typedef enum{
		GPIO_PIN_1 , GPIO_PIN_2 , GPIO_PIN_3 , GPIO_PIN_4 , GPIO_PIN_5 , GPIO_PIN_6 , GPIO_PIN_7 , GPIO_PIN_8 ,
		GPIO_PIN_9 , GPIO_PIN_10 , GPIO_PIN_11 , GPIO_PIN_12 , GPIO_PIN_13 , GPIO_PIN_14 , GPIO_PIN_15 , GPIO_PIN_16
	}GPIO_Pin_Select_T;

	/*Used For Port Check to determine whether the port is modifiable or not*/
	typedef enum {
		PORT_UNLOCKED, PORT_LOCKED
	} Port_Lock_T;

	/*Used To Lock/Unlock Individual Pins in each Port*/
	typedef enum {
		PIN_UNLOCKED, PIN_LOCKED
	} Pin_Lock_T;

	/*Used To determine the Type (Direction) of Each Pin*/
	typedef enum {
	PIN_INPUT, PIN_OUTPUT, PIN_AF, PIN_ANALOG
	} Pin_Type_T;

	/*Used To determine the representation of Output whether it is PushPull or OpenDrain */
	typedef enum {
		PUSH_PULL, OPEN_DRAIN
	} Pin_Output_Type_T;

	/*Used To determine the operating Speed for each Pin refer to data-sheet page 140 for more INFO */
	typedef enum {
		LOW_SPEED,			//Less than 2MHz
		MEDIUM_SPEED,		//Less than 10MHz
		HIGH_SPEED,			//Less than 25MHz
		VERY_HIGH_SPEED		//more than 42.5MHz
	} Pin_Output_Speed_T;

	/*Used To determine if internal PullUp or PullDown or Neither is used with each Pin */
	typedef enum {
	NO_PULLUP_PULLDOWN, PULL_UP, PULL_DOWN
	} Pin_PUPD_T;

	/*Used To Select the source of the signal in case of Alternative Function is selected for this Pin */
	typedef enum {
		AF0,	//				System
		AF1,	//				(TIM1/TIM2)
		AF2,	//				(TIM3..5)
		AF3,	//				(TIM8..11)
		AF4,	//				(I2C1..3)
		AF5,	//				(SPI1/2/3/4/5/6)
		AF6,	//				(SPI2/3/SAI1)
		AF7,	//				(USART1..3)
		AF8,	//				(USART4..8)
		AF9,	//				(CAN1/CAN2, LTDC, TIM12..14)
		AF10,	//				(OTG_FS, OTG_HS)
		AF11,	//				(ETH)
		AF12,	//				(FMC, SDIO, OTG_HS)
		AF13,	//				(DCMI)
		AF14,	//				(LTDC)
		AF15	//				(EVENTOUT)
	} Pin_MUX_T;

	/*Used To Set Initial Value to Pin in-case of it is configured as Output*/
	typedef enum {
		PIN_HIGH, PIN_LOW
	} Pin_Value_T;

	/*Used to contain all configuration related to each Pin*/
	typedef struct {
		Pin_Lock_T Pin_Lock;
		Pin_Type_T Pin_Type;
		Pin_Output_Type_T Pin_Output;
		Pin_Output_Speed_T Pin_Output_Speed;
		Pin_PUPD_T Pin_PUPD;
		Pin_MUX_T Pin_MUX;
		Pin_Value_T Pin_Initial_Value;
	}GPIO_Pin_T;

	/*Used to contain all Configuration related to each Port*/
	typedef struct {
		u32 Base_Address;
		Port_Lock_T Port_Lock;
		GPIO_Pin_T GPIO_Pin;
	}GPIO_Port_T;




/*Register Definition*/

	/*Base Addresses*/
	#define GPIOA_BASE_ADDRESS		0x40020000 		//GPIO A Base Address
	#define GPIOB_BASE_ADDRESS		0x40020400		//GPIO B Base Address
	#define GPIOC_BASE_ADDRESS		0x40020800		//GPIO C Base Address
	#define GPIOD_BASE_ADDRESS		0x40020C00		//GPIO D Base Address
	#define GPIOE_BASE_ADDRESS		0x40021000		//GPIO E Base Address
	#define GPIOF_BASE_ADDRESS		0x40021400		//GPIO F Base Address
	#define GPIOG_BASE_ADDRESS		0x40021800		//GPIO G Base Address
	#define GPIOH_BASE_ADDRESS		0x40021C00		//GPIO H Base Address
	#define GPIOI_BASE_ADDRESS		0x40022000		//GPIO I Base Address
	#define GPIOJ_BASE_ADDRESS		0x40022400		//GPIO J Base Address
	#define GPIOK_BASE_ADDRESS		0x40022800		//GPIO K Base Address

	/*Offsets Addresses*/
	#define GPIO_MODER 			0x00				//GPIO Mode Register Offset
	#define GPIO_OTYPER 		0x04				//GPIO Output Type Register Offset
	#define GPIO_OSPEEDR 		0x08				//GPIO Output Speed Register Offset
	#define GPIO_PUPDR 			0x0C				//GPIO PullUp PullDown Register Offset
	#define GPIO_IDR 			0x10				//GPIO Input Data Register Offset
	#define GPIO_ODR 			0x14				//GPIO Output Data Register Offset
	#define GPIO_BSRR 			0x18				//GPIO BIT Set/Reset Register Offset
	#define GPIO_LCKR 			0x1C				//GPIO LOCK Register Offset
	#define GPIO_AFRL 			0x20				//GPIO Alternate Function LOW Register Offset
	#define GPIO_AFRH 			0x24				//GPIO Alternate Function HIGH Register Offset



/** BITS **/
	/*GPIO_MODER GPIO Mode Register Bits*/
	#define MODE00			0 		// Determine the mode of each pin (0->15)
	#define MODE01			1		// (00-> Input) , (01->General Purpose Output) ,
	#define MODE10			2		//( 10-> Alternate Function) , (11-> Analog)
	#define MODE11			3		// Reset Values For A = 0xA800 0000
	#define MODE20			4		//  			For B = 0x0000 0280
	#define MODE21			5
	#define MODE30			6
	#define MODE31			7
	#define MODE40			8
	#define MODE41			9
	#define MODE50			10
	#define MODE51			11
	#define MODE60			12
	#define MODE61			13
	#define MODE70			14
	#define MODE71			15
	#define MODE80			16
	#define MODE81			17
	#define MODE90			18
	#define MODE91			19
	#define MODE100			20
	#define MODE101			21
	#define MODE110			22
	#define MODE111			23
	#define MODE120			24
	#define MODE121			25
	#define MODE130			26
	#define MODE131			27
	#define MODE140			28
	#define MODE141			29
	#define MODE150			30
	#define MODE151			31


	/*GPIO_OTYPER GPIO Output Type Register Bits*/
	#define OT0			0		// Determine the representation of Output
	#define OT1			1		// (0-> Output PushPull)"Value Upon Reset ...default..."
	#define OT2			2		// (1-> Output OpenDrain)
	#define OT3			3
	#define OT4			4
	#define OT5			5
	#define OT6			6
	#define OT7			7
	#define OT8			8
	#define OT9			9
	#define OT10		10
	#define OT11		11
	#define OT12		12
	#define OT13		13
	#define OT14		14
	#define OT15		15


	/*GPIO_OSPEEDR GPIO Output Speed Register Bits*/
	#define OSPEED00			0 		// Determine the speed of each pin (0->15)
	#define OSPEED01			1		// (00-> Low Speed) , (01-> Medium Speed) ,
	#define OSPEED10			2		// (10-> High Speed) , (11-> Very High Speed)
	#define OSPEED11			3		// Reset Values For A = 0x0C00 0000
	#define OSPEED20			4		//  			For B = 0x0000 00C0
	#define OSPEED21			5
	#define OSPEED30			6
	#define OSPEED31			7
	#define OSPEED40			8
	#define OSPEED41			9
	#define OSPEED50			10
	#define OSPEED51			11
	#define OSPEED60			12
	#define OSPEED61			13
	#define OSPEED70			14
	#define OSPEED71			15
	#define OSPEED80			16
	#define OSPEED81			17
	#define OSPEED90			18
	#define OSPEED91			19
	#define OSPEED100			20
	#define OSPEED101			21
	#define OSPEED110			22
	#define OSPEED111			23
	#define OSPEED120			24
	#define OSPEED121			25
	#define OSPEED130			26
	#define OSPEED131			27
	#define OSPEED140			28
	#define OSPEED141			29
	#define OSPEED150			30
	#define OSPEED151			31


	/*GPIO_PUPDR GPIO PullUp/PullDown Register Bits*/
	#define PUPD00			0 		// Determine the internal resistance enabled for each pin (0->15)
	#define PUPD01			1		// (00-> No PullUp No PullDown) , (01-> PullUp) ,
	#define PUPD10			2		// (10-> PullDown) , (11-> Reserved)
	#define PUPD11			3		// Reset Values For A = 0x6400 0000
	#define PUPD20			4		//  			For B = 0x0000 0100
	#define PUPD21			5
	#define PUPD30			6
	#define PUPD31			7
	#define PUPD40			8
	#define PUPD41			9
	#define PUPD50			10
	#define PUPD51			11
	#define PUPD60			12
	#define PUPD61			13
	#define PUPD70			14
	#define PUPD71			15
	#define PUPD80			16
	#define PUPD81			17
	#define PUPD90			18
	#define PUPD91			19
	#define PUPD100			20
	#define PUPD101			21
	#define PUPD110			22
	#define PUPD111			23
	#define PUPD120			24
	#define PUPD121			25
	#define PUPD130			26
	#define PUPD131			27
	#define PUPD140			28
	#define PUPD141			29
	#define PUPD150			30
	#define PUPD151			31


	/*GPIO_IDR GPIO Input Data Register Bits*/
	#define ID0			0		// Used To Read the input applied to any pin
	#define ID1			1		// (0-> Pin_Low)
	#define ID2			2		// (1-> Pin_High)
	#define ID3			3		// Reset value: 0x0000 XXXX (where X means undefined)
	#define ID4			4
	#define ID5			5
	#define ID6			6
	#define ID7			7
	#define ID8			8
	#define ID9			9
	#define ID10		10
	#define ID11		11
	#define ID12		12
	#define ID13		13
	#define ID14		14
	#define ID15		15


	/*GPIO_ODR GPIO Input Data Register Bits*/
	#define OD0			0		// Used To  Apply output to any pin
	#define OD1			1		// (0-> Pin_Low)
	#define OD2			2		// (1-> Pin_High)
	#define OD3			3		// Reset value: 0x0000 0000
	#define OD4			4
	#define OD5			5
	#define OD6			6
	#define OD7			7
	#define OD8			8
	#define OD9			9
	#define OD10		10
	#define OD11		11
	#define OD12		12
	#define OD13		13
	#define OD14		14
	#define OD15		15


	/*GPIO_LCKR GPIO LOCK Register Bits*/
	#define LCK0			0		// Used To Lock Each pin individually (LCK0->LCK15)
	#define LCK1			1		// (0-> Port Configuration Not Locked)
	#define LCK2			2		// (1-> Port Configuration Locked)
	#define LCK3			3		// Reset value: 0x0000 0000
	#define LCK4			4
	#define LCK5			5		//LOCK key write sequence
	#define LCK6			6		//	WR LCKR[16] = ‘1’ + LCKR[15:0]
	#define LCK7			7		//	WR LCKR[16] = ‘0’ + LCKR[15:0]
	#define LCK8			8		//  WR LCKR[16] = ‘1’ + LCKR[15:0]
	#define LCK9			9
	#define LCK10			10		// Caution During the LOCK key write sequence, the value of LCK[15:0] must not change
	#define LCK11			11
	#define LCK12			12		// Caution :After the first lock sequence on any bit of the port,
	#define LCK13			13		// 			any read access on the LCKK bit will return ‘1’ until the next CPU reset.
	#define LCK14			14
	#define LCK15			15
	#define LCKK			16 		// (0-> Port Lock Not Active)   (1->Port Lock Active)


	/*GPIO_AFRL GPIO ALternative Function Low Register Bits*/
	#define AFRL00			0		// Used To Select Alternative functions that will show on the Pin
	#define AFRL01			1		// from (Pin0 -> Pin7) Each Pin has 4 bit to configure with 16 possible function
	#define AFRL02			2		//				0			system
	#define AFRL03			3		//				1			(TIM1/TIM2)
	#define AFRL10			4		//				2			(TIM3..5)
	#define AFRL11			5		//				3			(TIM8..11)
	#define AFRL12			6		//				4			(I2C1..3)
	#define AFRL13			7		//				5			(SPI1/2/3/4/5/6)
	#define AFRL20			8		//				6			(SPI2/3/SAI1)
	#define AFRL21			9		//				7			(USART1..3)
	#define AFRL22			10		//				8			(USART4..8)
	#define AFRL23			11		//				9			(CAN1/CAN2, LTDC, TIM12..14)
	#define AFRL30			12		//				10			(OTG_FS, OTG_HS)
	#define AFRL31			13		//				11			(ETH)
	#define AFRL32			14		//				12			(FMC, SDIO, OTG_HS)
	#define AFRL33			15		//				13			(DCMI)
	#define AFRL40			16		//				14			(LTDC)
	#define AFRL41			17		//				15			(EVENTOUT)
	#define AFRL42			18
	#define AFRL43			19
	#define AFRL50			20
	#define AFRL51			21
	#define AFRL52			22
	#define AFRL53			23
	#define AFRL60			24
	#define AFRL61			25
	#define AFRL62			26
	#define AFRL63			27
	#define AFRL70			28
	#define AFRL71			29
	#define AFRL72			30
	#define AFRL73			31


	/*GPIO_AFRH GPIO ALternative Function High Register Bits*/
	#define AFRH80			0		// Used To Select Alternative functions that will show on the Pin
	#define AFRH81			1		// from (Pin8 -> Pin15) Each Pin has 4 bit to configure with 16 possible function
	#define AFRH82			2		//				0			system
	#define AFRH83			3		//				1			(TIM1/TIM2)
	#define AFRH90			4		//				2			(TIM3..5)
	#define AFRH91			5		//				3			(TIM8..11)
	#define AFRH92			6		//				4			(I2C1..3)
	#define AFRH93			7		//				5			(SPI1/2/3/4/5/6)
	#define AFRH100			8		//				6			(SPI2/3/SAI1)
	#define AFRH101			9		//				7			(USART1..3)
	#define AFRH102			10		//				8			(USART4..8)
	#define AFRH103			11		//				9			(CAN1/CAN2, LTDC, TIM12..14)
	#define AFRH110			12		//				10			(OTG_FS, OTG_HS)
	#define AFRH111			13		//				11			(ETH)
	#define AFRH112			14		//				12			(FMC, SDIO, OTG_HS)
	#define AFRH113			15		//				13			(DCMI)
	#define AFRH120			16		//				14			(LTDC)
	#define AFRH121			17		//				15			(EVENTOUT)
	#define AFRH122			18
	#define AFRH123			19
	#define AFRH130			20
	#define AFRH131			21
	#define AFRH132			22
	#define AFRH133			23
	#define AFRH140			24
	#define AFRH141			25
	#define AFRH142			26
	#define AFRH143			27
	#define AFRH150			28
	#define AFRH151			29
	#define AFRH152			30
	#define AFRH153			31




#endif
