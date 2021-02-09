#include "holberton.h"
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
