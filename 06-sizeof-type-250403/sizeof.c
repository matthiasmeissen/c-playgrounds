#include <stdio.h>

// The sizeof() operator returns the number of bytes used for a type or variable
// So you can write sizeof(int) to see how much the datatype int needs
// But you can also write sizeof(var) to see how much bytes the variable needs
// It returns a value of type size_t wich is an unsigned integer
// The format specifier %lu for unsigned long can print that value

// You can also write sizeof var but this works only for expressions
// Meaning sizeof int wont work, it is a datatype
// But sizeof var works, since its is an expression, assuming var si some int variable

// Important note: The size of the types are dependet on the system
// On modern compoters those are larger compared to old ones
// The sizeof() is a good way to see how much is actually used

int main(void) {
    printf("Ints have a size of %lu bytes on that system.\n", sizeof(int));
    printf("Floats have a size of %lu bytes on that system.\n", sizeof(float));
    printf("Doubles have a size of %lu bytes on that system.\n", sizeof(double));
    printf("Chars have a size of %lu bytes on that system.\n", sizeof(char));

    int num = 4;
    char character = 'A';
    size_t size = 200;

    printf("Ints have a size of %lu bytes on that system.\n", sizeof(num));
    printf("Chars have a size of %lu bytes on that system.\n", sizeof(character));
    printf("A variable of type size_t requires %lu bytes\n", sizeof(size));

    char word[] = "Word";
    char sentence[] = "Some Code";
    printf("The String %s has a size of %lu which is one more than the number of character because of the null terminator.\n", word, sizeof(word));
    printf("The String %s has a size of %lu bytes on that system.\n", sentence, sizeof(sentence));
    
    return 0;
}
