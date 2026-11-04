#include<stdio.h>
int main()
{
	int arr[5];
	int a,b=0,c=1;
	for(a=0;a<5;a++)
	{
		scanf("%d",&arr[a]);
	}

	for(a=0;a<5;a++)
	{
		b=b+arr[a];
		c=c*arr[a];
	}
	printf("%d %d",b,c);
}

