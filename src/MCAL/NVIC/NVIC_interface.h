
// this function sets the priority configuration
void NVIC_voidInit(void);
void NVIC_voidEnableInterrupt(u8 Copy_u8IntId);
void NVIC_voidDisableInterrupt(u8 Copy_u8IntId);
void NVIC_voidSetPendingFlag(u8 Copy_u8IntId);
void NVIC_voidClearPendingFlag(u8 Copy_u8IntId);
u8 NVIC_u8ReadActiveFlag(u8 Copy_u8IntId);
void NVIC_voidSetSWPriority(u8 Copy_u8SWPriority,u8 Copy_u8IntID);
