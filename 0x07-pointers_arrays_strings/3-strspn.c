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
	unsigned int i, ii, c = 0;

	if (accept[0] == '\0')
		return (c);

	/* Loop through string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Compare and count characters of accept to *s */
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			/* If character matches accept, break loop and add to count */
			if (s[i] == accept[ii])
				break;
			/* If character NOT stored in accept is encountered, return count */
			if (!accept[ii + 1])
				return (c);
		}
		c++;
	}
	/* If no matches return 0 */
	return (c);
}
