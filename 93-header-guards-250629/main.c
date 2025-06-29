#include <stdio.h>
#include "utils.h"

// To build the program run
// clang main.c utils.c -o main

int main(void) {
    const char myString[] = "Hello";
    int num = getCharacterCount(myString, sizeof(myString));
    printf("%s has a %d characters.\n", myString, num);

    return 0;
}
