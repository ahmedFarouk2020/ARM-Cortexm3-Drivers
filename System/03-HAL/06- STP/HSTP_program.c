/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 15 2020                                */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "STK_interface.h"

#include "HSTP_interface.h"
#include "HSTP_private.h"
#include "HSTP_config.h"

static void delay(void)
{
	for(u8 i=0 ; i<9 ;i++)
	{
		for(u8 j=0 ; j<250 ;j++)
		{
			asm("NOP");
		}
	}
}

static void HSTP_voidPassData(u8 copy_u8Data)
{
	u8 Local_u8Bit = 0;
	MGPIO_voidSetPinValue(STP_SHIFT_CLK,0);
	MGPIO_voidSetPinValue(STP_STORE_CLK,0);
	for(s8 i=7 ; i>=0 ; i--)
	{
		// send bit by bit serially
		Local_u8Bit = GET_BIT(copy_u8Data,i); //Local_u8Bit = (copy_u8Data>>i);
		MGPIO_voidSetPinValue(STP_SERIAL_DATA,Local_u8Bit);
		// enable clk to shift data
		MGPIO_voidSetPinValue(STP_SHIFT_CLK,HIGH);
		MSTK_voidSetBusyWait(1);
		MGPIO_voidSetPinValue(STP_SHIFT_CLK,LOW);
	}
}

// the commented part is wrong because it gives different results (not ping animation)
void HSTP_voidGetData(u8 copy_u8Data)
{
	u8 Local_u8Bit = 0;
	MGPIO_voidSetPinValue(STP_SHIFT_CLK,0);
	MGPIO_voidSetPinValue(STP_STORE_CLK,0);
	for(s8 i=7 ; i>=0 ; i--)
	{
		// send bit by bit serially
		Local_u8Bit = GET_BIT(copy_u8Data,i); //Local_u8Bit = (copy_u8Data>>i);
		MGPIO_voidSetPinValue(STP_SERIAL_DATA,Local_u8Bit);
		// send pulse to shift clk
		MGPIO_voidSetPinValue(STP_SHIFT_CLK,HIGH);
		MSTK_voidSetBusyWait(1);
		MGPIO_voidSetPinValue(STP_SHIFT_CLK,LOW);
		MSTK_voidSetBusyWait(1);
		// send pulse to shift clk2
		MGPIO_voidSetPinValue(STP_SHIFT_CLK2,HIGH);
		MSTK_voidSetBusyWait(1);
		MGPIO_voidSetPinValue(STP_SHIFT_CLK2,LOW);
		MSTK_voidSetBusyWait(1);
	}
	// send pulse to storage clk
	MGPIO_voidSetPinValue(STP_STORE_CLK,1);
	MSTK_voidSetBusyWait(1);
	MGPIO_voidSetPinValue(STP_STORE_CLK,0);
	// send pulse to storage clk2
	MGPIO_voidSetPinValue(STP_STORE_CLK2,1);
	MSTK_voidSetBusyWait(1);
	MGPIO_voidSetPinValue(STP_STORE_CLK2,0);
}

/*static void HSTP_voidShiftBits()
{
	for(u8 i=0 ; i<8 ; i++)
	{
	 // send pulse to shift clk to shift data
	    MGPIO_voidSetPinValue(STP_SHIFT_CLK,HIGH);
	    MSTK_voidSetBusyWait(1);
	    MGPIO_voidSetPinValue(STP_SHIFT_CLK,LOW);
		MSTK_voidSetBusyWait(1);
	 // send pulse to shift clk2 to shift data
	    MGPIO_voidSetPinValue(STP_SHIFT_CLK2,HIGH);
	    MSTK_voidSetBusyWait(1);
	    MGPIO_voidSetPinValue(STP_SHIFT_CLK2,LOW);
		MSTK_voidSetBusyWait(1);
	}
}
*/
void HSTP_voidDisplay(u8* copy_u8pData)
{
	while(1)
	{
	    for(u8 i=0 ; i<8 ; i++)
	    {
	        HSTP_voidPassData(1<<i);// col data for STP2
	    	HSTP_voidGetData(copy_u8pData[i]);  //send row data and store col and row data
            delay();		
	    }
    }
}










