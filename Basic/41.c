#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
	typedef struct
	{
		uint8_t lsb:1;
	}sanjay;

	sanjay danush;

	sanjay *ptr=&danush;
	
	ptr->lsb=0xff;

	printf("%d",ptr->lsb);
}


