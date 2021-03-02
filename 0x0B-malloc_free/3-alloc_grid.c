#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL if w or h is negative, or pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, ii = 0;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (; i < width; i++)
		arr[i] = (int *)malloc(width * sizeof(int));

	/* Initialize array to 0's */
	for (i = 0; i < height; i++)
	{
		for (; ii < width; ii++)
		{
			arr[i][ii] = 0;
		}
	}

	return (arr);
}
