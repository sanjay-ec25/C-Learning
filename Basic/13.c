#include<stdio.h>
int main()
{
	int no,a,b,c=0;
	scanf("%d",&no);
	scanf("%d",&b);
	int arr[no];
	for(a=0;a<no;a++)
	{
		scanf("%d",&arr[a]);
	}

	for(a=0;a<no;a++)
	{
		if(arr[a]==b)
		{
			c++;
		}

	}

	printf("%d",c);
}




