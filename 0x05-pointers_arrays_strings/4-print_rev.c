#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}	

	_putchar('\n');
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
