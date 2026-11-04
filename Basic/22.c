#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
	int no;
	scanf("%d",&no);
	
	typedef union
	{
		uint8_t value;
		uint8_t lsb:1;
	}hello;
	hello k;
	k.value=no;
	printf("%d",k.lsb);
}



