#include "holberton.h"

/**
 * _isupper - checks if character is uppercase
 * @c: The character to test
 *
 * Return: 1 if upper; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
