#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,c;
	printf("Enter the number of Elements:");
	scanf("%d",&a);
	int *b=(int*)malloc(sizeof(sizeof(a)*a));
	for(c=0;c<a;c++)
	{
		scanf("%d",b+c);
	}

	for(c=0;c<a;c++)
	{
		printf("%d\n",*(b+c));
	}

	free(b);



}

