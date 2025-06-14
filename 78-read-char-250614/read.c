#include <stdio.h>
#include <stdlib.h>

// fgetc(FILE *)
// Reads a character from a file in read mode
// When called multiple times it steps from one index to the next
// It returns the chracter as an int, this can be used to detect EOF

int main(void) {
    // Create pointer variable for FILE data type
    FILE * filePtr;
    // Define filename string
    const char filename[] = "text.md";
    // Open stream to filename in read mode
    filePtr = fopen(filename, "r");
    // Check if stream was opened successfully
    if (filePtr == NULL) {
        // You do not need a newline character in perror, it might create weird formatting
        perror("Error reading the file.");
        return EXIT_FAILURE;
    }

    // Print success
    printf("File successfully opened.\n");

    // Declare int variable, get the first character and store in it
    // int c1 = fgetc(filePtr);
    // printf("%c\n", c1);
    // Declare another int varibale, get the next character in file, and store in it
    // int c2 = fgetc(filePtr);
    // printf("%c\n", c2);

    // Declare int variable
    int c;
    // Store return value of fgetc in variable
    // Check if not EOF in while loop
    // Continue process of reading, updating c and printing its value until EOF
    // Whenever you call the fgetc function, the file position indicator is set to the next step
    while((c = fgetc(filePtr)) != EOF) {
        // Note that we store the chracter as an int, 
        // This is to make sure that we have enough space to store EOF, which is a negative integer constant
        // We can print the integer as char using the char format spacifier, since it is automatically casted
        printf("%c\n", c);
    }

    printf("\n");

    // Another approach would be to use putchar() which directly prints it
    // In this case it does not work, since the file was already used by loop before
    // This means the file position indicator is at EOF, which will never let the loop run

    // You can use the rewind() function to reset the file position indicator
    rewind(filePtr);

    // After using rewind() this function will work
    int c2;
    while((c2 = fgetc(filePtr)) != EOF) {
        putchar(c2);
    }

    printf("\n");

    // Close file inside if statement, exit on error
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("File successfully closed.\n");
    }

    return 0;
}
