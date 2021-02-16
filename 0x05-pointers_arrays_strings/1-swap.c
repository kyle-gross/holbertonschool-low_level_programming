#include "holberton.h"

/**
 * swap_int - swapts the values of two integers
 * @a: variable to swap
 * @b: variable to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
