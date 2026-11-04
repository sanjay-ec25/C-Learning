#include<stdio.h>
int main()
{
	int a;
	int *ptr=&a;
	printf("%p",(void*)ptr);
}

