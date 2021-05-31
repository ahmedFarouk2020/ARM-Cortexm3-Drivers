/* LED MANIPULATION */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "DIO_Interface.h"
#include "STK_Interface.h"
#include "LED_interface.h"

int main()
{
/* ENABLE RCC FOR PORTA */       
	while(1)
	{
		LED_voidSetLedOn(PORTA , PIN0);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN1);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN2);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN3);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN4);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN5);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN6);
	    STK_voidSetBusyWait(1000);
	    LED_voidSetLedOn(PORTA , PIN7);
	    STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN0);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN1);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN2);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN3);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN4);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN5);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN6);
		STK_voidSetBusyWait(1000);
		LED_voidSetLedOff(PORTA , PIN7);
	}
	
}