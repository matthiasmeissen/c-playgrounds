#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer, initialize with NULL
    // Allocate heap memory in size of element ptr is pointing to
    // Check if allocation was successfull, when not exit program
    int * p = NULL;
    p = malloc(sizeof(*p));
    if (p == NULL) { exit(EXIT_FAILURE); }

    printf("Address p is pointing to: %p\n", p);
    printf("Value stored at address p is pointing to: %d\n", *p);


    return 0;
}
