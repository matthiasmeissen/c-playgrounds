#include <stdio.h>
#include <stdlib.h>

int pointer_allocation_failed(void * ptr);

int main(void) {
    // Dectlare int pointer and initialize to NULL
    int * arr = NULL;

    // Use a constant for array size
    const int ARRAY_SIZE = 5;

    // Use calloc to allocate 5 items with size of memory stored in arr
    // Could also be written sizeof(int), but *arr is more robust since changes in data types only have to be done once
    arr = calloc(ARRAY_SIZE, sizeof(*arr));

    // Check if arr is still NULL (calloc returns a pointer when successfull, or NULL when not)
    // This uses a function that returns 1 when failed and 0, when successfull
    if ( pointer_allocation_failed(arr) ) { exit(EXIT_FAILURE); };

    // Loop through array and print each entry (should be 0 for each, since this is what calloc does automatically)
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Value of item at index %d is %d\n", i, arr[i]);
    }

    // Deallocate memory from the heap
    free(arr);

    // Set arr pointer to NULL, to get more predictable errors when using it again
    arr = NULL;

    return 0;
}

/**
 * @brief Check if pointer is NULL
 * @param ptr A pointer address
 * @return 1 when pointer is NULL, 0 when pointer is not NULL
 */
int pointer_allocation_failed(void * ptr) {
    return (ptr == NULL);
}
