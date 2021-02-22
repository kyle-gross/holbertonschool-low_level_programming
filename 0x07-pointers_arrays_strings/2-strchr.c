#include "holberton.h"

/**
 * _strchr - returns a string starting from a character
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: string 's' starting from specific character - or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
