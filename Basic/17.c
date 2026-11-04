#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int ptr=*a;
	*a=*b;
	*b=ptr;
}

int main(int count,char *arr[])
{
	int a=atoi(arr[1]);
	int b=atoi(arr[2]);
	int *ptr1=&a;
	int *ptr2=&b;

	swap(ptr1,ptr2);

	printf("%d %d",a,b);
}

