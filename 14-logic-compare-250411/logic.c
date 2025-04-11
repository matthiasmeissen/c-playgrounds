#include <stdio.h>

int main(void) {
    int age = 20;

    if (age >= 18 && age <= 65) {
        printf("You are allowed to enter.\n");
    } else {
        printf("You are not allowed to enter. \n");
    }
    
    return 0;
}
