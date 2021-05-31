/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 31 2020                              */
/*********************************************************/

#ifndef LEDMRX_INTERFACE_H
#define LEDMRX_INTERFACE_H

/* INITIALIZE PIN DIRECTION MODE (output) */
void HLEDMRX_voidInit(void);
/* display a shape -->  */
void HLEDMRX_voidDisplay(u8* copy_u8Data);
/* to display arabic word or thing will be right shift */
void HLEDMRX_voidRshiftDisplay(u8* copy_u8Data);
/* to display arabic word or thing will be left shifted */
void HLEDMRX_voidLshiftDisplay(u8* copy_u8Data);
/* enable shift display functions */
void HLEDMRX_voidEnableShift(void);
/* disable shift display functions */
void HLEDMRX_voidDisableShift(void);
/* controls speed of shifting */
void HLEDMRX_voidSetDisplaySpeed(void);
/* V02 */
void HLEDMRX_voidShiftLeft(u8 *ptr);
void HLEDMRX_voidShiftRight(u8 *ptr);
void HLEDMRX_voidSpeedDown(void);
void HLEDMRX_voidSpeedUp(void);





#endif