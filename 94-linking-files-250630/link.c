#include <stdio.h>
#include "utils.h"

// To build a program from multiple files the following happens
// 1. Compilation: .c -> .o (object files)
// 2. Linking: file + libraries -> executable

// clang link.c utils.c -o link


int main(void) {
    const char myString[] = "Hello";
    printCharacters(myString, 100);

    return 0;
}
