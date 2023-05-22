//3 macros for sense signal
#define FALLING_EDGE 1
#define RISING_EDGE 2
#define ON_CHANGE 3
void EXTI_voidEnableInt(u8 Copy_u8IntID);
void EXTI_voidDisableInt(u8 Copy_u8IntID);
void EXTI_voidSetSenseSignal(u8 Copy_u8SenseSignal,u8 Copy_u8IntID);
void EXTI_voidSetLinePort(u8 Copy_u8IntID,u8 Copy_u8PortID);
