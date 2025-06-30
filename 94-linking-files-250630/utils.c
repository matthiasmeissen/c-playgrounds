#include <stdio.h>
#include "utils.h"

void printCharacters(const char * input, const int bufferSize) {
    int i = 0;
    while (input[i] != '\0' || i < bufferSize) {
        fprintf(stdout, "%c", input[i]);
        i++;
    }
}
