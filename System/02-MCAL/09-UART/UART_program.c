/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 19 2020                                */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "UART_interface.h"
#include "UART_private.h"
#include "UART_config.h"

void MUART_voidInit(void)// can be developed
{
	// baud rate=9600  BRR=0x341
	UART1->BRR = 0x341;
	
	/*
	   1- enable RX
	   2- enable TX
	   3- enable UART1
	*/
	SET_BIT(UART1->CR1,2);
	SET_BIT(UART1->CR1,3);
	SET_BIT(UART1->CR1,13);
	
	/* reset all flags */
	UART->SR = 0;
}

void MUART_voidTransmit(u8 copy_u8Arr[])
{
	u8 i = 0;
	while( copy_u8Arr[] != '/0')
	{
		// load data to data register
		UART1->DR = copy_u8Arr[i];
		
		// wait until transmition completes
		while( ! GET_BIT(UART1->SR,6) );
		
		i++;
	}
	
}

u8   MUART_voidReceive(void)
{
	// wait until data receive completes
	while( ! GET_BIT(UART1->SR,5) )
	
    // get data
	return (0xFF & (UART1->DR) );
}