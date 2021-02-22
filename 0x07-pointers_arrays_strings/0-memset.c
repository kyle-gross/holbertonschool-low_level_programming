#include "holberton.h"

/**
 * _memset - sets a string's memory location
 * @s: the string to assign memory to
 * @b: the character to copy
 * @n: the number of times to copy
 *
 * Return: s - the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
