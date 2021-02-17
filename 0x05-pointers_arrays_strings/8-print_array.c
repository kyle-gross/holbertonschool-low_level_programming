#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of any size
 * @a: array to print
 * @n: size of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
