#include <stdio.h>

// The length is the number of characters with an additional null terminator character
// It is the asci value of 0 
// And is appended automatically for each string to specify the end of it
// index        0 1 2 3 4 5
// character    H e l l o /0

int main(void) {
    // Declare a character array and initialize with string
    char message[] = "Hello";

    // Print the character array with string format specifier
    printf("The variable is: %s\n", message);

    // Get the length of the array
    int length = sizeof(message);
    // Print its value with the character format specifier
    printf("The string array has a length of %d\n", length);

    // Loop through array and print the character at each index
    for (int i = 0; i < length; i++) {
        // The null terminator will be empty since it can not be displayed as a character
        printf("Index:  %d  Character:  %c\n", i, message[i]);
    }
    
    // Specifically print the null terminator ("\0") with an int
    printf("The last character of the array is %d\n", message[length - 1]);

    return 0;
}
