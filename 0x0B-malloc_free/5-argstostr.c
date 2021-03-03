#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates command line arguments
 * @ac: argc
 * @av: argv
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, ii, n = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]) + 1;
	}

	s = (char *)malloc(size * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ii = 0;
		while (av[i][ii])
		{
			s[n] = av[i][ii];
			ii++;
			n++;
		}
		s[n] = '\n';
		n++;
	}
	s[n] = '\0';
	return (s);
}

/**
 * _strlen - counts a string
 * @s: string
 * Return: count
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
