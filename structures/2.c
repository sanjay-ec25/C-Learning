#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int main()
{
	#pragma pack(push,1)
	typedef struct
	{
		uint8_t PIN;
		uint8_t PORT;
		uint8_t DDR;
	}gpio_reg_t;
	#pragma pack(pop)

	gpio_reg_t hello;

	gpio_reg_t* ptr=&hello;

	printf("%p\n",(void*)ptr);

	printf("%p\n",(void*)&(ptr->PIN));
	printf("%p\n",(void*)&(ptr->PORT));
	printf("%p\n",(void*)&(ptr->DDR));


}



