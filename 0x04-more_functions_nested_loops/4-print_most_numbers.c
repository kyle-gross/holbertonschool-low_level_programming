#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 except 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
