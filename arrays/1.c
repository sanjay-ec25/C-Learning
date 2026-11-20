//declare an array using command line argument..
//In this code the size of array should be the first input followed by the inputs.

#include<stdio.h>
#include<stdlib.h>
int main(int count,char *arr[])
{
	int size=atoi(arr[1]);
	int array[size];
	int position=2;
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

