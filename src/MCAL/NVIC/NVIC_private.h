#define GROUP4_SUB0  (0) //SUPPORT 16 group(nesting level up to 16)
#define GROUP3_SUB1  (4) // support  8 groups and 2 sub priorities
#define GROUP2_SUB2  (5) // support 4 groups and 4 sub priorities
#define GROUP1_SUB3  (6) // support 2 groups and 8 sub priorities
#define GROUP4_SUB4  (7) // support 0 groups and 16 subpriorities (no nesting )

typedef struct{
	u32 ISER[8];
	u32 Reserved1[24];
	u32 ICER[8];
	u32 Reserved2[24];
	u32 ISPR[32];
	u32 ICPR[32];
	u32 IABR[64];
	u8 IPR[240]; //instead of 8 registers , each has 4 bytes
}NVIC_t;
#define NVIC ((volatile NVIC_t *)(0XE000E100))
//register to configure how to divide software priority between group and sub for the system
#define SCB_AIRCR (*(volatile u32*)(0XE000ED0C))
#define VECT_KEY (0X05FA0000)
