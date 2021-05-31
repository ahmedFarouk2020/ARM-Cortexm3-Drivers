/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 27 2020                              */
/*********************************************************/

void AFIO_voidConfigAFIOPins(u8 copy_u8Port , u8 copy_u8Pin)
{
	AFIO_EVCR = copy_u8Pin | (copy_u8Port << 4);
}

void AFIO_voidConfigEXTI(u8 copy_u8EXTI , u8 copy_u8Port)
{
	if(copy_u8EXTI < 4)
		AFIO_EXTICR1 = copy_u8Port << (4*copy_u8EXTI);
	else if(copy_u8EXTI <8)
		AFIO_EXTICR2 = copy_u8Port << (4*copy_u8EXTI);
	else if(copy_u8EXTI <8)
		AFIO_EXTICR3 = copy_u8Port << (4*copy_u8EXTI);
	else(copy_u8EXTI <8)
		AFIO_EXTICR4 = copy_u8Port << (4*copy_u8EXTI);
}