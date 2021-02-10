#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints to 98
 * @n: starting point
 *
 * Return: void
 */

void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);

			if (c != 98)
				putchar(',');
				putchar(' ');
		}
		putchar('\n');
	}

	if (n > 98)
	{
		for (c = n; c >= 98; c--)
		{
			printf("%d", c);

			if (c != 98)
				putchar(',');
				putchar(' ');
		}
		putchar('\n');
	}
}
