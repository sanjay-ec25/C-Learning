#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
	struct 
	{
		int a;
		int b;
		int c;
	}a;

	a *ptr=malloc(sizeof(a));
	printf("%p",(void*)a);


}


