/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 21 2020                                */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "STK_interface.h"
#include "SPI_interface.h"

#include "TFT_interface.h"
#include "TFT_private.h"
#include "TFT_config.h"

void TFT_voidInit(void)
{
	/* reset pulse */
	MGPIO_voidSetPinValue(TFT_RESET_PIN,HIGH);
	MSTK_voidSetBusyWait(100);
	MGPIO_voidSetPinValue(TFT_RESET_PIN,LOW);
	MSTK_voidSetBusyWait(1);
	MGPIO_voidSetPinValue(TFT_RESET_PIN,HIGH);
	MSTK_voidSetBusyWait(100);
	MGPIO_voidSetPinValue(TFT_RESET_PIN,LOW);
	MSTK_voidSetBusyWait(100);
	MGPIO_voidSetPinValue(TFT_RESET_PIN,HIGH);
	MSTK_voidSetBusyWait(120000);
	
	/* sleep out command */
	TFT_voidWriteCommand(0x11);
	
	/* wait 150 msec */
	MSTK_voidSetBusyWait(150000);
	
	/* color mode command */
	TFT_voidWriteCommand(0x3A);
	TFT_voidWriteData(0x05);
	
	/* display on command */
	TFT_voidWriteCommand(0x29);
}

void TFT_voidDisplayImg(const u16* copy_u16pImg)
{
	/* set X address*/
	TFT_voidWriteCommand(0x2A);
	/* the beginning */
	TFT_voidWriteData(0);
	TFT_voidWriteData(0);
	/* the end */
	TFT_voidWriteData(0);
	TFT_voidWriteData(127);
	
	/* set Y address*/
	TFT_voidWriteCommand(0x2B);
	/* the beginning */
	TFT_voidWriteData(0);
	TFT_voidWriteData(0);
	/* the end */
	TFT_voidWriteData(0);
	TFT_voidWriteData(159);
	
	/* RAM Write */
	TFT_voidWriteCommand(0x2C);
	// mistake here
	TFT_voidWriteData(0x0000);
	TFT_voidWriteData(0xF0F0);
}

void TFT_voidFillColor(u16 color)
{
	/* set X address*/
	TFT_voidWriteCommand(0x2A);
	/* the beginning */
	TFT_voidWriteData(0);
	TFT_voidWriteData(0);
	/* the end */
	TFT_voidWriteData(0);
	TFT_voidWriteData(127);
	
	/* set Y address*/
	TFT_voidWriteCommand(0x2B);
	/* the beginning */
	TFT_voidWriteData(0);
	TFT_voidWriteData(0);
	/* the end */
	TFT_voidWriteData(0);
	TFT_voidWriteData(159);
	
	/* RAM Write */
	TFT_voidWriteCommand(0x2C);
	// mistake here
	TFT_voidWriteData(0x0000);
	TFT_voidWriteData(0xF0F0);
}

static void TFT_voidWriteCommand(u8 copy_u8Command)
{
	u8 Local_u8Temp;
	
	/* A0 is LOW */
	MGPIO_voidSetPinValue(TFT_A0_PIN,LOW);
	
	/* send command over SPI */
	SPI_voidSendReceiveSyn(copy_u8Command,&Local_u8Temp);
}

static void TFT_voidWriteData(u8 copy_u8Data)
{
	u8 Local_u8Temp;
	
	/* A0 is HIGH */
	MGPIO_voidSetPinValue(TFT_A0_PIN,HIGH);
	
	/* send data over SPI */
	SPI_voidSendReceiveSyn(copy_u8Data,&Local_u8Temp);
}
