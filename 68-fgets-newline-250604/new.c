#include <stdio.h>
#include <string.h>

int main(void) {
    // Declare character array with 100 items and initialize all to 0
    char input_buffer[100] = {0};
    int length = sizeof(input_buffer);
    printf("Please enter your name: ");
    if (fgets(input_buffer, length - 1, stdin) != NULL) {
        printf("Hello: %s\n", input_buffer);
    } else {
        fprintf(stderr, "There was an error in getting the string, or it was too long.\n");
    }

    return 0;
}
