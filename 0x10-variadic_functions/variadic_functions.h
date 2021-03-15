#ifndef VAR_FUN_H
#define VAR_FUN_H

#include <stdarg.h>

/* Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_string(va_list list);
void print_int(va_list list);
void print_float(va_list list);

/* STRUCT */
/**
 * struct format_specifiers - format specifiers
 * @s: letter to compare
 * @f: function pointer
 */
typedef struct format_specifiers
{
	char *s;
	void (*f)();
} spec_t;

#endif
