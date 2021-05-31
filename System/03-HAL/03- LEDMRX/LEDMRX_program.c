#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include"STK_interface.h"

#include "LEDMRX_interface.h"
#include "LEDMRX_private.h"
#include "LEDMRX_config.h"

static volatile u8 HLEDMRX_u8Speed = 5;
static volatile u8 HLEDMRX_u8EnableShift = 1;
static volatile u8 staticImage = 0;
static volatile u8 time = 7;

void delay(void)
{
	for(u8 i=0 ; i<time ;i++)
	{
		for(u8 j=0 ; j<250 ;j++)
		{
			asm("NOP");
		}
	}
}

void controlDelayTime(void)
{
	time++;
}

void HLEDMRX_voidInit(void)
{
	MGPIO_voidSetPinDirection(LEDMRX_ROW0_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW1_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW2_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW3_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW4_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW5_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW6_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_ROW7_PIN,OUTPUT_2MHZ_PP);
											  
	MGPIO_voidSetPinDirection(LEDMRX_COL0_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL1_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL2_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL3_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL4_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL5_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL6_PIN,OUTPUT_2MHZ_PP);
	MGPIO_voidSetPinDirection(LEDMRX_COL7_PIN,OUTPUT_2MHZ_PP);
}

static void HLEDMRX_voidDisableAllCols(void)
{
	/* disable all colmns */
	MGPIO_voidSetPinValue(LEDMRX_COL0_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL1_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL2_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL3_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL4_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL5_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL6_PIN,HIGH);
	MGPIO_voidSetPinValue(LEDMRX_COL7_PIN,HIGH);
}

static void HLEDMRX_voidSetCol(u8 copy_u8Data)
{
	u8 Local_u8Bit;  // store configuration data 
	Local_u8Bit = GET_BIT(copy_u8Data,0);
	MGPIO_voidSetPinValue(LEDMRX_ROW0_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,1);
	MGPIO_voidSetPinValue(LEDMRX_ROW1_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,2);
	MGPIO_voidSetPinValue(LEDMRX_ROW2_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,3);
	MGPIO_voidSetPinValue(LEDMRX_ROW3_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,4);
	MGPIO_voidSetPinValue(LEDMRX_ROW4_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,5);
	MGPIO_voidSetPinValue(LEDMRX_ROW5_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,6);
	MGPIO_voidSetPinValue(LEDMRX_ROW6_PIN,Local_u8Bit);
	
	Local_u8Bit = GET_BIT(copy_u8Data,7);
	MGPIO_voidSetPinValue(LEDMRX_ROW7_PIN,Local_u8Bit);
}

void HLEDMRX_voidDisplay(u8* copy_u8Data)
{
	HLEDMRX_voidDisableAllCols();
	for(u8 counter=0 ; speedCounter<= speed ; counter++)
	{
    /* set colmn 0 */
    	HLEDMRX_voidSetCol(copy_u8Data[0]);
    	MGPIO_voidSetPinValue(LEDMRX_COL0_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL0_PIN,HIGH);
    /* set colmn 1 */
    	HLEDMRX_voidSetCol(copy_u8Data[1]);
    	MGPIO_voidSetPinValue(LEDMRX_COL1_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL1_PIN,HIGH);
    /* set colmn 2 */
    	HLEDMRX_voidSetCol(copy_u8Data[2]);
    	MGPIO_voidSetPinValue(LEDMRX_COL2_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL2_PIN,HIGH);
    /* set colmn 3 */
    	HLEDMRX_voidSetCol(copy_u8Data[3]);
    	MGPIO_voidSetPinValue(LEDMRX_COL3_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL3_PIN,HIGH);
    /* set colmn 4 */
    	HLEDMRX_voidSetCol(copy_u8Data[4]);
    	MGPIO_voidSetPinValue(LEDMRX_COL4_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL4_PIN,HIGH);
    /* set colmn 5 */
    	HLEDMRX_voidSetCol(copy_u8Data[5]);
    	MGPIO_voidSetPinValue(LEDMRX_COL5_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL5_PIN,HIGH);
    /* set colmn 6 */
    	HLEDMRX_voidSetCol(copy_u8Data[6]);
    	MGPIO_voidSetPinValue(LEDMRX_COL6_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL6_PIN,HIGH);
    /* set colmn 7 */
    	HLEDMRX_voidSetCol(copy_u8Data[7]);
    	MGPIO_voidSetPinValue(LEDMRX_COL7_PIN,LOW);
    	delay(); //STK_voidSetBusyWait(2500);
		MGPIO_voidSetPinValue(LEDMRX_COL7_PIN,HIGH);
	}
}

void HLEDMRX_voidLshiftDisplay(u8* copy_u8Data)
{
	while(HLEDMRX_u8EnableShift)
	{
		STK_voidSetIntervalPeriodic(500000 , HLEDMRX_voidSetDisplaySpeed);
		for(u8 i=0 ; i<32 ; i++)
	    {
		    if(i == 32)      i= 0;
			
		    HLEDMRX_voidDisplay( (copy_u8Data+i) );
	    }
	}
	STK_voidStopTimer();
}

void HLEDMRX_voidRshiftDisplay(u8* copy_u8Data)
{
	while(HLEDMRX_u8EnableShift)
	{
		for(u8 i=23 ; i>=0 ; i--)
	    {
			if(i == 0)
				i= 23;
		    STK_voidSetIntervalPeriodic(200000 , HLEDMRX_voidSetDisplaySpeed);
		    HLEDMRX_voidDisplay(&HLEDMRX_u8data[i]);
	    }
	}
	STK_voidStopTimer();
}

void HLEDMRX_voidSpeedUp(void)
{
	HLEDMRX_u8Speed +=5 ;
}

void HLEDMRX_voidSpeedDown(void)
{
	if(HLEDMRX_u8Speed >= 6)
	   HLEDMRX_u8Speed -=5 ;
}

void HLEDMRX_voidEnableShift(void)
{
	HLEDMRX_u8EnableShift = 1; 
	staticImage = 0;
}

void HLEDMRX_voidDisableShift(void)
{
	HLEDMRX_u8EnableShift = 0; 
	staticImage = 1 ;
}

void HLEDMRX_voidShiftLeft(u8 *ptr)
{
	for(u8 i=0 ; i<=32-8 ;i++)
	{
		HLEDMRX_voidDisplay(&ptr[i]);
		if(i==24)
			i=-1;
	}
}

void HLEDMRX_voidShiftRight(u8 *ptr)
{
	for(u8 i=24 ; i>=0 ;i--)
	{
		HLEDMRX_voidDisplay(&ptr[i]); 
		if(i==0)
			i=25;
	}
}






