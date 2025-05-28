#include <stdio.h>

size_t my_strlen(const char * s);
size_t my_strlen1(const char * s);

int main(void) {
    char message[] = "Hello";
    size_t length = my_strlen(message);
    printf("The number of character is %zu\n", length);

    size_t length1 = my_strlen1(message);
    printf("The number of character is %zu\n", length1);
    return 0;
}

/**
 * @brief Get the length of a character array
 * @param *s Pointer to character array
 * @return The length of the array (excluding null terminator) as size_t data type
 */
size_t my_strlen(const char * s) {
    // The input of the function is a pointer to the character array, not a copy of the array
    // This means we can use things like pointer arithmetic to get individual characters
    // Declare length variable of type size_t (unsigned integer representing the maximum size of an object in memory) and initialize to 0
    size_t length = 0;

    // Use while loop to check if character at incrementing array index is not null terminator
    while (s[length] != '\0') {
        length++;
    }

    return length;
}

size_t my_strlen1(const char * s) {
    // Declare new pointer variable to store the initial address the input points to
    const char * start_pointer = s;

    // Use a while loop to check if value at pointer is not '\0'
    while (* s != '\0') {
        // Use pointer arithmetic to increment the pointer address by one element in the array
        // Note that this does not add 1 but rather 1 times sizeof(type) in bytes
        s++;
    }

    // Calculate the difference in elements between start and end position
    // This is of datatype diff and need to be casted to size_t for that
    return (size_t)(s - start_pointer);
}
