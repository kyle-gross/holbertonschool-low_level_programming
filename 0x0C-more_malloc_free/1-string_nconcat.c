#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: NULL if fail, or concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, ii;

	if (n >= (unsigned int)_strlen(s2))
		n = (unsigned int)_strlen(s2);
	ptr = malloc((unsigned int)_strlen(s1) * sizeof(char) + n + 2);
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0, ii = 0; s1[i] != '\0'; i++, ii++)
		ptr[ii] = s1[i];
	for (i = 0; i < n; i++, ii++)
		ptr[ii] = s2[i];
	ptr[ii] = '\0';
	return (ptr);
}
/**
 * _strlen - gets length of string
 * @s: the string
 * Return: size of string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
