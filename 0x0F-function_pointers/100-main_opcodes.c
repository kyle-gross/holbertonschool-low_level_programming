#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, numbytes;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	numbytes = atoi(argv[1]);
	for (; i < numbytes; i++)
	{
		printf("%02hhx", *ptr);
		if (i < numbytes - 1)
			printf(" ");
		ptr += 1;
	}
	printf("\n");
	return (0);
}
