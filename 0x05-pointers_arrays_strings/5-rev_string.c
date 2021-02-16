#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int c, i, len = _strlen(s);

	for (i = 0, c = len - 1; i < c; i++, c--)
	{
		char tmp = s[i];
		s[i] = s[c];
		s[c] = tmp;
	}
}

/**
 *_strlen - returns size of string
 *@s: the string to count
 *
 *Return: c - the size of string
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
