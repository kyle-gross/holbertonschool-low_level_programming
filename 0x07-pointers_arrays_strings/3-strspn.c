#include "holberton.h"
int _strlen(char *s);

/**
 * _strspn - finds length of prefix substring
 * @s: the string to check
 * @accept: the string to compare
 *
 * Return: count of matching characters, or 0 if no matches
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Declare and define variables */
	int i, ii, c = 0;

	/* Loop through string s */
	for (i = 0; s[i] != ','; i++)
	{
		/* Compare and count characters of accept to *s */
		for (ii = 0; ii < _strlen(accept); ii++)
		{
			if (s[i] == accept[ii])
				c++;
		}
	}
	/* If no matches return 0 */
	return (c);
}

/**
 * _strlen - returns size of string
 * @s: the string to count
 *
 * Return: c - the size of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
