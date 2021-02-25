#include "holberton.h"

/**
 * starcheck - verifies if * is encountered
 * @pattern: the string to check for *
 * @ii: iteration variable
 * Return: 1 if pattern = * or 0 if not a *
 */
int starcheck(char *pattern, int ii)
{
	if (pattern[ii] == '*')
		return (1);
	if (ii == 0)
		return (0);
	else
		return (starcheck(pattern, ii - 1));
}

/**
 * cmp - compares strings
 * @i: iteration variable
 * @ii: iteration variable
 * @str: input string
 * @pattern: input pattern
 * Return: 1 if string matches pattern 0 if not
 */
int cmp(int i, int ii, char *str, char *pattern)
{
	if (pattern[ii] == '*')
		return (cmp(i, ii + 1, str, pattern));
	if (str[i] != pattern[ii])
	{
		if (str[i] == '\0')
			return (0);
		else if (starcheck(pattern, --ii) == 1)
			return (cmp(i + 1, ii, str, pattern));
		return (0);
	}
	if (pattern[ii] == '\0')
	{
		if (str[i] == '\0')
			return (1);
		return (0);
	}
	return (cmp(i + 1, ii + 1, str, pattern));
}

/**
 * wildcmp - compares 2 strings to see if they're identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (cmp(0, 0, s1, s2));
}
