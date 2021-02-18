#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source to apend to dest str
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	if (('\0' != dest) && ('\0' != src))
	{
		while ('\0' != *dest)
			dest++;
		while ('\0' != *src)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (result);
}
