#include <stdio.h>
#include <stdlib.h>

/**
 * numcheck - verifies that the string contains only numbers
 * @s: the string to check
 * Return: 1 if numbers only - 0 if not
 */
int numcheck(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - generates sum of input numbers
 * @argc: the number of arguments
 * @argv: the array which stores arguments
 * Return: 1 if Error, 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (numcheck(argv[i]) == 1)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
