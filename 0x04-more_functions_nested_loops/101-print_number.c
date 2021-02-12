#include "holberton.h"

/**
 *print_number - prints a number
 *@i: the number to print
 *
 *Return: void
 */

void print_number(int i)
{
	if (i / 10 != 0)
	{
		printnumber(i / 10);
		if (i > 0)
		{
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(-i % 10 + '0');
		}
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i > 0))
	{
		_putchar(i % 10 + '0');
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i <= 0))
	{
		_putchar('-');
		_putchar(-i % 10 + '0');
	}
	else
		_putchar('0');
}
