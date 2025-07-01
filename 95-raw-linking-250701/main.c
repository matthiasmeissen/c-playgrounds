#include <stdio.h>
#include "utils.h"

// To generate an execulatble there are two steps involved

// Compilation 
// This turns .c files into binaries .o
// You can do this with the -c (compile) command
// clang -c main.c, clang -c utils.c

// Linking
// This links the binaries .o together and creates the executable
// You can do this with the -o (output) command
// clang main.o utils.o -o myProgram

// To make thinsg faster you can do both in one step (clang main.c utils.c -o main)
// However for larger projects it could make sense to only compile the files that have changed and then link them

// When you do not need the .o files anymore you can use rm *.o (The * says it should affect all files with .o extension)

int main(void) {
    const char myString[] = "Hello";
    printStringDetails(myString, sizeof(myString));

    return 0;
}
