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
	int i = 0, ii = 0, size;
	int **arr, *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	size = (sizeof(int *) * height) + (sizeof(int) * width * height);
	arr = (int **)malloc(size);

	if (arr == NULL)
		return (NULL);

	row = (int *)(arr + height);

	for (; i < height; i++)
		arr[i] = (row + width * i);
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
