#include <stdio.h>
#include <stdlib.h>

int * createRange(int start, int end);

int main(void) {
    // Declare pointer and use create range function to assign it an address
    int * p = createRange(0, 8);
    // Check if allocation was successfull, print to stderr and exit the program when not
    if (p == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    // Print location of pointer
    printf("Location of pointer is at: %p\n", (void *)p);
    // Deallocate memory from heap
    free(p);
    // Set pointer address to NULL to prevent dangling pointers and undefined behavior
    p = NULL;
    return 0;
}

/**
 * @brief Allocates an array of ints on heap memory and assigns a number to each item based on start and end values
 * @param start Number to start
 * @param end NUmber to end (not included)
 * @return Pointer to the location in heap memeory or NULL when allocation failed
 */
int * createRange(int start, int end) {
    // Declare pointer and initialize with NULL
    int * localPointer = NULL;
    // Calculate array length
    int arrayLength = end - start;
    // Allocate memeotry on hep based in array length and int size in bytes
    localPointer = malloc(arrayLength * sizeof(*localPointer));
    // Check if allocation was successfull and return NULL or pointer
    if (localPointer == NULL) {
        return NULL;
    } else {
        return localPointer;
    }
}
