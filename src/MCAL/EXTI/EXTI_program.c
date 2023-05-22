#include"../../LIB/BIT_MATHS.h"
#include"../../LIB/STD_TYPES.h"
#include"EXTI_cfg.h"
#include"EXTI_interface.h"
#include"EXTI_private.h"
void EXTI_voidEnableInt(u8 Copy_u8IntID,void (*Copy_PtrToFunc)(void)){
	SET_BIT(EXTI->IMR,Copy_u8IntID);
}
void EXTI_voidDisableInt(u8 Copy_u8IntID){
	CLR_BIT(EXTI->IMR,Copy_u8IntID);
}
void EXTI_voidSetSenseSignal(u8 Copy_u8SenseSignal,u8 Copy_u8IntID){
switch(Copy_u8SenseSignal){
case RISING_EDGE :
	CLR_BIT(EXTI->FTSR,Copy_u8IntID);
	SET_BIT(EXTI->RTSR,Copy_u8IntID);
	break;
case FALLING_EDGE :
	CLR_BIT(EXTI->RTSR,Copy_u8IntID);
	SET_BIT(EXTI->FTSR,Copy_u8IntID);
	break;
case ON_CHANGE :
	SET_BIT(EXTI->RTSR,Copy_u8IntID);
	SET_BIT(EXTI->FTSR,Copy_u8IntID);
	break;
}
}
void EXTI_voidSetLinePort(u8 Copy_u8IntID,u8 Copy_u8PortID){

}
