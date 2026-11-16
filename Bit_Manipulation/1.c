//convert decimal to binary.

#include <stdio.h>
#include <stdlib.h>

int main(int count, char *arr[])
{
    

    char array[33];
    int hello=31;
    unsigned int a = atoi(arr[1]);

    int size = (int)(sizeof(a)) * 8;
    

    for(int b=0;b<size;b++)
    {
	    if((a&(1<<b))==0)
	    {
		    array[hello]='0';
	    }
	    else
	    {
		    array[hello]='1';
	    }
	    hello--;
    }
    array[size]='\0';
    

    int start=0;
    while(array[start]=='0')
    {
	    start ++;
    }
    printf("%s",&array[start]);


}

