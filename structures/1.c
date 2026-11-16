//find whether a num is odd or even using union.


#include<stdio.h>
#include<stdlib.h>

int oddeven(int a)
{
	typedef union
	{
		int b;
		struct seperate
		{
			unsigned int lsb:1;
			unsigned int remaining:31;
		}s1;
	}s2;

	s2 hello;

	hello.b=a;
	if(hello.s1.lsb==1)
	{
		printf("The number is odd");
	}
	else
	{
		printf("The number is even");
	}


}

int main(int count,char *arr[])
{
	oddeven(atoi(arr[1]));
}


