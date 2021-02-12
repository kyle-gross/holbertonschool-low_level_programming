#include "holberton.h"

/**
 * print_number - prints a number
 * @n: the number to print
 *
 * Return: void
 */

void print_number(int n)
{
	char c = '0';

	if (n < 0)
	{
		_putchar('-');
		n++;
		c = '1';
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + c);
}
