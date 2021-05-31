/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 19 2020                                */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "DIO_interface.h"
#include "UART_interface.h"

u8 arr[50] = {'O','E','A','h',6,4,64,6,6,87,67,8,8,8,8,8,8,88,88,8,8,7,88,8};

int main(void)
{
	// clk = 8 MHZ
	RCC_voidInitSysClock();
	
	// enable GPIOA clk
	RCC_voidEnableClock(RCC_APB2,2);
	
	//enable UART1 clk
	RCC_voidEnableClock(RCC_APB2,14);
	
	// set UART1 pin direction 
	MGPIO_voidSetPinDirection(GPIOA,PIN9,OUTPUT_10MHZ_PP);// TX
	MGPIO_voidSetPinDirection(GPIOA,PIN10,INPUT_FLOATING);// RX
	
	MUART_voidInit();
	
	u8 dataReceved = 0;
	
	MGPIO_voidSetPinDirection(GPIOA,PIN0,OUTPUT_10MHZ_PP);
	


	while(1)
	{
		MUART_voidTransmit(arr);
		dataReceved = MUART_voidReceive();
		if(dataReceved == 8)
		{
			MGPIO_voidSetPinValue(GPIOA,PIN0,HIGH);//
		}
		else if(dataReceved == 'A')
		{
			MGPIO_voidSetPinValue(GPIOA,PIN0,LOW);//
		}
		
	}
}
