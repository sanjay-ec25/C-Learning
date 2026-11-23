#include <stdio.h>
#include <stdint.h>

// Helper function to print an 8-bit number in binary
void print_binary(uint8_t num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main(void) {
    // ---------------------------------------------------------
    // RULE: Subtracting 1 from a binary number finds the 
    // rightmost '1', turns it into '0', and flips all '0's 
    // to its right into '1's.
    // ---------------------------------------------------------

    // Example 1: Single '1' bit (Power of 2) -> Used to build bitmasks
    uint8_t len = 3;
    uint8_t power_of_2 = (1U << len);     // 00001000 (Decimal 8)
    uint8_t mask       = power_of_2 - 1;  // 00000111 (Decimal 7 -> three 1s!)

    printf("Example 1: Building a %d-bit mask\n", len);
    printf("1U << 3       : "); print_binary(power_of_2); printf(" (%u)\n", power_of_2);
    printf("(1U << 3) - 1 : "); print_binary(mask);       printf(" (%u)\n\n", mask);

    // Example 2: Any number with trailing zeros (e.g., 88 = 01011000)
    // Rightmost '1' is at bit 3. Subtracting 1 flips bits 3..0 from 1000 to 0111.
    uint8_t num       = 88;               // 01011000
    uint8_t num_minus = num - 1;          // 01010111 (Decimal 87)

    printf("Example 2: General binary subtraction\n");
    printf("num           : "); print_binary(num);       printf(" (%u)\n", num);
    printf("num - 1       : "); print_binary(num_minus); printf(" (%u)\n", num_minus);

    return 0;
}

