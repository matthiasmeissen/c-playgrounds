#include "utils.h"

/**
 * @brief Get the length of a string (includes max length for safety)
 * @param inputString Pointer to character array
 * @param max The maximum amount of characters
 * @return Number of characters excluding null terminator
 */
int mystrlen(const char * inputString, const int max) {
    int index = 0;
    while (inputString[index] != '\0') {
        index ++;
        if (index == max) {
            return index;
        }
    }
    return index;
}
