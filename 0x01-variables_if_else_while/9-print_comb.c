#include <stdio.h>

/**
 * main -Prints all Possible combinations of single digit n.
 *
 * Return Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((m % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
