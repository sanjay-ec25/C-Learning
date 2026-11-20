//declare a function pointer withour typedef and addpointer can be used only for this function


#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int main()
{
	int (*addpointer)(int,int)=add;



	printf("%d",addpointer(10,20));
}
