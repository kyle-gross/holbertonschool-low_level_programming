#include "holberton.h"
#include <stdlib.h>
int numword(char *s);
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: Grid of split strings
 */
char **strtow(char *str)
{
	int i = 0, ii = 0, c = 0, n = 0, nn = 0;
	char **ptr = NULL;
	int *tmp_ar = NULL;

	if (str == NULL)
		return (NULL);
	tmp_ar = malloc(sizeof(int) * numword(str));
	if (tmp_ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			c++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				tmp_ar[ii] = c;
				ii++;
				c = 0;
			}
		}
	}
	ptr = malloc(numword(str) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < numword(str); i++)
	{
		ptr[i] = malloc(tmp_ar[i] * sizeof(char));
			if (ptr[i] == NULL)
			{
				for (ii = i; ii >= 0; ii--)
				{
					free(ptr[ii]);
				}
				free(ptr);
				return (NULL);
			}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			ptr[n][nn] = str[i];
			nn++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				ptr[n][nn] = '\0';
				n++;
				nn = 0;
			}
		}
	}
	return (ptr);
}
/**
 * numword - counts number of words in a string
 * @s: the string
 * Return: number of words
 */
int numword(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			if (s[i + 1] == ' ' || s[i + 1] == '\0')
				c++;
		}
	}
	return (c);
}
