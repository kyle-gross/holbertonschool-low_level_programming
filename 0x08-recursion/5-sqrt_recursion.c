#include "holberton.h"

/**
 * testsqrt - finds square root of number
 * @i: test number
 * @n: number to find sq root of
 *
 * Return: Square root of n or -1
 */
int testsqrt(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (testsqrt(i, n));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number to find sqare root of
 *
 * Return: -1 if n does not have natural square root; or square root of n
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (testsqrt(0, n));
	return (-1);
}
