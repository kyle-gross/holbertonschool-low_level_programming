#include <stdio.h>
/**
 * main - prints 00 - 99
 *
 * Return: 0
 */
int main(void)
{
	int n, i;

	n = 48;
	while (n < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(n);
			putchar(i);
			if (n == 57 && i == 57)
				break;
			i++;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
