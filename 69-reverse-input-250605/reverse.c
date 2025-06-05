#include <stdio.h>
#include <string.h>

int main(void) {
    char input_buffer[100] = {0};
    printf("Input a String.\n");
    if (fgets(input_buffer, sizeof(input_buffer), stdin) != NULL) {
        printf("User Input was: %s", input_buffer);
        printf("Length of input is: %d", strlen(input_buffer));
    } 
    return 0;
}
