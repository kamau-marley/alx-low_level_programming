#include <stdlib.h>
#include <time.h>
/**
 * main - Detremines if a number is positive , negative or zero.
 *
 * Return : Alaways 0 (Success)
 */

int main(void) {
    srand(time(0)):

   	n = rand() - RAND_MAX / 2:
    if (n > 0) 
    {
    	    printf("is positive\n");
    } 
    	else if (n == 0) 	
	{
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
