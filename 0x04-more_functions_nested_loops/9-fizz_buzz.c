#include <stdio.h>

/**
 * main - prints numbers 1 - 100
 * If number is a multiple of 3 - print Fizz
 * If number is a multiple of 5 - print Buzz
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i < 100)
				printf("FizzBuzz ");
			else
				printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			if (i < 100)
				printf("Fizz ");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
