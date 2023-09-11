#include <stdio.h>

/* This program prints all numbers
 *to base ten starting from zero followed by a new line.
 * Returns (0)
 *
 */

	int main(void)

{	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);


}
