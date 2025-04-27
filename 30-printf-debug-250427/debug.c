#include <stdio.h>
#include "utils.h"

int main(void) {
    printf("Welcome to the calculator.\n");
    
    float sum = add(20, 40);
    printf("The sum of 20 and 40 is %f", sum);

    return 0;
}
