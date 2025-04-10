#include <stdio.h>

// To write a value to a variable using scanf we need to know the memory address of it
// To do this we use the & operator, which is the address-of operator
// Just type the variable name in the scanf() function wont help, since we are not interested in the current value

// So scanf("%d", &var) tells the function 
// Read an int ("%d") from the input and 
// Store it at memory location specified by the address of var

int main(void) {
    int temp;

    printf("Enter a temperature in Celsius ");
    scanf("%d", &temp);

    if (temp >= 0) {
        printf("Things won't freeze.\n");
    } else {
        printf("We are below the freezing point.\n");
    }

    return 0;
}
