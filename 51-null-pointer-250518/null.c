#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * p = NULL;
    // Accessing a pointer that is set to NULL works, it returns NULL or 0x0
    printf("Address the NULL pointer stores: %p\n", (void *)p);
    
    // Trying to write value at NULL pointer address will crash program and cause segmentation fault
    *p = 20;
    
    // Same goes for dereferencing a value from a NULL pointer
    printf("Value the NULL pointer points to: %d\n", *p);

    // Solution to avoid interacting with NULL pointers is
    if (p == NULL) {
        fprintf(stderr, "Error, p is a NULL pointer.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
