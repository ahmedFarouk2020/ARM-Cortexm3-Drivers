/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept. 3 2020                                */
/*********************************************************/


#ifndef IRCOM_CONFIG_H
#define IRCOM_CONFIG_H


#define NUM_OF_ACTIONS       ((u8)0)

typedef struct {
	void(*pf)(void);
	u8 button_data;
}Actions;

extern Actions ActionListConfig[NUM_OF_ACTIONS];

#endif
