#include<stdio.h>
#include<stdint.h>
int main()
{
	typedef union
	{
		uint8_t value;
		uint8_t lsb:1;
	}sanjay;


	sanjay hello;

	sanjay *ptr=&hello;

	ptr->value=0xff;
	printf("%d",ptr->lsb);



	
}

