#include <stdio.h>

int main(void) {
    int tempF = 80;
    float tempC = (tempF - 32) * 5.0 / 9.0;

    printf("%d degrees fahrenheit are %f degrees celsius.\n", tempF, tempC);

    return 0;
}
