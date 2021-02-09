#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		char l;
		for (l = 'a'; l < 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
