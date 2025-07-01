#include <stdio.h>
#include "utils.h"

/**
 * @brief Print all characters from a string as well as its length
 * @param input Pointer to input string
 * @param num Maxiumum characters to check
 * @return It just prints to stdout
 */
void printStringDetails(const char * input, const int num) {
    int i = 0;
    while(input[i] != '\0' && i < num) {
        fputc(input[i], stdout);
    }
    fprintf(stdout, ": %d characters\n", i);
}
