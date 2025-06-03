#include <stdio.h>

int main(void) {
    char line_buffer[100];
    printf("Enter your name: ");
    fgets(line_buffer, sizeof(line_buffer), stdin);
    printf("Hello %s\n", line_buffer);
    return 0;
}

