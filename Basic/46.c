#include<stdio.h>
int main()
{
	typedef struct 
	{
		int a;
		char b;
	}sanjay;

	sanjay u={.a=10,.b='b'};

	sanjay *ptr=&u;
	printf("%lu sizeofint %lu",sizeof(u),sizeof(int));

}

