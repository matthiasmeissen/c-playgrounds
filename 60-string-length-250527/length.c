#include <stdio.h>
#include <string.h>

int main(void) {
    // Declare character array and initialize with Characters
    char message[] = "Hello";

    // Print the string
    printf("%s\n", message);

    // Use sizeof() to determine length of array 
    // It is number of characters, including appended null terminator ("\0")
    // It returns a data type called size_t (with %zu as a format specifier)
    // That is an unsigned integer which is guaranteed to hold the largest possible object in memory
    size_t length1 = sizeof(message);
    printf("The sizeof() message is: %zu\n", length1);

    // Use strlen() to determine the length of array
    // It is just the number of characters in there
    size_t length2 = strlen(message);
    printf("The strlen() message is: %zu\n", length2);

    // Declare character array with 8 items
    char str[8];
    // Store Characters including null terminator for first three items
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';

    // Print the string
    printf("%s\n", str);

    // The length with sizeof() is number of all items declared
    size_t length3 = sizeof(str);
    printf("The sizeof() str is: %zu\n", length3);

    // The length with strlen() is characters before null terminator
    // This function seems to count all characters until a \0 is detected
    // This is similar to printing the character array as a string
    size_t length4 = strlen(str);
    printf("The strlen() str is: %zu\n", length4);

    return 0;
}
