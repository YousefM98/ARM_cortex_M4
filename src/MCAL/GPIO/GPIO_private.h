
typedef struct {
	u32 MODER; //this register is to set the mode of any pin
	u32 OTYPER;//this register is to set the type  of output pins[PP/OD]
	u32 OSPEEDR;// this register is to set the speed of output pins
	u32 PUPDR;// this register is to select whether pull up or pull down input
	u32 IDR;// this register is to get the value of input pins
	u32 ODR;// this register is to set the value of output pins

}GPIO_REG_t;
/* pointer to struct */
#define GPIOA ((volatile GPIO_REG_t *)(0x40020000))
#define GPIOB ((volatile GPIO_REG_t *)(0x40020400))
#define GPIOC ((volatile GPIO_REG_t *)(0x40020800))


