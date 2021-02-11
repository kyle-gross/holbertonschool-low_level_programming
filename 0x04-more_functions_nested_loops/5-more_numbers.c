#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	_putchar('\n');
	}
}
