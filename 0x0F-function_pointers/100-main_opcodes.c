#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i = 0, numbytes;
	char *ptr = (char *)main; /* Typecast main to match ptr */

	/* If # of arguments incorrect */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* If # of bytes is negative */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* Convert from string to integer */
	numbytes = atoi(argv[1]);
	/* Loop through # of times specified by numbytes */
	for (; i < numbytes; i++)
	{
		/* Print 2 characters in hexadecimal format */
		printf("%02hhx", *ptr);
		/* Add a space if it's not the last number */
		if (i < numbytes - 1)
			printf(" ");
		/* Increment ptr */
		ptr++;
	}
	/* Add new line */
	printf("\n");
	return (0);
}
