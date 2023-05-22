#include"../../LIB/BIT_MATHS.h"
#include"../../LIB/STD_TYPES.h"
#include"NVIC_cfg.h"
#include"NVIC_interface.h"
#include"NVIC_private.h"
void NVIC_voidInit(void){
	//local variable for the value of AIRCR register
	u32 Local_u32Registervalue;
	// SET Configurations of system software priorities
	Local_u32Registervalue=VECT_KEY | (PRIORITY_CONFIG<<8);
	//Asign the value to AIRCR register
	SCB_AIRCR=Local_u32Registervalue;
}
void NVIC_voidEnableInterrupt(u8 Copy_u8IntId){
	NVIC->ISER[Copy_u8IntId/32]=1<<(Copy_u8IntId % 32);
}
void NVIC_voidDisableInterrupt(u8 Copy_u8IntId){
	NVIC->ICER[Copy_u8IntId/32]=1<<(Copy_u8IntId % 32);

}
void NVIC_voidSetPendingFlag(u8 Copy_u8IntId){
	NVIC->ISPR[Copy_u8IntId/32]=1<<(Copy_u8IntId % 32);

}
void NVIC_voidClearPendingFlag(u8 Copy_u8IntId){
	NVIC->ICPR[Copy_u8IntId/32]=1<<(Copy_u8IntId % 32);

}
u8 NVIC_u8ReadActiveFlag(u8 Copy_u8IntId){
u8 Local_u8ActiveFlag;
// Local_u8ActiveFlag=NVIC->IABR[Copy_u8IntId/32]>>(Copy_u8IntId%32);
	Local_u8ActiveFlag=GET_BIT(NVIC->IABR[Copy_u8IntId/32],(Copy_u8IntId%32));
	return Local_u8ActiveFlag;
}
void NVIC_voidSetSWPriority(u8 Copy_u8SWPriority,u8 Copy_u8IntID){
	//setting both group and sub priority into the high 4 bits
	NVIC->IPR[Copy_u8IntID]=Copy_u8SWPriority<<4;
	// todo enhance the function
}
