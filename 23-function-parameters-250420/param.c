#include <stdio.h>

void print_square(int num);

int main(void) {
    int num = 4;
    
    print_square(num);
    printf("The original variable num is: %d", num);

    return 0;
}

void print_square(int num) {
    printf("The square of %d is %d\n", num, num * num);
}
