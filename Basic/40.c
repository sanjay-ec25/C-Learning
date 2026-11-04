#include <stdio.h>
#include<stdint.h>
int main()
{
	struct Flags {
    uint8_t a : 1;
    uint8_t b : 1;
    uint8_t c : 1;
    uint8_t d : 1;
    uint8_t e : 1;
    uint8_t f : 1;
    uint8_t g : 1;
    uint8_t h : 2;
	};
    printf("%lu",sizeof(struct Flags));
}

