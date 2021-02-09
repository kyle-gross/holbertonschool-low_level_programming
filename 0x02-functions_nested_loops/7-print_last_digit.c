#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @r: The number to find last digit of
 *
 * Return: n - the last digit
 */

int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		i *= -1;
		l = i % 10;
		_putchar(l + 48);
		return (l);
	}
	else if (i > 0)
	{
		l = i % 10;
		_putchar(l + 48);
		return (l);
	}
	else
	{
		l = 0;
		_putchar(l + 48);
		return (0);
	}
}
