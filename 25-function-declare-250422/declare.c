#include <stdio.h>

float multiply(const float a, const float b);

int main(void) {
    float num;
    num = multiply(4.2, 8.4);
    printf("%f", num);
    
    return 0;
}

float multiply(const float a, const float b) {
    return a * b;
}
