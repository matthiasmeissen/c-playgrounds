#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// To build an executable run
// clang main.c utils.c -o main

// You can also do the two steps (compiling and linking) seperately
// Compile:     clang -c main.c, clang -c utils.c -> This creates object files
// Link:        clang main.o utils.o -o main

int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <string>", argv[0]);
        return EXIT_FAILURE;
    }

    int numCharacters = get_characters(argv[1], 100);
    printf("The string %s has %d characters.\n", argv[1], numCharacters);

    return 0;
}
