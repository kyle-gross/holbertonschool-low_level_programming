#include "holberton.h"

/**
 * print_triangle - prints a right triangle on the terminal
 * @size: Determines size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				if (c < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
