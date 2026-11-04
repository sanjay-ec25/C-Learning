#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5],new[5];
	int a,b,c=0;
	for(a=0;a<5;a++)
	{
		scanf("%d",&arr[a]);
	}
	int sum=0;
	for(a=0;a<5;a++)
	{
		for(b=0;b<a;b++)
		{
			if(arr[b]==arr[a])
			{
				new[c]=arr[a];
				c++;
			}
		}
	}
	for(a=0;a<c;a++)
	{
		sum=sum+new[a];
	}
	printf("%d",sum);
	
}


