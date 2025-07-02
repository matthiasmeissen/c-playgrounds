#include <stdio.h>
#include "utils.h"

/**
 * @brief Get the number of characters in a string (with safe guards)
 * @param input Pointer to character array
 * @param max The maximum number of characters to count
 * @return Number of characters as int
 */
int get_characters(const char * input, const int max) {
    int i = 0;
    while (input[i] != '\0' && i < max) {
        i++;
    }
    return i;
}

