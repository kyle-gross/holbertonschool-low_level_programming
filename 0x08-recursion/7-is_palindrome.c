#include "holberton.h"

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

/**
 * palindromecheck - checks if string is palindrome
 * @f: first letter - moves right
 * @l: last letter - moves left
 * @s: string to check
 *
 * Return: 1 if palindrome 0 if not
 */
int palindromecheck(int f, int l, char *s)
{
	/* If first and last letters do not match - return 0 */
	if (s[f] != s[l])
		return (0);
	/* Iterate through string comparing first and last characters */
	if (f < l + 1)
		/* f and l meet in middle of string */
		return (palindromecheck(f + 1, l - 1, s));
	/* If palindrome is determined return 1 */
	return (1);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string to check
 *
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	/* If string is one character, return 1 */
	if (s + 1 == '\0')
		return (1);
	/* Helper function to check for palindrome */
	return (palindromecheck(0, (_strlen(s) - 1), s));
}
