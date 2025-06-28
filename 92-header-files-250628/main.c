#include <stdio.h>
#include "utils.h"

// To compile you need to link the files
// clang main.c utils.c -o main

int main(void) {
    char myString[] = "Hello";
    int num = mystrlen(myString, sizeof(myString));
    printf("The string %s has %d characters.\n", myString, num);

    return 0;
}
