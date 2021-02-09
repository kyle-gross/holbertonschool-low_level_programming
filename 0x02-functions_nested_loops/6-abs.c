#include "holberton.h"

/**
 * _abs - prints absolute value of a number
 * @i: The number to be tested
 *
 * Return: -i if less than 0, i if greater than 0
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);

	return (i);
}
