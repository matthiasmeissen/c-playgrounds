#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * arr = NULL;
    arr = malloc(5 * sizeof(arr[0]));
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }
    printf("Location of arr is %p\n", arr);

    free(arr);
    arr = NULL;
    return 0;
}

