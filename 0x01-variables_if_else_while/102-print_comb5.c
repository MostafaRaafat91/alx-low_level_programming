#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits n.
 * ranging from 0-99, seprated by comma followed by space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n1 < n2)
			{
				putcahr((n1 / 10) + 48);
				putcahr((n1 % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
