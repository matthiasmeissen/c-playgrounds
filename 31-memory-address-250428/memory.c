#include <stdio.h>

// Memory is a sequence of bytes
// Each byte has an address

// To get the address of a variable you use the & operator
// To print and address you use the %p format specifier

void print_number(const int num);

int main(void) {
    // Same variable has same address
    int num = 20;
    printf("The value of num is %d and the memory address is %p \n", num, &num);
    num = 24;
    printf("The value of num is %d and the memory address is %p \n", num, &num);

    // Variable passed in function is copied and copy has new address
    print_number(num);

    // Every new variable has an individual address
    float num2 = 20;
    printf("The value of num2 is %f and the memory address is %p \n", num2, &num2);

    // Explicit casting, some compilers expect %p to be void* type
    float num3 = 20;
    printf("The value of num3 is %f and the memory address is %p \n", num3, (void*)&num3);

    return 0;
}

void print_number(const int num) {
    printf("The value of num is %d and the memory address is %p \n", num, &num);
}
