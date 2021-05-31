/***********************************************/
/* Author : FAROUK                             */
/* Version: V01                                */
/* Date   : Sept 30 2020                       */
/***********************************************/

#ifndef ESP_INTERFACE_H
#define ESP_INTERFACE_H

/* Close echo & Set CWMODE as STATION */
void ESP_voidInit(void);

/* Check if Command was received correctly */
u8 ESP_u8ValidateCmd(void);







#endif