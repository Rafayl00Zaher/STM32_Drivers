/************************************************************/
/* Name    :    BIT_MATH 									*/
/* Author  :    Raphael Ayoub								*/
/* Version :    V01	    									*/
/* Date    :    31th October 2020							*/
/************************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BIT)		VAR	|=(1<<(BIT))
#define CLR_BIT(VAR,BIT)		VAR&=(~(1<<(BIT)))
#define TOG_BIT(VAR,BIT)		VAR^=(1<<(BIT))

#endif
