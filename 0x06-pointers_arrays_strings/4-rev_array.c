#include "holberton.h"

/**
 * reverse_array - reverses contents of an array
 * @a: the array to reverse
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0, c = (n - 1); i < c; i++, c--)
	{
		int tmp = a[i];

		a[i] = a[c];
		a[c] = tmp;
	}
}
