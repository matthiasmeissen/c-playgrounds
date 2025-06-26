#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    // Check if there are exactly two arguments (program name, filepath)
    // Use exit clause to close the program when not true
    // Include a usage hint
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <FileName>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Create pointer of type FILE
    FILE * filePtr;
    // Open file with name coming from input in read mode, store access key in pointer
    filePtr = fopen(argv[1], "r");
    // Check if opened successfull, exit program with error message on failuer
    if (filePtr == NULL) {
        perror("Error while opening the file.");
        return EXIT_FAILURE;
    }

    // Create an input buffer to hold 100 characters
    // char inputBuffer[100];
    // Use fgets to read from the file line by line
    // Writing to the input buffer asl long as function successfully returns pointer to buffer
    // It returns NULL, when EOF
    // while (fgets(inputBuffer, sizeof(inputBuffer), filePtr) != NULL) {
    //     fprintf(stdout, "%s", inputBuffer);
    // }
    // printf("\n");

    // Much more compact solution
    // Using fgetc() reads every character in the file and returns it as int
    // Since characters can be represented as int this works perfectly
    // The EOF is a special chracter, that signals the end of file
    // By using fputc() we can print them
    int c;
    while ((c = fgetc(filePtr)) != EOF) {
        fputc(c, stdout);
    }

    // Close the file and check for success, otherwise print error message
    if (fclose(filePtr) != 0) {
        perror("Error while closing the file.");
        return EXIT_FAILURE;
    }

    return 0;
}
