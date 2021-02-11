#include "holberton.h"

/**
 * print_times_table - prints the times table up to 15
 * @n: Determines size of times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, c, v;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			for (i = 0; i <= n; i++)
			{
				v = c;
				v *= i;
				if (v >= 100)
				{
					_putchar(v / 100 + '0');
					_putchar((v - 100) / 10 + '0');
					_putchar(v % 10 + '0');
				}
				else if (v > 9 && v < 100)
				{
					_putchar(' ');
					_putchar(v / 10 + '0');
					_putchar(v % 10 + '0');
				}
				else if (i > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(v % 10 + '0');
				}
				else
					_putchar(v % 10 + '0');
				if (i == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
