#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, hlen;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		hlen = len / 2;
	}
	else
	{
		hlen = (len - 1) / 2;
	}
	for (; str[hlen] != '\0'; hlen++)
	{
		_putchar(str[hlen]);
	}
	_putchar('\n');
}

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
