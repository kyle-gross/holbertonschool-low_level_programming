#include <stdio.h>

/**
 * main - prints name of file
 * @argc: size of argv
 * @argv: array which stores command line arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
