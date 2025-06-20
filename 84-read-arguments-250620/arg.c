#include <stdio.h>

int main(int argc, char * argv[]) {
    // Argc is the number of arguments passed to the main function by the terminal (Argument Count)
    printf("Argument count is: %d\n", argc);

    for (int i = 0; i < argc - 1; i ++) {
        // Argv[] is an array of pointers to character arrays passed by arguments in the main function (Argument Vector)
        // The first one argv[0] is always the program nam
        printf("Argument vector at index %d is: %s\n", i, argv[i]);
    }

    if (argv[argc] == NULL) {
        // argv[argc] is always NULL
        printf("Getting argv[argc] returns NULL.\n");
    }

    return 0;
}
