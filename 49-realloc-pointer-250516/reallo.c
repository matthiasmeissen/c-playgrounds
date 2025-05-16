#include <stdio.h>
#include <stdlib.h>

// Realloc takes a pointer to an address in heap memory and adjusts its size
// It either resizes in place (memory address stays the same, just adds more bytes)
// Or it moves the block (which has a new address in memory)

int main(void) {
    // Declare pointer called arr and initialize with NULL
    // Allocate memory of size 3 times size the arr data type is and store address in pointer
    // Check if arr is NULL and exit program if so
    int * arr = NULL;
    arr = malloc(3 * sizeof(arr[0]));
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Reallocate memory on the heap to hold new site of int elements
    // Use a temporary pointer to store return value of realloc
    int * temp_ptr = realloc(arr, 5 * sizeof(int));

    // Check if reallocation was successfull
    if (temp_ptr == NULL) {
        // Reallocation failed
        // The original memory block arr is still valid and contains original data
        // Free the original block and exit the program
        printf("Reallocation failed.\n");
        free(arr);
        arr = NULL;
        exit(EXIT_FAILURE);
    } else {
        // Reallocation was successfull
        // Update the original pointer with the temporary value (this prevents dangling from old arr when block was moved)
        arr = temp_ptr;
        // Set temp_ptr to NULL to avoid undefined behavior when accidentially used again
        temp_ptr = NULL;

        printf("Successfully reallocated memory.\n");
    }

    // Deallocate memory from heap at the address arr is pointing to
    free(arr);

    // Set arr pointer explicitly to NULL to avoid dangling pointers and undefined behavior
    arr = NULL;

    return 0;
}
