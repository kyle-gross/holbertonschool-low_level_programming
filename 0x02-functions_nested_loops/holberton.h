#include <stdio.h>
#ifndef holberton
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
}

void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
		print_alphabet();
}
#define holberton
#endif
