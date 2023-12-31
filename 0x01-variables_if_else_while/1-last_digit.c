#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and prints its last digit.
 * 'n' holds a different value each time the program runs.
 * Output: "Last digit of n is X", where X is the last digit of 'n'.
 * If X is greater than 5: "and is greater than 5".
 * If X is 0: "and is 0".
 * If X is less than 6 and not 0: "and is less than 6 and not 0".
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Print the last digit of n */
	printf("Last digit of %d is %d and is ", n, n % 10);
	/* Check the last digit and print the corresponding message */
	if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else if ((n % 10) < 0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
