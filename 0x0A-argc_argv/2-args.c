#include <stdio.h>

/**
 * main - prints arguments recieved from command line
 * @argc: # of arguments
 * @argv: array containing arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
