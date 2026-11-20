//Creating an array using command line argument.
//In this code the input alone is enough and size is required.


#include<stdio.h>
#include<stdlib.h>

int main(int count,char *arr[])
{
	int size=count-1;
	int array[size];
	int position=1;

	for(int a=0;a<size;a++)
	{
		array[a]=atoi(arr[position]);
		position++;
	}
	printf("The array is:");
	for(int a=0;a<size;a++)
	{
		printf("%d ",array[a]);
	}

}



