#include "holberton.h"

/**
 *print_number - prints a number
 *@n: the number to print
 *
 *Return: void
 */

void print_number(int n)
{
	if (n / 10 != 0)
	{
		printnumber(n / 10);
		if (n > 0)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar(n % 10 + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar('-');
		_putchar(-n % 10 + '0');
	}
	else
		_putchar('0');
}
