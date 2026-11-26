#include<stdio.h>
#include<stdlib.h>
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

        gpio_reg_t* ptr=malloc(sizeof(gpio_reg_t));
	
	gpio_reg_t* new=(gpio_reg_t*)ptr;

	printf("%p\n",(void*)new);

	printf("%p\n",(void*)&(new->PIN));

	printf("%p\n",(void*)&(new->PORT));

	printf("%p\n",(void*)&(new->DDR));




}

