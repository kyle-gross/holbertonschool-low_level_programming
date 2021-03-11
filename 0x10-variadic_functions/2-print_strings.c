#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to print between strings
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *tmp;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(ap, char *);
			if (tmp == NULL)
				printf("%p", tmp);
			else
				printf("%s", tmp);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
