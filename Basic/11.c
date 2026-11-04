#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Before system fork\n");
	fork();
	printf("After System fork\n");
}

