#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication
 * @argc: # of arguments
 * @argv: array containing arguments
 * Return: 1 if error 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
