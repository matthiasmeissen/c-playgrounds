#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Dectlare int pointer and initialize to NULL
    int * arr = NULL;

    int array_size = 5;

    // Use calloc to allocate 5 items with size of memory stored in arr
    // Could also be written sizeof(int), but *arr is more robust since changes in data types only have to be done once
    arr = calloc(array_size, sizeof(*arr));

    // Check if arr is still NULL (calloc returns a pointer when successfull, or NULL when not)
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Loop through array and print each entry (should be 0 for each, since this is what calloc does automatically)
    for (int i = 0; i < array_size; i++) {
        printf("Value of item at index %d is %d\n", i, arr[i]);
    }

    // Deallocate memory from the heap
    free(arr);

    // Set arr pointer to NULL, to get more predictable errors when using it again
    arr = NULL;

    return 0;
}

