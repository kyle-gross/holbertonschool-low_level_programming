#include "holberton.h"

/**
 * cap_string - capitalizes first letter of all words in string
 * @s: the string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	/* Check if first character is upper. If not, convert to upper */
	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	/* Loop through string looking for word separators */
	for (i = 1; s[i] != '\0'; i++)
	{
		/* Look for tabs, new line, space, !, or : */
		if ((s[i] >= 9 && s[i] <= 12) || (s[i] >= 32 && s[i] <= 34))
		{
			/* Check character after separator. If not upper, convert */
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		/* Look for parentheses, comma, or period */
		else if ((s[i] >= 40 && s[i] <= 41) || s[i] == 44 || s[i] == 46)
		{
			/* Check character after separator. If not upper, convert */
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		/* Look for ;, ?, or curly braces */
		else if (s[i] == 59 || s[i] == 63 || s[i] == 123 || s[i] == 125)
		{
			/* Check character after separator. If not upper, convert */
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
