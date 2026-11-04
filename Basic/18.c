#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main()
{
	typedef struct 
	{
		int a;
		int b;
		int c;
	}sanjay;

	sanjay hello;
	sanjay *ptr=&hello;
	sanjay *ptr1=malloc(sizeof(hello));
	printf("%p",(void*)ptr1);
}

