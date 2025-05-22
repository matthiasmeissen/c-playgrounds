#include <stdio.h>
#include <stdlib.h>

int * createRange(int start, int end);

int main(void) {
    // Declare pointer and use create range function to assign it an address
    // Calulate the array length and store into variable for safety and later use
    int start = 2;
    int end = 8;
    int arrayLength = end - start;
    int * p = createRange(start, end);
    // Check if allocation was successfull, print to stderr and exit the program when not
    if (p == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    // Print location of pointer
    printf("MAIN:   Location of pointer is at: %p\n", (void *)p);
    for (int i = 0; i < arrayLength; i ++) {
        // Print the value of each index in the array using pointer arithmetic
        printf("MAIN:   Index %d is %d\n", i, *(p + i));
    }
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
    printf("FUNC:   Array Length is: %d\n", arrayLength);
    // Allocate memeotry on hep based in array length and int size in bytes
    localPointer = malloc(arrayLength * sizeof(*localPointer));
    // Check if allocation was successfull and return NULL or pointer
    if (localPointer == NULL) {
        return NULL;
    }
    printf("FUNC:   Memory of %d ints was successfully allocated.\n", arrayLength);
    // Loop through every item in the array and set a value based in index and start variable
    for (int i = 0; i < arrayLength; i++) {
        int value = start + i;
        localPointer[i] = value;
        printf("FUNC:   Value at index %d is %d\n", i, value);
    }
    return localPointer;
}
