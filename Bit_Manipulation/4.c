//Program to clear a bit....

#include<stdio.h>
int main()
{
	unsigned int number,position;
	scanf("%d%d",&number,&position);
	printf("Before setting the bit");
	for(int a=31;a>=0;a--)
	{
		unsigned int bit=(number>>a)&1;
		printf("%d",bit);
	}
	printf("\n");

	number=number&(~(1<<position));

	for(int a=31;a>=0;a--)
	{
		unsigned int bit=(number>>a)&1;
		printf("%d",bit);
	}
	
}

	
