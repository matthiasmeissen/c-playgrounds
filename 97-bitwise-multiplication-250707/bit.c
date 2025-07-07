#include <stdio.h>

int main(void) {
    // Declare an unsigned char (8 bit) and set to zero
    // This is represented as 0000 0000 in binary
    unsigned char flags = 0;
    printf("Flags is initially:     %d\n", flags);
    // Set the third bit 
    // The number 4 in binary is 0000 0100
    // The character | represents the or operator
    // It returns 1 if on of the bits is 1
    // 0000 0000 | 0000 0100 -> 0000 0100 
    flags = flags | 4;
    printf("Flags is now:           %d\n", flags);

    // The << symbol represents the shift left operator
    // It shifts each bit by the specified amount to the left
    // This can be used to specify numbers
    // 1 << 2 can be read as 
    // 0000 0001 << 2 -> 0000 0100 (which is four)

    // This example used the & symbol
    // This is the AND operator and returns 1 when both are the same
    if (flags & (1 << 2)) {
        printf("4 (0000 0100) and (1 << 2) are the same.\n");
    }

    // You can use the shift by opertaor to do multiplication
    // 0000 0100 << 1 -> 0000 1000
    // So 4 becomes 8, which means it is multiplied by 2
    flags = flags << 1;
    printf("Flags is now:           %d\n", flags);

    return 0;
}
