#include <stdio.h>
#include <stdint.h>

typedef union {
    uint8_t value;
    struct {
        uint8_t lower : 4;
        uint8_t upper : 4;
    } values;
} union1;

int main()
{
    int input;
    union1 hello;
    union1 *ptr = &hello;

    scanf("%d", &input);
    ptr->value = input;                  // store the whole number

    printf("Original: %d\n", ptr->value);

    uint8_t temp = ptr->values.lower;    // save lower
    ptr->values.lower = ptr->values.upper;
    ptr->values.upper = temp;            // put the old lower here

    printf("Swapped : %d\n", ptr->value);
    return 0;
}
