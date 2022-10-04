#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"
#include "OS_interface.h"

void LED0(void);
void LED1(void);
void LED2(void);

int main(void)
{
	/*initialization  */
	/* RCC init */
	/* enable GPIOA from RCC */
	/* GPIOA init (SET Directions) */
	OS_voidCreateTask(0 , 1000 , LED0 );
	OS_voidCreateTask(1 , 2000 , LED1 );
	OS_voidCreateTask(2 , 3000 , LED2 );
	OS_voidStart();
    
	while(1)
	{
		
	}
}

void LED0(void)
{
	u8 Local_u8Tog = 0;
	TOG_BIT(Local_u8Tog,0);
	MGPIO_voidSetPinValue(GPIOA,PIN4,Local_u8Tog);
}

void LED1(void)
{
	u8 Local_u8Tog = 0;
	TOG_BIT(Local_u8Tog,0);
	MGPIO_voidSetPinValue(GPIOA,PIN5,Local_u8Tog);
}

void LED2(void)
{
	u8 Local_u8Tog = 0;
	TOG_BIT(Local_u8Tog,0);
	MGPIO_voidSetPinValue(GPIOA,PIN6,Local_u8Tog);
}





