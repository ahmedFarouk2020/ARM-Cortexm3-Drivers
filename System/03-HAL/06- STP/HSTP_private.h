/*********************************************************/
/* author  : Farouk                                      */
/* Version : v02                                         */
/* Date    : Sept 15 2020                                */
/*********************************************************/

#ifndef HSTP_PRIVATE_H_
#define HSTP_PRIVATE_H_
/* to pass data to STP2 without storing it */
static void HSTP_voidPassData(u8 copy_u8Data);
/*     */
static void delay(void);
/* to shift 8 bits sothat STP2 can receive the data */
//static void HSTP_voidShiftBits();

#endif 
