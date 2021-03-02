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
		size += (int)sizeof(av[i]);
	}

	s = malloc(size + 1);

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
