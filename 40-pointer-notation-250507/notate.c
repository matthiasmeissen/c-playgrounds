#include <stdio.h>

void explore_pointer_behavior(void);

int main (void) {
    // Declare array of type int with three items and initialize with numbers
    // int[] = {4, 8, 12} also works, since size is explicitly defined by the numbers
    int nums[3] = {4, 8, 12};

    // Create pointer and initialize with nums address to first item (nums decays to &nums[0])
    int * p = nums;

    // Create for loop that prints three times
    for (int i = 0; i < 3; i++) {
        // Print item in array at specific location using pointer arithmetic notation
        // p + i does not just add one but sizeof(int) to the pointer (accessing the next item in memory)
        // * p is dereferencing the value stored at this location in memory
        printf("%d\n", *(p + i));
    }

    explore_pointer_behavior();

    return 0;
}

/**
 * @brief A short exploration on pointers
 */
void explore_pointer_behavior(void) {
    int nums[3];
    nums[0] = 4;
    nums[1] = 8;
    nums[2] = 12;
    // {4, 8, 12} can only be used during initialization of an array
    // nums is a constant pointer to the beginning of an array
    // So writing nums = something, is not allowed since you can not assin a new array or address to it

    int * p = NULL;
    p = nums;

    // The size of the pointer is different to the size of the array
    int pointerBytes = sizeof(p);
    printf("Size of the pointer to the array in bytes is:  %d\n", pointerBytes);

    // Calculate array length by divding its size in bytes by the size of the data type it stores in bytes
    int arrayBytes = sizeof(nums);
    int intBytes = sizeof(int);
    int length = arrayBytes / intBytes;

    printf("Size of array in bytes is:  %d\n", arrayBytes);
    printf("Size of int in bytes is:    %d\n", intBytes);
    printf("Length of array is:         %d\n", length);

    for (int i = 0; i < length; i++) {
        printf("%d\n", *(p + i));
    }
}
