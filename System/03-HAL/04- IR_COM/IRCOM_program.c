/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept. 3 2020                                */
/*********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "STK_interface.h"
#include "EXTI_interface.h"

#include "IRCOM_interface.h"
#include "IRCOM_private.h"
#include "IRCOM_config.h"

u8 counter = 0;
u8 data    = 0;
u16 IRCOM_Frame[50] = {0};

void func()
{
	asm("NOP");
}

/* read frame signal in microsec. from remote into array */
void IRCOM_voidReadFrameSegTime(void)
{
	if(counter == 0) /* enter this condition the first time only */
	{
		STK_voidSetIntervalSingle(1000000 , IRCOM_voidGetData);
		counter++;
	}
    else
	{
		IRCOM_Frame[counter - 1] = STK_u32GetElapsedTime();
		counter++;
	    STK_voidResetTimer();
	}
}


void IRCOM_voidGetData(void)
{
	u8 data;
	for(u8 i = 0 ; i<8 ; i++)
	{
		if(IRCOM_Frame[17+i] < 2400 && IRCOM_Frame[17+i] > 2100 )     // 2250
		{
			SET_BIT(data,i);
		}
		else if(IRCOM_Frame[17+i] < 1300 && IRCOM_Frame[17+i] > 1000) // 1125
		{
			CLR_BIT(data,i);
		}
	}
}

void IRCOM_voidDoFunction(void)
{
	IRCOM_voidGetData();
	counter = 0;
    IRCOM_Frame[50] = {0};
	switch (data)
	{
		case 70: MGPIO_VidSetPinValue(GPIOA,1,HIGH); break;
		case 69: MGPIO_VidSetPinValue(GPIOA,1,LOW);  break;
		case 22: MGPIO_VidSetPinValue(GPIOA,2,HIGH); break; // button 0
		/*case 69: MGPIO_VidSetPinValue(GPIOA,1,LOW);  break;
		case 70: MGPIO_VidSetPinValue(GPIOA,1,HIGH); break;
		case 69: MGPIO_VidSetPinValue(GPIOA,1,LOW);  break;
		case 70: MGPIO_VidSetPinValue(GPIOA,1,HIGH); break;
		case 69: MGPIO_VidSetPinValue(GPIOA,1,LOW);  break;
		case 70: MGPIO_VidSetPinValue(GPIOA,1,HIGH); break;
		case 69: MGPIO_VidSetPinValue(GPIOA,1,LOW);  break;*/
		
	}
}

