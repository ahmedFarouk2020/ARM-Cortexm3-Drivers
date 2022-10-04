/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 19 2020                              */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SS_interface.h"

#include "DIO_interface.h"
#include "RCC_interface.h"

/* USE PINS PINB0 -> PINB7 */
void SS_voidDisplayNum(u8 copy_u8Port, u8 copy_u8Mode , u8 copy_u8Num )
{
	MGPIO_voidSetPinDirection(copy_u8Port , PIN0 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN1 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN2 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN3 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN4 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN5 , OUTPUT_2MHZ_PP );
	MGPIO_voidSetPinDirection(copy_u8Port , PIN6 , OUTPUT_2MHZ_PP );
	
	switch(copy_u8Mode)
	{
		case COMMON_CATHODE : 
		          GPIOA_ODR |= copy_u8Num;
				  break;
	}
}