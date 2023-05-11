/* MICRO controller ports */
#define GPIO_PORTA 1
#define GPIO_PORTB 2
#define GPIO_PORTC 3

/* output pin modes */
#define GPIO_PUSH_PULL 0
#define GPIO_OPEN_DRAIN 1

/* Output pin speed */
#define GPIO_LOW_SPEED 0
#define GPIO_MED_SPEED 1
#define GPIO_HIGH_SPEED 2
#define GPIO_VERY_HIGH_SPEED 3

/* OUTPUT PIN VALUE */
#define GPIO_OUTPUT_HIGH 1
#define GPIO_OUTPUT_LOW 0
/* function to intialize any pin to be output pin */
void GPIO_voidInitOutputPin(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8PinMode,u8 Copy_u8PinSpeed);
/* this function is to intialize any pin to be input pin */
void GPIO_voidInitInputPin(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8PullMode);
/* this function is to set the value of any output pin [high -low] */
void GPIO_voidSetOutPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Value);
/*this function is to get the value of any input pin */
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID);
