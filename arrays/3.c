#include <stdio.h>

int main() {
    // Array of size N = 4 (valid indices: 0, 1, 2, 3)
    char *items[] = {"Zero", "One", "Two", "Three"};
    int size = 4;

    int start = 2; // Change this to test different starting points
    int steps = 6; // How many times to move forward

    for (int i = 0; i < steps; i++) {
        // Formula: (start + step) % total_size
        int index = (start + i) % size;

        printf("Step %d -> index %d (%s)\n", i + 1, index, items[index]);
    }

    return 0;
}




//general formula

//print elements at indexes (start+no of steps)/total size of array
