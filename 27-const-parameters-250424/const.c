#include <stdio.h>

// The use a string as a variable you write char*
// This points to the address in memory until the \0 terminator ends the string
// So a string is an array of chars with this terminator added to it
// To print it you use the "%s" format specifier for this

// There is one important distinction
// A char* can point to a string literal like const name = "Name" which you should not modify
// It can also point to a modifiable character array like char name[20]

void print_details(const int id, const float balance);
void print_separator(const int num, const char character);
void print_user_details(const char* name);

int main(void) {
    print_details(438, 204.26);

    print_user_details("User Name");

    return 0;
}

void print_details(const int id, const float balance) {
    printf("Your id is:         %d\n", id);
    printf("Your balance is:    %.2f\n", balance);
}

void print_user_details(const char* name) {
    printf("%s\n", name);
    print_separator(40, '-');
    print_details(438, 204.26);
    print_separator(40, '-');
}

void print_separator(const int num, const char character) {
    for (int i = 0; i < num; i++) {
        printf("%c", character);
    }
    printf("\n");
}
