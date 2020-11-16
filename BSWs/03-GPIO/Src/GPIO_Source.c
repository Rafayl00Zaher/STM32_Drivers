/************************************************************/
/* Name    :    GPIO_Source.c 								*/
/* Author  :    Raphael Ayoub							  	*/
/* Version :    V01											*/
/* Date    :    8th November 2020							*/
/************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_Interface.h"
#include "GPIO_Private.h"

extern GPIO_Port_T GPIO_Port_CFG[GPIO_PORT_NUMBER];

void GPIO_Initialization(void) {
	u8 i = 0;
	u8 j = 0;
	for (i = 0; i < GPIO_PORT_NUMBER; i++) {
		for (j = 0; j < GPIO_PIN_NUMBER; j++) {

			/*Pin Mode Setup*/
			GPIO_Set_Pin_Type((GPIO_Port_Select_T) i, (GPIO_Pin_Select_T) j,
					GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Type);

			/*Setup Output Type*/
			GPIO_Set_Pin_Output_Type((GPIO_Port_Select_T) i,
					(GPIO_Pin_Select_T) j,
					GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Output_Type);

			/*Output Speed Setup*/
			GPIO_Set_Pin_Output_Speed((GPIO_Port_Select_T) i,
					(GPIO_Pin_Select_T) j,
					GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Output_Speed);

			/*Pull Up / Pull Down Configuration Setup*/
			GPIO_Set_Pin_PUPD((GPIO_Port_Select_T) i, (GPIO_Pin_Select_T) j,
					GPIO_Port_CFG[i].GPIO_Pin[j].Pin_PUPD);

			/*Pin LOCK Configuration Setup*/
			if (GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Lock == PIN_LOCKED) {
				GPIO_Lock_Pin((GPIO_Port_Select_T) i, (GPIO_Pin_Select_T) j);
				GPIO_Port_CFG[i].Port_Lock = PORT_LOCKED;
			} else {
				GPIO_Unlock_Pin((GPIO_Port_Select_T) i, (GPIO_Pin_Select_T) j);
			}

			/*Alternative function Setup*/
			if (GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Type == PIN_AF) {
				GPIO_Set_Pin_AF((GPIO_Port_Select_T) i, (GPIO_Pin_Select_T) j,
						GPIO_Port_CFG[i].GPIO_Pin[j].Pin_MUX);
			}

			/*Initial Value Setup*/
			if (GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Type == PIN_OUTPUT) {
				GPIO_Set_Pin_Value((GPIO_Port_Select_T) i,
						(GPIO_Pin_Select_T) j,
						GPIO_Port_CFG[i].GPIO_Pin[j].Pin_Initial_Value);
			}

		}

		/*PORT LOCK Condition*/
		if (GPIO_Port_CFG[i].Port_Lock == PORT_LOCKED) {
			GPIO_Port_Lock_Confirmation((GPIO_Port_Select_T) i);
		}

	}

	return;
}

/***********************************************************************
 * 																	   *
 * 						Setup Functions Section						   *
 * 																	   *
 * *********************************************************************/
void GPIO_Set_Pin_Type(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_Type_T Type) {

	/*Pin Mode Setup*/
	switch (Type) {
	case PIN_INPUT:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				((2 * Pin) + 1));
		break;
	case PIN_OUTPUT:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				((2 * Pin) + 1));
		break;
	case PIN_AF:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				(2 * Pin));
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				((2 * Pin) + 1));
		break;
	case PIN_ANALOG:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				(2 * Pin));
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_MODER),
				((2 * Pin) + 1));
		break;

	}

	return;
}

void GPIO_Set_Pin_Output_Type(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_Output_Type_T Type) {

	switch (Type) {
	case PUSH_PULL:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OTYPER), Pin);
		break;
	case OPEN_DRAIN:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OTYPER), Pin);
		break;
	}

	return;
}

void GPIO_Set_Pin_Output_Speed(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_Output_Speed_T Speed) {

	switch (Speed) {
	case LOW_SPEED:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				((2 * Pin) + 1));
		break;
	case MEDIUM_SPEED:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				((2 * Pin) + 1));
		break;
	case HIGH_SPEED:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				(2 * Pin));
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				((2 * Pin) + 1));
		break;
	case VERY_HIGH_SPEED:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				(2 * Pin));
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_OSPEEDR),
				((2 * Pin) + 1));
		break;

	}

	return;
}

void GPIO_Set_Pin_PUPD(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_PUPD_T PUPD) {

	switch (PUPD) {
	case NO_PULLUP_PULLDOWN:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				((2 * Pin) + 1));
		break;
	case PULL_UP:
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				(2 * Pin));
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				((2 * Pin) + 1));
		break;
	case PULL_DOWN:
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				(2 * Pin));
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_PUPDR),
				((2 * Pin) + 1));
		break;

	}

	return;
}

void GPIO_Lock_Pin(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin) {

	SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_LCKR), Pin);

	return;
}

void GPIO_Unlock_Pin(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin) {

	CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_LCKR), Pin);

	return;
}

void GPIO_Port_Lock_Confirmation(GPIO_Port_Select_T Port) {

	SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_LCKR), LCKK);
	CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_LCKR), LCKK);
	SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_LCKR), LCKK);

	return;
}

void GPIO_Set_Pin_AF(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_MUX_T MUX) {

	u32 temp = 0xffffffff;
	if (Pin <= 7) {
		temp &= ~((0xf) << 4 * Pin);
		WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_AFRL) &= temp;
		temp = (u32) MUX;
		temp = (temp << 4 * Pin);
		WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_AFRL) |= temp;
	} else {
		temp &= ~((0xf) << 4 * (Pin - 8));
		WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_AFRH) &= temp;
		temp = (u32) MUX;
		temp = (temp << 4 * (Pin - 8));
		WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_AFRH) |= temp;
	}

	return;
}

/***********************************************************************
 * 																	   *
 * 						Interface Functions Section					   *
 * 																	   *
 * *********************************************************************/

void GPIO_Set_Pin_Value(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin,
		Pin_Value_T Value) {
	if (Value == PIN_HIGH) {
		SET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_ODR), Pin);
	} else if (Value == PIN_LOW) {
		CLR_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_ODR), Pin);
	} else {
		/*ERROR Here*/
	}
	return;
}

void GPIO_Toggle_Pin(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin) {
	TOG_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_ODR), Pin);
}

void GPIO_Set_Port_Value(GPIO_Port_Select_T Port, u16 Value) {
	WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_ODR) = (u32) Value;
	return;
}

u8 GPIO_Get_Pin_Value(GPIO_Port_Select_T Port, GPIO_Pin_Select_T Pin) {

	return ((u8) GET_BIT(WRT_ADD(GPIO_Port_CFG[Port].Base_Address,GPIO_IDR),
			Pin));
}

u16 GPIO_Get_Port_Value(GPIO_Port_Select_T Port) {
	return (u16) WRT_ADD(GPIO_Port_CFG[Port].Base_Address, GPIO_IDR);
}

