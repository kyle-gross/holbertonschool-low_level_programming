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
	unsigned int i = 0, ii = 0;
	char *sptr;

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
					sptr = va_arg(ap, char *);
					if (sptr == NULL)
					{
						printf("%s%p", COMMA_SPACE(ii), sptr);
						ii++;
						break;
					}
					printf("%s%s", COMMA_SPACE(ii), sptr);
					ii++;
					break;
			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
