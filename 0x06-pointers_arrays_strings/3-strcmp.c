#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference bewteen strings, or 0 if strings are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) || *(s2 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}
