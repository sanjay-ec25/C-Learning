#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct sanjay
	{
		int a:1;
	}s1;

	s1.a=11;
	if(s1.a==0)
	{
		printf("Even");
	}
}

