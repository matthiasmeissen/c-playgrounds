#include <stdio.h>

int main(void) {
    int letter;
    do {
        printf("Enter a character: \n");
        scanf(" %c", &letter);
    } while (letter != 'q');
    
    return 0;
}
