#include<stdio.h>
int main()
{
	typedef struct
	{
		int a;
		int b;
	}p1;

	p1 sanjay;
	p1 *ptr=&sanjay;
	printf("%p",(void*)ptr);
}

