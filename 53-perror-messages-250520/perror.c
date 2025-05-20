#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * p = NULL;
    p = malloc(sizeof(* p));
    if (p == NULL) {
        perror("Allocation failed.");
        exit(EXIT_FAILURE);
    }
    return 0;
}
