#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list list);
void print_string(va_list list);
void print_int(va_list list);
void print_float(va_list list);
/**
 * print_all - prints a character, string, integer, or float
 * @format: string of arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, ii;
	char *spacer = "";
	spec_t spec[] = {
	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"f", print_float},
	{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		ii = 0;
		while (spec[ii].s && spec[ii].s[0])
		{
			if (format[i] == spec[ii].s[0])
			{
				printf("%s", spacer);
				spec[ii].f(list);
				spacer = ", ";
			}
			ii++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
/**
 * print_char - prints a character
 * @list: argument list
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_string - prints a string
 * @list: argument list
 * Return: void
 */
void print_string(va_list list)
{
	char *sptr;

	sptr = va_arg(list, char *);
	if (sptr != NULL)
	{
		printf("%s", sptr);
		return;
	}
	printf("%p", sptr);
}
/**
 * print_int - prints an integer
 * @list: argument list
 * Return: void
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints a float
 * @list: argument list
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
