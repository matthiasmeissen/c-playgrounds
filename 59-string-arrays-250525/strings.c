#include <stdio.h>

int main(void) {
    char message[] = "Hello";
    printf("The variable is: %s\n", message);
    int length = sizeof(message);
    printf("The string array has a length of %d\n", length);
    printf("The last character of the array is %s\n", message[length]);
    return 0;
}
