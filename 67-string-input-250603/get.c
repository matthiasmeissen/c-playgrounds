#include <stdio.h>

// fgets(char * buffer, int size, FILE)
// It requires the pointer to the character array it should write to
// The size of characters it should copy at max (will always include null terminator)
// And the type of input that is used
// It also includes newline characters when enough space

int main(void) {
    // Declare character array with size of 100 but without initializing it
    // Might be bad practice, so setting all to 0 would be smart
    char line_buffer[100] = {0};
    // Ask user to enter ther name
    printf("Enter your name: ");
    // Use fgets to capture string input including whitespace
    // Check if return value is not NULL
    if (fgets(line_buffer, sizeof(line_buffer), stdin) != NULL) {
        // Print the buffer to the console
        printf("Hello %s", line_buffer);
    } else {
        // Print an error to the stderror console
        fprintf(stderr, "Error reading the input or reached end of line.\n");
    }

    return 0;
}
