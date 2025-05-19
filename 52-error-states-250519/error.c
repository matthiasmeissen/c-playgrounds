#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare pointer and initialize to NULL
    double * arr = NULL;
    // Allocate 5 times size of data type arr is pointing to at index 0 and store address in pointer
    arr = malloc(5 * sizeof(*arr));
    // Check if arr is NULL
    if (arr == NULL) {
        // Print message to error stream
        // What is the difference to printf and what are streams
        fprintf(stderr, "Pointer is NULL.\n");
        // Exit the program with exit failure parameter
        // What does this mean and how do I access it
        exit(EXIT_FAILURE);
    }
    return 0;
}
