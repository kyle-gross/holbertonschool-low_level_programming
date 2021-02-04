#include <stdio.h>
/**
 * main - prints 0 - 9
 *
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
