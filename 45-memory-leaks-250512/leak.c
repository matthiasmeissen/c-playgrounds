#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * ptr = NULL;
    ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        exit(EXIT_FAILURE);
    }
    * ptr = 20;
    printf("The value stored in heap is: %d", * ptr);

    free(ptr);
    ptr = NULL;
    
    return 0;
}
