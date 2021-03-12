#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints a char, string, float, or integer
 * @format: list (in string form) of arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *sptr, *spacer = "";

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", spacer, va_arg(ap, int));
				spacer = ", ";
				break;
			case 'i':
				printf("%s%d", spacer, va_arg(ap, int));
				spacer = ", ";
				break;
			case 'f':
				printf("%s%f", spacer, va_arg(ap, double));
				spacer = ", ";
				break;
			case 's':
			sptr = va_arg(ap, char *);
			if (sptr == NULL)
			{
				printf("%s%p", spacer, sptr);
				spacer = ", ";
				break;
			}
			printf("%s%s", spacer, sptr);
			spacer = ", ";
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
