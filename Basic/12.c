#include<stdio.h>
int main()
{
	int arr[5];
	int a,b,c,d;
	for(a=0;a<5;a++)
	{
		scanf("%d",&arr[a]);
	}

	for(a=0;a<5;a++)
	{
		int notprime=0;
		for(b=2;b<(arr[a]/2);b++)
		{
			if(arr[a]%b==0)
			{
				notprime=1;
				break;
			}
		}

		if(notprime==1)
		{
		printf("%d",arr[a]);
		}

	}
}



