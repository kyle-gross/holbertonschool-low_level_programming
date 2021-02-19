#include "holberton.h"

/**
 * rot13 - translates a string TO rot13
 * @s: the string to translate
 *
 * Return: translated string
 */
char *rot13(char *s)
{
	int i, c;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if (c >= 'A' && c <= 'z')
			s[i] = rot13[c - 65];
	}
	return (s);
}
