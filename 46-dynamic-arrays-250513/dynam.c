#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 5;
    double * arr = NULL;

    arr = malloc(count * sizeof(double));
    if (arr == NULL) {
        exit(EXIT_FAILURE);
    }

    printf("The memory for %d continuous elements is at address %p\n", count, arr);

    free(arr);
    arr = NULL;

    return 0;
}
