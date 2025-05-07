#include <stdio.h>

int main (void) {
    int nums[] = {4, 8, 12};
    int * p = nums;
    for (int i = 0; i < 3; i++) {
        printf("%d", *(p + i));
    }
    return 0;
}
