#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination of copy
 * @src: source to copy
 * @n: the number of bytes to copy
 *
 * Return: dest - the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
	*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
