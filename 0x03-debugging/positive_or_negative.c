#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Prints a random number and states whether
 *        It's positve ,negative or zero.
 *
 * Return: Alwayes 0 .
 */
int positive_or_negative(void)
{
	int n = 0;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
