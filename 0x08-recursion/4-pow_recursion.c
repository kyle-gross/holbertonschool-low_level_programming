#include "holberton.h"

/**
 * _pow_recursion - returns value of x to power of y
 * @x: the number to multiply
 * @y: the power to multiply to
 *
 * Return: -1 if y < 0; or x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
