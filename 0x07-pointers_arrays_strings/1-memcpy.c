#include "holberton.h"

/**
 * _memcpy - copies n bytes from *src to *dest
 * @dest: the destination to copy to
 * @src: the source to copy
 * @n: the number of bytes to copy
 *
 * Return: dest - the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
