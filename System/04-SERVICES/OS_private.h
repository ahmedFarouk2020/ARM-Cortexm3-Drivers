#ifndef OS_PRIVATE_H
#define OS_PRIVATE_H

typedef struct
{
	u16 periodicity ;
	void(*f_ptr)(void);
	u8 firstDelay;
	STATE TaskState = READY ;
}Task;
/* TASK STATES */

typedef enum
{DORMANT , READY, SUSPEND, DELETE}STATE;
   
 
  












#endif