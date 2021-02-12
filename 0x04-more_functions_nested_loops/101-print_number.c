#include "holberton.h"

/**
 * print_number - prints a number using _putchar
 * @n: The number to print
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar(45);
	n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
