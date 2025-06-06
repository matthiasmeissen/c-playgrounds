#include <stdio.h>

int main(void) {
    struct Point {int x; int y};
    struct Point p1;
    p1.x = 20;
    p1.y = 40;
    printf("p1: %d \n p2: %d\n", p1.x, p1.y);
    return 0;
}
