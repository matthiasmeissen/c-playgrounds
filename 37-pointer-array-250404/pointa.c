#include <stdio.h>

// The memory address of an array equals the address of its first item

// This means that the name of an array (when used in an expression) is not the whole group of values
// But automatically becomes a pointer to the first item in the array
// This is called decay

// So nums often acts the same as &nums[0]

// Note on pointer casting
// While it works to write printf("%p", ptr)
// It is better to cast the variable to the generic pointer type (void *) ptr
// This makes things more clear


int main(void) {
    int nums[] = {10, 20, 30};
    printf("Address of nums array                       %p \n", (void *)&nums);

    printf("Address of first item in nums array         %p \n", (void *)&nums[0]);
    printf("Value of first item in array                %d \n", nums[0]);

    int * p = nums;
    printf("Address of pointer to array                 %p \n", (void *)p);

    int * p1 = &nums[0];
    printf("Address of pointer to array                 %p \n", (void *)p1);

    return 0;
}
