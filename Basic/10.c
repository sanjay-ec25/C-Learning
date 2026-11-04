#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5];
	for(int a=0;a<5;a++)
	{
		scanf("%d",&arr[a]);
	}

	for(int a=0;a<5;a++)
	{
		if(arr[a]<0)
		{
			printf("%d",arr[a]);
		}
	}
}


