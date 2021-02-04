#include <stdio.h>
/**
 * main - prints numbers 0-9 using only putchar()
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((char)n);
	}

	putchar('\n');

	return (0);
}
