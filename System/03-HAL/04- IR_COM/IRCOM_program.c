/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept. 3 2020                                */
/*********************************************************/
#include <IRCOM_Cfg.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO.h"
#include "STK_interface.h"
#include "EXTI_interface.h"

#include "IRCOM_interface.h"
#include "IRCOM_private.h"


u8 counter =0;
u8 IRCOM_u8data;
u16 IRCOM_Frame[50];


/* read frame signal in microsec. from remote into array */
void IRCOM_voidReadFrameSegTime(void)
{
	if(counter == 0) /* enter this condition the first time only */
	{
		MSTK_voidSetIntervalSingle(1000 , IRCOM_voidDoFunction);
		counter++;
	}
    else
	{
		IRCOM_Frame[counter - 1] = MSTK_u32GetElapsedTime();
		counter++;
	    MSTK_voidResetTimer();
	}
}

/*
 * Parse data section only
 */
void IRCOM_voidGetData(void)
{
	for(u8 i = 0 ; i<8 ; i++)
	{
		if(IRCOM_Frame[17+i] < 2400 && IRCOM_Frame[17+i] > 2000 )     // 2250
		{
			SET_BIT(IRCOM_u8data,i);
		}
		else if(IRCOM_Frame[17+i] < 1300 && IRCOM_Frame[17+i] > 1000) // 1125
		{
			CLR_BIT(IRCOM_u8data,i);
		}
	}

}

void IRCOM_voidDoFunction(void)
{
	IRCOM_voidGetData();
    counter = 0;
	IRCOM_Frame[0] = 0;
	switch (IRCOM_u8data)
	{
		case 70: DIO_ChannelWrite(1,1) ; break; // mode
		case 69: DIO_ChannelWrite(2,1) ; break; // off
		case 22: DIO_ChannelWrite(3,1) ; break; // button 0
		default: DIO_ChannelGroupWrite(0,0); break;

	}
}

/***************************/
// Button     |  value
/**************************/
// Silent     |  71
// play/resume| 68
// left       | 64
// right      | 67
// EQ         | 7
// VOL-       | 21
// VOL+       | 9
// 0          | 22
// RPT        | 25
// U/SD       | 13
// 1          | 12
// 2          | 24
// 3          | 94
// 4          | 8
// 5          | 28
// 6          | 90
// 7          | 66
// 8          | 82
// 9          | 74
