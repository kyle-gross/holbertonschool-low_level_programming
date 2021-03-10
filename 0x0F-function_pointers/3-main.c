#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*pmath)(int a, int b);
	int a, b, math;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	pmath = get_op_func(argv[2]);
	if (pmath == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	math = pmath(a, b);
	printf("%d\n", math);
	return (0);
}
