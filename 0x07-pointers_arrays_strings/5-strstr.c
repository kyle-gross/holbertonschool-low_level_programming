#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: 0 if no match, haystack from beginning of substring if match
 */
char *_strstr(char *haystack, char *needle)
{
	/* Variables */
	int i, ii, n;
	/* Loop through haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Reset n to 0 if not full match */
		n = 0;
		/* Loop through needle - Compare substring "needle" to string "haystack" */
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			/* Find matching word / substring */
			if (haystack[i + n] == needle[ii])
			{
				n++;
				/* If match found - return pointer to beginning of substring */
				if (needle[ii + 1] == '\0')
					return (haystack + i);
			}
			else
				break;
		}
	}
	/* Return null if substring not found */
	return (0);
}
