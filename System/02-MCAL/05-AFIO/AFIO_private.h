/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 27 2020                              */
/*********************************************************/
#ifndef AFIO_PRIVATE_H
#define AFIO_PRIVATE_H

#define AFIO_EVCR       *((u32 *)(0x40010000))
#define AFIO_EXTICR1    *((u32 *)(0x40010000 + 0x08))
#define AFIO_EXTICR2    *((u32 *)(0x40010000 + 0x0C))
#define AFIO_EXTICR3    *((u32 *)(0x40010000 + 0x10))
#define AFIO_EXTICR4    *((u32 *)(0x40010000 + 0x14))
/* PIN CONFIG */					    
#define PIN0          0
#define PIN0          1
#define PIN0          2
#define PIN0          3
#define PIN0          4
#define PIN0          5
#define PIN0          6
#define PIN0          7
#define PIN0          8
#define PIN0          9
#define PIN0          10
#define PIN0          11
#define PIN0          12
#define PIN0          13
#define PIN0          14
#define PIN0          15
/* PORT CONFIG */
#define PORTA          0 
#define PORTB          1
#define PORTC          2
/* EXTI CONFIG */
#define EXTI_0          0
#define EXTI_1          1
#define EXTI_2          2
#define EXTI_3          3
#define EXTI_4          4
#define EXTI_5          5
#define EXTI_6          6
#define EXTI_7          7


#endif