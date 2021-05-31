/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept. 10 2020                                */
/*********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "STK_interface.h"
#include "EXTI_interface.h"
#include "HLEDMRX_interface.h"

#include "IRCOM_interface.h"
#include "IRCOM_private.h"
#include "IRCOM_config.h"

static u8 counter = 0;
static u8 data    = 0;
static u16 IRCOM_Frame[50] = {0};

void func()
{
	asm("NOP");
}

/* read frame signal in microsec. from remote into array */
void IRCOM_voidReadFrameSegTime(void)
{
	if(counter == 0) /* enter this condition the first time only */
	{
		STK_voidSetIntervalSingle(500000 , IRCOM_voidGetData);
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
	IRCOM_voidDoFunction();
}

void IRCOM_voidDoFunction(void)
{
	//IRCOM_voidGetData();
	/* reset counter and frame for the next frame */
	counter = 0;
    IRCOM_Frame[50] = {0};
	switch (data)
	{
		case  REMOTE_0                                                              break; 
		case  REMOTE_1                                                              break; 
		case  REMOTE_2                                                              break;
		case  REMOTE_3                                                              break;
		case  REMOTE_4                                                              break;
	    case  REMOTE_5                                                              break;
	    case  REMOTE_6                                                              break;
	    case  REMOTE_7                                                              break;
	    case  REMOTE_8                                                              break;
	    case  REMOTE_9                                                              break;
	    case  OFF        STK_voidStopTimer();               break;
	    case  MUTE                                                                  break;
	    case  VOL_UP     HLEDMRX_voidSpeedUp();                                                       break;
	    case  VOL_DOWN   HLEDMRX_voidSpeedDown() ;                                                      break;
	    case  STOP_RESU                                                             break;
		case  MODE                                                                  break;
	    case  LEFT       HLEDMRX_voidShiftLeft();                                                       break;
	    case  RIGHT      HLEDMRX_voidShiftRight();                                                       break;
	    case  EQ                                                                    break;
	    case  RPT                                                                   break;
	    case  U_SD                                                                  break;
	    }   
	
}

