#include <stdio.h>
#include <stdlib.h>

void alternative_memory_allocation(void);

int main(void) {
    // Declare pointer called ptr and initialize with NULL
    int * ptr = NULL;

    // Allocate 4 bytes of memory on the heap (size of an int on this system) and store address in ptr
    ptr = malloc(sizeof(int));

    // Check if ptr is not NULL
    if (ptr != NULL) {
        // Print the address of the memory location
        printf("Your heap memory address is: %p\n", (void *)ptr);

        // Store an integer value in that memeory location
        * ptr = 50;

        // Print the integer value stored at the location ptr points to (heap memory)
        printf("The value stored in heap is: %d\n", * ptr);
    } else {
        // Print error message
        printf("Something was going wrong during memory allocation.");
    }

    // Deallocate memory from ptr in the heap
    free(ptr);

    // Set ptr explicitly to NULL to avoid dangling pointer that points to a location that is no longer valid to use
    // which might result in undefined behavior 
    ptr = NULL;

    alternative_memory_allocation();

    return 0;
}

void alternative_memory_allocation(void) {
    int * ptr1 = NULL;
    ptr1 = malloc(sizeof(int));

    // Alternative check that exits the program when pointer is NULL
    if (ptr1 == NULL) {
        printf("ERROR: Memory Allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    printf("Your heap memory address is: %p\n", (void *)ptr1);
    * ptr1 = 50;
    printf("The value stored in heap is: %d\n", * ptr1);
    free(ptr1);
    ptr1 = NULL;
}
