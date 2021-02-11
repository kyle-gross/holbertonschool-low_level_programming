#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: Determines number of diagonal lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (c = 0; c < i; ++c)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
