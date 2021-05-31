#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "STK_interface.h"
//#include "EXTI_interface.h"

#include "DAC_interface.h"
#include "DAC_private.h"
#include "DAC_config.h"

static volatile u16 freq = 0;

void DAC_voidReadAudioArr(u8* copy_u8AudioData, u8 copy_u8Size)// can be optimized
{
	u8 Local_u8Bit = 0;
	for(u16 i=0 ; i<copy_u8Size ; i++)
	{
		/* DAC0*/
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],0);
		MGPIO_voidSetPinValue(GPIOA,PIN8,Local_u8Bit);
		/* DAC1 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],1);
		MGPIO_voidSetPinValue(GPIOA,PIN9,Local_u8Bit);
		/* DAC2 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],2);
		MGPIO_voidSetPinValue(GPIOA,PIN10,Local_u8Bit);
		/* DAC3 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],3);
		MGPIO_voidSetPinValue(GPIOA,PIN11,Local_u8Bit);
		/* DAC4 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],4);
		MGPIO_voidSetPinValue(GPIOA,PIN12,Local_u8Bit);
		/* DAC5 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],5);
		MGPIO_voidSetPinValue(GPIOA,PIN15,Local_u8Bit);
		/* DAC6 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],6);
		MGPIO_voidSetPinValue(GPIOB,PIN11,Local_u8Bit);
		/* DAC7 */
		Local_u8Bit = GET_BIT(copy_u8AudioData[i],7);
		MGPIO_voidSetPinValue(GPIOB,PIN12,Local_u8Bit);
		STK_voidSetBusyWait( (1/freq) );
	}
}

void  DAC_voidIncreaseFreq(void)
{
	freq +=  ;
}

void  DAC_voidDecreaseFreq(void)
{
	freq -=  ;
}