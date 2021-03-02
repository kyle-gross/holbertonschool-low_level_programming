#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: char to initialiaze array to
 * Return: NULL if fail, or pointer to array if success
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *)malloc(size);
	unsigned int i;

	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
