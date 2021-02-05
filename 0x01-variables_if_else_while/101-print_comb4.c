#include <stdio.h>
/**
 * main - prints every combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int h, t, o;

	for (h = 0; h < 10; h++)
	{
		for (t = (h + 1); t < 10; t++)
		{
			for (o = (t + 1); o < 10; o++)
			{
				putchar((h % 10) + '0');
				putchar((t % 10) + '0');
				putchar((o % 10) + '0');
				if (h == 7 && t == 8 && o == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return 0;
}
