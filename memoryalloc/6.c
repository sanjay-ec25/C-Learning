#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5];
	printf("%p",(void*)arr);
	printf("%p",(void*)(arr+5));
}

