//count the number of bit set in a number.


#include<stdio.h>
#include<stdlib.h>
int main(int cnt,char *arr[])
{
	unsigned int b=atoi(arr[1]);
	int count=0;
	for(int a=0;a<32;a++)
	{
		if((b&(1<<a))!=0)
		{
			count++;
		}
	}
	printf("%d",count);
}


