/************************************************************/
/* Name    :    BIT_MATH 									*/
/* Author  :    Raphael Ayoub								*/
/* Version :    V02	    									*/
/* Date    :    8th November 2020							*/
/************************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BIT)		VAR	|=(1<<(BIT))
#define CLR_BIT(VAR,BIT)		VAR&=(~(1<<(BIT)))
#define TOG_BIT(VAR,BIT)		VAR^=(1<<(BIT))
#define GET_BIT(VAR,BIT)		((VAR >> BIT) & 1)
#define WRT_ADD(BASE,OFFSET)	*((volatile u32*)(BASE+OFFSET))


#endif
