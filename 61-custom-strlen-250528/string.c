#include <stdio.h>

size_t my_strlen(const char * s);

int main(void) {
    char message[] = "Hello";
    size_t length = my_strlen(message);
    printf("The number of character is %zu\n", length);
    return 0;
}

size_t my_strlen(const char * s) {
    // Input is pointer to character array
    // Declare length variable of type size_t (unsigned integer representing the maximum size of an object in memory) and initialize to 0
    size_t length = 0;

    // Declare index variable of type int and initialize to 0
    int index = 0;

    // Declare currentCharacter variable of type char and initialize with character at index 0 of input array
    // The expression s[i] will be converted to * (s + i) which means pointer to address in memory plus size of data type in bytes
    char currentCharacter = s[index];

    // Use while loop to check if character at incrementing array index is not null terminator
    while (currentCharacter != '/0') {
        // Inrement index for each character
        index++;
        // Adjust currentCharacter to the new index
        currentCharacter = *(s + 1);
        // Add one to the length of the return value
        length++;
    }

    return length;
}
