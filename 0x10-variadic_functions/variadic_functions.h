#ifndef VAR_FUN_H
#define VAR_FUN_H

/* Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Macros */
#define COMMA_SPACE(s) ((s) > 0 ? ", " : "") 

#endif
