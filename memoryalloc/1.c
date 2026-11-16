#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a=malloc(sizeof(int));

	scanf("%d",a);

	printf("The value of a is %d",*a);


}

