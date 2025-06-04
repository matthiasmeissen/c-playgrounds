#include <stdio.h>
#include <string.h>

// strcspn(const char * s, const char * charset)
// s: A pointer to character array
// charset: A String of characters to indetify 
// Returns the index of the first occurence of one of the specified characters in the array

// fgets(char * c, int size, File)
// It will read the newline character, when there is enough space left 
// But it will always add a null terminator

// Example
// buffer[8]
// Input: Test          -> Test\n\0     (4 Chars, enough space for \n and \0)
// Input: Tester        -> Tester\n\0   (6 Chars, exactly enough space for \n and \0)
// Input: Testers       -> Testers\0    (7 Chars, Input fits, but not enough space for \n , but \0 is always included)
// Input: Testerway     -> Testerw\0    (9 Chars, Input is tool long, will be truncated and not enough space for \n, but \0 is always included)

int main(void) {
    // Declare character array with 100 items and initialize all to 0
    char input_buffer[100] = {0};
    // Store length of array in variable
    int length = sizeof(input_buffer);
    // Ask the user to input their name
    printf("Please enter your name: ");
    // Check if fgets() returns NULL 
    // It reads length - 1 chars to ensure end of line will be added
    if (fgets(input_buffer, length, stdin) != NULL) {
        // Identify the index of the newline character and store in variable
        size_t index_newline = strcspn(input_buffer, "\n");

        // Testing, what does strcspn return, when char is not part of array
        // It seems, that it just returns the index of the null terminator
        size_t index_newline1 = strcspn(input_buffer, "D");
        // Print the length of character array including null terminator
        printf("Number of chracters in array is: %zu\n", strlen(input_buffer));
        // Print the index strcspn returns, when char is not part of the array
        printf("Result of strcspn is: %zu\n", index_newline1);

        // Use variable to find the newline and replace it with 0 (null terminator)
        input_buffer[index_newline] = 0;
        // Print the index buffer
        printf("Hello: %s\n", input_buffer);
    } else {
        fprintf(stderr, "There was an error in getting the string.\n");
    }

    return 0;
}
