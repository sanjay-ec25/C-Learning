#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5];
	for(int x=0;x<5;x++)
	{
		scanf("%d",&arr[x]);
	}

	int a,b,c,d,count=0;
	for(a=0;a<5;a++)
	{
		int found=0;
		for(b=0;b<a;b++)
		{
			if(arr[a]==arr[b])
			{
				found=1;
				break;
			}
		}

		if(found==0)
		{
			printf("%d",arr[a]);
		}
	}
}


