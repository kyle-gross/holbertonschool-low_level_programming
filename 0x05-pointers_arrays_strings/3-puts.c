#include "holberton.h"

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
