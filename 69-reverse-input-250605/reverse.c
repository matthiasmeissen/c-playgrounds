#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char input_buffer[100] = {0};
    printf("Input a String: ");

    if (fgets(input_buffer, sizeof(input_buffer), stdin) != NULL) {
        // Remove newline character and print input
        input_buffer[strcspn(input_buffer, "\n")] = 0;
        printf("String:       %s\n", input_buffer);

        // Get the length of the string (characters only)
        const size_t length = strlen(input_buffer);
        printf("Length:      %zu\n", length);

        if (length > 0) {
            char * reversed = malloc(length + 1);
            strncpy(reversed, input_buffer, length);
            printf("Copied String: %s\n", reversed);

            for (int i = 0; i < length; i++) {
                int reversed_index = (int)length - i - 1;
                reversed[i] = input_buffer[reversed_index];
            }
            printf("Reversed String: %s\n", reversed);

            free(reversed);
            reversed = NULL;
        } else {
            fprintf(stderr, "Empty string can not be reversed.\n");
        }
    } 
    return 0;
}
