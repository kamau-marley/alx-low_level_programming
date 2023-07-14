#include <stdlib.h>
#include <time.h>
/**
 * main - Detremines if a number is positive , negative or zero.
 *
 * Return : Alaways 0 (Success)
 */

int main() {
    srand(time(0));  // Initialize random seed

    int n = rand() % 201 - 100;  // Generate random number between -100 and 100

    printf("The number: %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
