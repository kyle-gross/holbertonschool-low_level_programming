#include <stdio.h>
/**
 * main - prints all combinations of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int n, i, c;

	n = 48;
	c = 0;
	while (n < 58)
	{
		i = 49 + c;
		while (i < 58)
		{
			putchar(n);
			putchar(i);
			if (n == 56 && i == 57)
				break;
			i++;
			putchar(',');
			putchar(' ');
		}
		n++;
		c++;
	}
	putchar('\n');

	return (0);
}
