#include "holberton.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: 0 if no matches, s + i if match found
 */
char *_strpbrk(char *s, char *accept)
{
	/* Variables */
	int i, ii;

	/* Loop through string 1 */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through string 2 */
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			/* Look for matching characters */
			if (s[i] == accept[ii])
			/* Return pointer to byte in string 1 starting from first character match */
				return (s + i);
		}
	}
	return (0);
}
