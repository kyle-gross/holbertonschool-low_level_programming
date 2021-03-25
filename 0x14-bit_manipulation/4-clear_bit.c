#include "holberton.h"
/**
 * clear_bit - resets a bit to 0
 * @n: the number to reset the bit in
 * @index: the index to change
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
