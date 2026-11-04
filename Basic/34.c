#include<stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct
	{
		int a;
		char b;
		float c;
	}sanjay;

	sanjay u;

	sanjay *ptr=malloc(sizeof(u));

	scanf("%d",&ptr->a);
	scanf(" %c",&ptr->b);
	scanf("%f",&ptr->c);

}

