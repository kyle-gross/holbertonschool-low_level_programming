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
 * arg_count - counts valid arguments
 * @s: string to examine
 * Return: # of valid args
 */
int arg_count(const char * const s)
{
	int i = 0, count = 0;

	while (s[i])
	{
		switch (s[i])
		{
			case 'c':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'f':
				count++;
				break;
			case 's':
				count++;
				break;
		}
		i++;
	}
	return (count);
}
/**
 * print_all - prints anything
 * @format: list (in string form) of arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, ii = 0, valid_args = arg_count(format);

	if (format != NULL)
	{
		va_start(ap, format);
		while (format && (format[i]))
		{
			switch (format[i])
			{
				case 'c':
					printf("%c%s", va_arg(ap, int),
							COMMA_SPACE(valid_args, ii));
					ii++;
					break;
				case 'i':
					printf("%d%s", va_arg(ap, int),
							COMMA_SPACE(valid_args, ii));
					ii++;
					break;
				case 'f':
					printf("%f%s", va_arg(ap, double),
							COMMA_SPACE(valid_args, ii));
					ii++;
					break;
				case 's':
					printf("%s%s", string_check(va_arg(ap, char *)),
							COMMA_SPACE(valid_args, ii));
					ii++;
					break;
			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
