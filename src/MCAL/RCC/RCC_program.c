#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATHS.h"

#include"RCC_cfg.h"
#include"RCC_interface.h"
#include"RCC_private.h"

void RCC_voidSetSystemClock(void){
#if SYSTEM_CLK_SRC == HSI
	SET_BIT(RCC_CR,0); //Enable high speed internal clock (16 mhz)
	CLR_BIT(RCC_CFGR,0); //Select HSI as system clock source
	CLR_BIT(RCC_CFGR,1);
#elif SYSTEM_CLK_SRC == HSE_RC
	SET_BIT(RCC_CR,16); //Enable HSE Clock
	SET_BIT(RCC_CR,18);//choose RC external (enable by pass mode)
	SET_BIT(RCC_CFGR,0); //Select HSE as system clock source
	CLR_BIT(RCC_CFGR,1);
#elif SYSTEM_CLK_SRC == HSE_CRYSTAL
	SET_BIT(RCC_CR,16);// enable HSE Clock
	CLR_BIT(RCC_CR,18); // choose crystal external (disable by pass mode)
	SET_BIT(RCC_CFGR,0); //Select HSE as system clock source
	CLR_BIT(RCC_CFGR,1);
#elif SYSTEM_CLK_SRC == PLL
#else
#error("wrong configuration");
#endif
}
u8 RCC_voidEnablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID){
	switch(Copy_u8BusID){
	case RCC_AHB1:
		SET_BIT(RCC_AHB1ENR,Copy_u8PeripheralID);
		break;

	case RCC_AHB2:
		SET_BIT(RCC_AHB2ENR,Copy_u8PeripheralID);
		break;

	case RCC_APB1:
		SET_BIT(RCC_APB1ENR,Copy_u8PeripheralID);
		break;

	case RCC_APB2:
		SET_BIT(RCC_APB2ENR,Copy_u8PeripheralID);
		break;
	default : /* return error state */ break;
	}
}
void RCC_voidDisablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID){
	switch(Copy_u8BusID){
	case RCC_AHB1:
		CLR_BIT(RCC_AHB1ENR,Copy_u8PeripheralID);
		break;

	case RCC_AHB2:
		CLR_BIT(RCC_AHB2ENR,Copy_u8PeripheralID);
		break;

	case RCC_APB1:
		CLR_BIT(RCC_APB1ENR,Copy_u8PeripheralID);
		break;

	case RCC_APB2:
		CLR_BIT(RCC_APB2ENR,Copy_u8PeripheralID);
		break;
	default : /* return error state */ break;
	}
}
