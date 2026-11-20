//different way a declare a array...


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10]={[2]=10,[3]=20};
	
	for(int a=0;a<10;a++)
	{
		printf("%d\n",arr[a]);
	}
}

