#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int * ptr = malloc(sizeof(int));

    printf("%p\n", ptr);

    return 0;
}
