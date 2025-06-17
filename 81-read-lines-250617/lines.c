#include <stdio.h>
#include <stdlib.h>

// fgets(memoryBuffer, sizeofBuffer, FILE *)
// You give it a buffer, its size and a stream to read from
// It will store what it reads in the buffer and give back the pointer to it
// When it fails, it returns NULL

int main(void) {
    // Declare pointer variable of type FILE
    FILE * filePtr;
    // Declare variable of type character array and initialize with file name
    const char fileName[] = "text.md";
    // Use fopen to open filestream in read mode, store pointer (access key) in filePtr
    filePtr = fopen(fileName, "r");
    // Check if opening was successfull (fopen returns not NULL)
    if (filePtr == NULL) {
        perror("Error opening the file.");
        return EXIT_FAILURE;
    }
    printf("File opened successfull.\n");

    // Declare character array for the buffer in fgets
    char textBuffer[100] = {0};

    // Create pionter of type character and set to NULL
    // This will be used to store the pointer address of textBuffer on successfull usage of fgets()
    char * c = NULL;
    
    // Call fgets (to get first line) and store response in c pointer
    c = fgets(textBuffer, sizeof(textBuffer), filePtr);
    printf("%s", textBuffer);
    // Check if pointers are the same
    printf("Texbuffer address:  %p\n", (void *)textBuffer);
    printf("Return address:     %p\n", (void *)c);

    // Call fgets again (to read second line) and store response in c pointer
    c = fgets(textBuffer, sizeof(textBuffer), filePtr);
    printf("%s", textBuffer);
    printf("Texbuffer address:  %p\n", (void *)textBuffer);
    printf("Return address:     %p\n", (void *)c);

    // Call fgets again (no line left in file) and store response in c pointer
    c = fgets(textBuffer, sizeof(textBuffer), filePtr);
    printf("%s", textBuffer);
    printf("Texbuffer address:  %p\n", (void *)textBuffer);
    printf("Return address:     %p\n", (void *)c);


    // Use the correct approach to read file line by line
    // Set FILE position allocator back to beginning
    rewind(filePtr);

    // Checks return value and as long as it is not null prints the buffer
    while (fgets(textBuffer, sizeof(textBuffer), filePtr) != NULL) {
        printf("%s", textBuffer);
    }
    
    // Use fclose to close the file, check return value, when not null it failed
    if (fclose(filePtr) != 0) {
        perror("Error closing the file.");
        return EXIT_FAILURE;
    } else {
        printf("File closed successfull.\n");
    }

    return 0;
}
