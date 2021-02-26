#include "stdio.h"

/**
 * main - prints number of arguments passed to main
 * @argc: number of arguments
 * @argv: unused in this program
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
