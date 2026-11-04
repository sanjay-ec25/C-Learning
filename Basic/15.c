#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Separate enum members with commas
    typedef enum { 
        hello, 
        hello1 
    } sanjay; 

    // 2. Assign the enum constant directly to the integer
    int x = hello; 

    // Optional: Print the value to verify (it will be 0)
    printf("Value of x: %d\n", x);

    return 0;
}

