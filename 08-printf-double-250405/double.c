#include <stdio.h>

// A float uses 4 bytes and can have maximum of around 7 digits
// A double uses 8 bytes and can have a maximum of around 15 digits

// The format specifier %f always expects a double data type
// When you pass a float into printf() it gets automatically promoted to a double

int main(void) {
    double price = 20.40;
    float flt8 = 4.0000001;
    float flt7 = 4.000001;

    printf("Float bytes: %zu\n", sizeof(float));
    printf("Double bytes: %zu\n", sizeof(double));

    printf("Double printed with all decimal places %f\n", price);
    printf("Double printed with two decimal places %.2f\n", price);
    printf("Double printed with no decimal places %.0f\n", price);

    printf("Float declared with 8 digits %f\n", flt8);
    printf("Float declared with 7 digits %f\n", flt7);

    char letter = 'A';

    printf("This is a char printed as char: %c\n", letter);
    printf("This is a char printed as int: %d\n", letter);
    printf("This is a char that has been increased by 32 printed as char: %c\n", letter + 32);

    return 0;
}
