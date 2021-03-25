#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the number to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b < 48 || *b > 49)
			return (0);
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			break;
	}
	return (result);
}
