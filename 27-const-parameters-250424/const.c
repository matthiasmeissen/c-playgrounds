#include <stdio.h>

void print_details(const int id, const float balance);

int main(void) {
    print_details(438, 204.26);
    return 0;
}

void print_details(const int id, const float balance) {
    printf("Your id is: %d", id);
    printf("Your balance is: %.2f", balance);
}
