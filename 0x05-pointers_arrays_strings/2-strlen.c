#include "holberton.h"

/**
 * _strlen - returns size of string
 * @s: the string to count
 *
 * Return: c - the size of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
