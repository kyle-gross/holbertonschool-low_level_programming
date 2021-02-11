#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;
	long int n, n1 = 1, n2 = 2;

	for (i = 0; i < 32; i++)
	{
		if (n1 % 2 == 0)
		{
			printf("%lu", n1);
			if (i < 31)
				printf(", ");
		}
		n = n1 + n2;
		n1 = n2;
		n2 = n;
	}
	putchar('\n');

	return (0);
}
