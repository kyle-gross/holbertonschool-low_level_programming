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

	if (n < 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c < 98)
				printf("%d, ", c);
			else
				printf("98");
		}
	}

	else if (n == 98)
		printf("98");

	else
	{
		for (c = n; c >= 98; c--)
		{
			if (c > 98)
				printf("%d, ", c);
			else
				printf("98");
		}
	}
	putchar('\n');
}
