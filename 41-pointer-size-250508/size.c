#include <stdio.h>

int main(void) {
    printf("---- Int Array ----\n");
    // Declare an integer array with size of two
    int i_arr[2];
    // Print address of first and second item using pointer arithmetic
    printf("Address of first item of int array:         %p\n", (void *)i_arr);
    printf("Address of second item of int array:        %p\n", (void *)(i_arr + 1));

    // Calculate the distance between the two locations
    printf("The number of bytes for one item is:        %ld\n", (void *)(i_arr + 1) - (void *)i_arr);

    // Print the length of the int array
    printf("The length of the int array in bytes is:    %ld\n", sizeof(i_arr));


    printf("\n---- Char Array ----\n");
    // Declare an char array with size of two
    char c_arr[2];
    // Print address of first and second item using pointer arithmetic
    printf("Address of first item of char array:        %p\n", (void *)c_arr);
    printf("Address of second item of char array:       %p\n", (void *)(c_arr + 1));

    // Calculate the distance between the two locations
    printf("The number of bytes for one item is:        %ld\n", (void *)(c_arr + 1) - (void *)c_arr);

    // Print the length of the char array
    printf("The length of the char array in bytes is:   %ld\n", sizeof(c_arr));

    printf("\n---- Exploration ----\n");
    int i_arr2[4];
    // Shows the size of the complete array
    printf("Array size:                 %ld\n", sizeof(i_arr2));

    // Shows the size of the pointer to the first item in the array
    printf("Pointer size:               %ld\n", sizeof(&i_arr2[0]));

    int * p_i_arr2 = i_arr2;
    // Shows the size of the pointer to the first item in the array
    printf("Pointer size:               %ld\n", sizeof(p_i_arr2));

    // Shows the size of the first item in the array
    printf("Item size:                  %ld\n", sizeof(*p_i_arr2));

    return 0;
}
