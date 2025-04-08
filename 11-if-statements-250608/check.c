#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// You can use the rand() function by importing the stdlib.h Library
// It returns a random number based on a seed
// You can adjust the seed by calling srand() with some argument
// When the argument is the same, the random number sequence will be the same
// Meaning that each subsequent call of rand() will return the same value
// To have a changing seed you can import the time.h Library
// You can get the time with the time(NULL) function

int main(void) {
    int score = 10;

    if (score == 10) {
        printf("The number %d is the correct score.\n", score);
    }
    if (score != 10) {
        printf("The number %d is not the correct score.\n", score);
    }

    srand(time(NULL));
    int score1 = rand() % 40;

    if (score1 == 10) {
        printf("The number %d is the correct score.\n", score1);
    }
    if (score1 != 10) {
        printf("The number %d is not the correct score.\n", score1);
    }

    return 0;
}
