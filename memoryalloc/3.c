#include<stdio.h>
#include<stdint.h>
int main()
{
	typedef struct
	{
		int a;
		int b;
		int c;
	}sanjay;

	sanjay hello;
	printf("%lu",sizeof(hello));
}

