#include <stdio.h>

/**
 * main - prints combinations of numbers
 *
 * Description: Prints all possible combinations of 2 2-digit numbers
 * Return: 0
 */

int main(void)
{
	int i;

		for (i = 0; i < 100; i++)
		{
			int n;

			for (n = 0; n < 100; n++)
			{
				if (i < n)
				{
					putchar((i / 10) + '0');
					putchar((i % 10) + '0');
					putchar(' ');
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
					if (i == 98 && n == 99)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');

	return (0);
}
