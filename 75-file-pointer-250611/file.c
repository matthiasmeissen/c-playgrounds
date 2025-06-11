#include <stdio.h>

int main(void) {
    FILE * filePtr;
    printf("A pointer to file: %p\n", (void*)filePtr);
    printf("The size of a file is: %zu\n", sizeof(FILE));

    return 0;
}
