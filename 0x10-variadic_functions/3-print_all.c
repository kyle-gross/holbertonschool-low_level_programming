#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * string_check - checks a string for null
 * @s: the string
 * Return: (nil) or string
 */
char *string_check(char *s)
{
	if (s == NULL)
		return ("(nil)");
	return (s);
}
/**
 * print_all - prints anything
 * @format: list (in string form) of arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, ii = 0;

	if (format != NULL)
	{
		va_start(ap, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", COMMA_SPACE(ii), va_arg(ap, int));
					ii++;
					break;
				case 'i':
					printf("%s%d", COMMA_SPACE(ii), va_arg(ap, int));
					ii++;
					break;
				case 'f':
					printf("%s%f", COMMA_SPACE(ii), va_arg(ap, double));
					ii++;
					break;
				case 's':
					printf("%s%s", COMMA_SPACE(ii), string_check(va_arg(ap, char *)));
					ii++;
					break;
			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
