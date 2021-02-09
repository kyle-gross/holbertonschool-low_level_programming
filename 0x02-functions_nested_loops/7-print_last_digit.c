#include "holberton.h"
#include <stdio.h>

/**
 * _abs - prints absolute value of a number
 * @i: The number to test absolute value of
 *
 * Return: 0 if i == 0, i if i > 0, or -i if i < 0
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i == 0)
		return (0);
	else
		return (-i);
}

/**
 * print_last_digit - prints last digit of a number
 * @i: The number to find last digit of
 *
 * Return: l - the last digit
 */

int print_last_digit(int i)
{
	int l;

	l = _abs((i % 10));
	_putchar(l + 48);
	return (l);
}
