#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: combined strings, or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *cat;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	cat = (char *)malloc(size1 + size2 + 1);

	if (cat == NULL)
		return (NULL);

	while (i < size1)
	{
		cat[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		cat[i] = s2[i - size1];
		i++;
	}
	cat[i] = '\0';

	return (cat);
}

/**
 * _strlen - counts a string
 * @s: the string
 * Return: number of chars in string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
