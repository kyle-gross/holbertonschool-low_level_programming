#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: destination of copy
 * @src: source to copy
 *
 * Return: dest - the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
