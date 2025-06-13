#include <stdio.h>
#include <stdlib.h>

// fputc(int c, FILE *)
// Expects a character as int type and a pointer to FILE

// Depending on mode of fopen() it will
// fopen(filename, "w") -> Clear the file first and the for each fputc add the chracter to the end
// fopen(filename, "a") -> Keep contents of the file and for each fputc add the character to the end

int main(void) {
    // Create pointer for FILE type variable
    FILE * filePtr;
    // Create variable for filename
    const char fileName[] = "text.md";
    // Use fopen in write mode to create stream to file, store key in filePtr
    filePtr = fopen(fileName, "w");
    // Check for success, otherwise exit program with error message
    if (filePtr == NULL) {
        perror("Error while opening the file.\n");
        return EXIT_FAILURE;
    }
    // Print success
    printf("Successfully opened the file %s\n", fileName);

    // Define chracter array to add to file
    const char stringToWrite[] = "Hello\n";
    // Loop through array length (excluding the null terminator)
    // Was having it in there, but adding a null terminator to a md file makes in not usable anymore
    // Here sizeof(stringToWrite) only works, since the size is known at compile time
    // If that would be used in a function (where string is passed as a pointer) it would only return the site of a pointer on that system
    // A better approach woul be to use the strlen() function instead, it even returns the size without the null terminator
    for (int i = 0; i < sizeof(stringToWrite) - 1; i++) {
        // Check for success, otherwise exit loop and print error message
        // When a function expects an integer and you put in a char, it gets converted automatically (integer promotion)
        if (fputc(stringToWrite[i], filePtr) == EOF) {
            perror("Something went wrong with fputc\n");
            fclose(filePtr);
            return EXIT_FAILURE;
        }
        // Print success
        printf("Successfully added %c to the file %s\n", stringToWrite[i], fileName);
    }

    // Another approach to using fputc() directly with a pointer
    const char string2[] = "Humans";
    // This look creates a pointer to the character array
    // It checks if the value at a given pointer index is not a null terminator
    // For every loop it jumps the the next item by adding one (size of data type stored in pointer) to the pointer
    for (const char * p = string2; *p != '\0'; p++) {
        // In fputc() we directly use the value at pointer index and check if it is not a EOF
        if (fputc(*p, filePtr) == EOF) {
            perror("Something went wrong with fputc\n");
            fclose(filePtr);
            return EXIT_FAILURE;
        }
    }

    // Use for loop to close file stream
    if (fclose(filePtr) == 0) {
        // Print success
        printf("Successfully closed the file %s\n", fileName);
    } else {
        // Print error message and exit the program
        perror("Error while closing the file.\n");
        return EXIT_FAILURE;
    }

    return 0;
}
