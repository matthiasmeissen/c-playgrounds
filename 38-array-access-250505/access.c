#include <stdio.h>

void get_array_item(int nums[], const int i);

// We can access an item by specifying the memory address

// 0___1___2___
// |- access the first (p + 0)

// 0___1___2___
//     |- access the second (p + 1)

// Writing p[i] is the same as *(p + i)
// It both accesses the value stored at the pointer location by dereferecing it
// When you write *(p + i) it adds i bytes times the size of the type stored

int main(void) {
    int nums[3] = {10, 20, 30};
    // Nums is an array here
    printf("Size of nums is 3 * sizeof(int) here:          %zu\n", sizeof(nums));

    get_array_item(nums, 1);

    return 0;
}

void get_array_item(int *nums, const int i) {
    int * p = nums;
    // Nums is a pointer here
    printf("Size of nums is sizeof(int *) here:             %zu\n", sizeof(nums));

    printf("Access %d item in nums through p[i]:            %d\n", i, p[i]);

    // This is pointer arithmetic
    // It wont add i bytes, 
    // But i bytes times the size of the type the pointer points to
    printf("Access %d item in nums through *(p + %d):       %d\n",i, i,  *(p + i));
}
