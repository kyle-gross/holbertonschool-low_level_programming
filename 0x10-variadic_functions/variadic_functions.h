#ifndef VAR_FUN_H
#define VAR_FUN_H

/* Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_string(va_list);
void print_int(va_list);
void print_float(va_list);

/* STRUCT */
/**
 * format_specifiers - format specifiers
 * @s: letter to compare
 * @f: function pointer
 */
typedef struct format_specifiers
{
	char *s;
	void (*f)();
} spec_t;

#endif
