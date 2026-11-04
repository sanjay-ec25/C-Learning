#include<stdio.h>

void swap(int *arr,int n)
{
	printf("%d",*(arr+4));
	printf("%d",*(arr+3));
	printf("%d",*(arr+2));
	printf("%d",*(arr+1));
	printf("%d",*(arr));
}

int main()
{
	int arr[]={1,2,3,4,5};

	swap(arr,5);
}

