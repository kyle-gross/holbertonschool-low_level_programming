#include "holberton.h"

/**
 * leet - converts letters to leet language
 * @s: the string to translate
 *
 * Return: Translated string
 */
char *leet(char *s)
{
	int i, c;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (s[i] == letters[c])
				s[i] = numbers[c];
		}
	}
	return (s);
}
