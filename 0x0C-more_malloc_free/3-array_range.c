#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: lowest # of array
 * @max: highest # of array
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
