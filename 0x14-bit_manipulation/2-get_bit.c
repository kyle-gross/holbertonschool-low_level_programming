#include "holberton.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: the number to search
 * @index: the index to search for
 * Return: value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
