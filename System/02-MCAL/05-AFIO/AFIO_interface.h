/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 27 2020                              */
/*********************************************************/
#ifndef AFIO_INTERFACE_H
#define AFIO_INTERFACE_H

#define ENABLE_AFIO()     SET_BIT(AFIO_EVCR << 7)
#define DISABLE_AFIO()    CLR_BIT(AFIO_EVCR << 7)

/* ENABLE AFIO AND SET PINS AS AFIO */
void AFIO_voidConfigAFIOPins(u8 copy_u8Port , u8 copy_u8Pin);
/* CHOOSE PORT AS AFIO FROM EXTIx */
void AFIO_voidConfigEXTI(u8 copy_u8EXTI , u8 copy_u8Port);


#endif