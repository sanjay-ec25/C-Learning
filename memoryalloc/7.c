#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct sanjay{
		char name[50];
		int age;
	};

	struct sanjay person;
	struct sanjay *pointer=&person;
	printf("Enter the name:\n");
	scanf("%s",pointer->name);
	scanf("%d",&pointer->age);
	printf("%s",person.name);
	printf("%d",person.age);
}

