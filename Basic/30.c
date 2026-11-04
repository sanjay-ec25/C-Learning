#include <stdio.h>
#include <stddef.h>

struct sanjay {
    int a;
    char b;
    long long z;
};

int main() {
    printf("size  = %zu\n", sizeof(struct sanjay));
    printf("a at %zu\n", offsetof(struct sanjay, a));
    printf("b at %zu\n", offsetof(struct sanjay, b));
    printf("z at %zu\n", offsetof(struct sanjay, z));
}
