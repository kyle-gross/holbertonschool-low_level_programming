#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the number to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	const char *temp_b = b;
	unsigned int result = 0, i, signal = 0;

	if (!b)
		return (0);
	for (i = 0; temp_b[i]; i++)
	{
		if (temp_b[i] < 48 || temp_b[i] > 49)
			signal = 1;
	}
	if (signal == 1)
		return (0);
	for (; *b; b++)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			break;
	}
	return (result);
}
