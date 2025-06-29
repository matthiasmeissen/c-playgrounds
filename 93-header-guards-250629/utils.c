#include <stdio.h>
#include "utils.h"

/**
 * @brief Get the number of charatcers in a string (excluding null terminator)
 * @param inputString Pointer to character array
 * @param len The length of the array
 * @return The number of characters
 */
int getCharacterCount(const char * inputString, const int len) {
    int i;
    for (i = 0; i < len && inputString[i] != '\0'; i++) {}
    return i;
}
