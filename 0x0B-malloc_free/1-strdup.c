#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copies a string
 * @str: the string to copy
 * Return: NULL if string == NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str[0] == NULL)
		return (NULL);

	while (str[i])
		i++;

	dup = (char *)malloc(i);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
