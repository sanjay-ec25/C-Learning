#include <stdio.h>
#include <stddef.h>

int main(void)
{
    printf("int size      = %zu\n", sizeof(int));
    printf("int alignment = %zu\n", _Alignof(int));

    printf("long long size      = %zu\n", sizeof(long long));
    printf("long long alignment = %zu\n", _Alignof(long long));

    return 0;
}
