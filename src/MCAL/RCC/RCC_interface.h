#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
/****************************************** interfacing macros ******************************/
//controllers different buses
#define RCC_AHB1 1
#define RCC_AHB2 2
#define RCC_APB1 3
#define RCC_APB2 4

#define AHB1_GPIOH 7
u8 RCC_voidEnablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID); //n3rf enum t3l return le error state(ok,peripheral id wrong, bus id wrong)
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID);
void RCC_voidSetSystemClock(void);
#endif
