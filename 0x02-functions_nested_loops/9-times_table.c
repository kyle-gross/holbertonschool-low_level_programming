#include "holberton.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, n, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 10; i++)
		{
			n = c;
			n *= i;
			if (n < 10)
				_putchar(' ');
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (i == 9)
			{
				_putchar('$');
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
