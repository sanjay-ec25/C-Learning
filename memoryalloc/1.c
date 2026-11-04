#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *b = malloc(sizeof(a));

    printf("%p", (void *)b);

}
