#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of args
 * Return: Sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = (int)n, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (; i; i--)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
