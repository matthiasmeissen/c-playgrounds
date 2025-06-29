#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// To build the program run
// clang main.c utils.c -o main

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <string>", argv[0]);
        return EXIT_FAILURE;
    }

    int num = getCharacterCount(argv[1], 100);
    printf("%s has a %d characters.\n", argv[1], num);

    return 0;
}
