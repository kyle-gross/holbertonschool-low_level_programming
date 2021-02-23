#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonal values in 2d array
 * @a: the array
 * @size: the size of length and height of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	/* Variables */
	int i, sum1 = 0, sum2 = 0;

	/* Loop through array from top left to bottom right */
	for (i = 0; i < size * size; i += size + 1)
	{
		/* Add to sum1 */
		sum1 += a[i];
	}
	/* Loop through array from top right to bottom left */
	for (i = size - 1; i < size * size - size + 1; i += size - 1)
	{
		/* Add to sum2 */
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
