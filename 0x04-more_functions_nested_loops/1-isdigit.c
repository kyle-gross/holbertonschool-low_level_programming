#include "holberton.h"

/**
 * _isdigit - tests if number is a digit
 * @c: the number to test
 *
 * Return: 1 if c is digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
