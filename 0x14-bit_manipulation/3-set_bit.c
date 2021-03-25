#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: the number to set a bit within
 * @index: the index to set the bit at
 * Return: 1 if it worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
