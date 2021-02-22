#include "holberton.h"

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
	unsigned int i = 0, ii, c = 0;

	if (!accept[0])
		return (c);
	/* Loop through string s */
	for (; s[i] != ','; i++)
	{
		/* Compare and count characters of accept to *s */
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
				c++;
		}
	}
	/* If no matches return 0 */
	return (c);
}
