#include "holberton.h"
#include <string.h>
/**
 * main - prints word "Holberton"
 * Return: 0
 */
int main(void)
{
	char *c = "Holberton";
	unsigned int i;

	for (i = 0; i < strlen(c); i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
