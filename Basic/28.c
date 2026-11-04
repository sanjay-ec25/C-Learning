#include <stdio.h>

int main() {
    float  f = 3.14159265358979;
    double d = 3.14159265358979;

    printf("float:  %.15f\n", f);   // 3.141592741012573 (wrong after ~7 digits)
    printf("double: %.15f\n", d);   // 3.141592653589790 (accurate)
    return 0;
}
