#include <stdio.h>
/**
 * main - prints numbers 0-9 using only putchar()
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
