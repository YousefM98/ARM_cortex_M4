#include"../../LIB/BIT_MATHS.h"
#include"../../LIB/STD_TYPES.h"
#include"GPIO_cfg.h"
#include"GPIO_interface.h"
#include"GPIO_private.h"
void GPIO_voidInitOutputPin(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8PinMode,u8 Copy_u8PinSpeed){
	switch(Copy_u8PortID){
	case GPIO_PORTA:
		/* set direction of bit to be output */
		/* bit masking */
		GPIOA->MODER&=~(0b11<<(Copy_u8PinID*2));
		GPIOA->MODER|=~(0b01<<(Copy_u8PinID*2));
		/* set speed of output pin */
		/* bit masking */
		GPIOA->OSPEEDR&=~(0b11<<(Copy_u8PinID*2));
		GPIOA->OSPEEDR|=~(Copy_u8PinSpeed<<(Copy_u8PinID*2));
		/* set type of output pin */
		WRT_BIT(GPIOA->OTYPER,Copy_u8PinID,Copy_u8PinMode);
		break;
	case GPIO_PORTB:
		/* set direction of bit to be output */
		/* bit masking */
		GPIOB->MODER&=~(0b11<<(Copy_u8PinID*2));
		GPIOB->MODER|=~(0b01<<(Copy_u8PinID*2));
		/* set speed of output pin */
		/* bit masking */
		GPIOB->OSPEEDR&=~(0b11<<(Copy_u8PinID*2));
		GPIOB->OSPEEDR|=~(Copy_u8PinSpeed<<(Copy_u8PinID*2));
		WRT_BIT(GPIOB->OTYPER,Copy_u8PinID,Copy_u8PinMode);
		break;
	case GPIO_PORTC:
		/* set direction of bit to be output */
		/* bit masking */
		GPIOC->MODER&=~(0b11<<(Copy_u8PinID*2));
		GPIOC->MODER|=~(0b01<<(Copy_u8PinID*2));
		/* set speed of output pin */
		/* bit masking */
		GPIOC->OSPEEDR&=~(0b11<<(Copy_u8PinID*2));
		GPIOC->OSPEEDR|=~(Copy_u8PinSpeed<<(Copy_u8PinID*2));
		WRT_BIT(GPIOC->OTYPER,Copy_u8PinID,Copy_u8PinMode);
		break;
	}
}

void GPIO_voidSetOutPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Value){
	switch(Copy_u8PortID){
		case GPIO_PORTA:
	WRT_BIT(GPIOA->ODR,Copy_u8PinID,Copy_u8Value);
			break;
		case GPIO_PORTB:
			WRT_BIT(GPIOB->ODR,Copy_u8PinID,Copy_u8Value);
			break;
		case GPIO_PORTC:
			WRT_BIT(GPIOC->ODR,Copy_u8PinID,Copy_u8Value);
			break;
		}
}
