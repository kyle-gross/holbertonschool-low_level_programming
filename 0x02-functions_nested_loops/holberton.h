#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints alphabet to stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
}

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
		print_alphabet();
}

/**
 * _islower - determines if character is uppercase or lowercase
 * @c: The character to test
 *
 * Return: 0 if true, 1 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
#define HOLBERTON_H
#endif
