#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source to apend to dest str
 * @n: the number of bytes to concatenate
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	if (('\0' != dest) && ('\0' != src))
	{
		while ('\0' != *dest)
			dest++;
		while ('\0' != *src && i < n)
		{
			*dest++ = *src++;
			i++;
		}
		*dest = '\0';
	}
	return (result);
}
