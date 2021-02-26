#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates sum of input numbers
 * @argc: the number of arguments
 * @argv: the array which stores arguments
 * Return: 1 if Error, 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
