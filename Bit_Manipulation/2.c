#include <stdio.h>
#include <stdlib.h>

//using rightshift method
void decimalToBinary(unsigned int n) {
    int size = sizeof(n) * 8; // 32 bits for standard unsigned int

    for (int i = size - 1; i >= 0; i--) {
        // Move the i-th bit to the LSB position and isolate it
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <decimal_number>\n", argv[0]);
        return 1;
    }

    unsigned int num = (unsigned int)atoi(argv[1]);
    decimalToBinary(num);

    return 0;
}

