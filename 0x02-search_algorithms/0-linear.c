#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: the array to search
 * @size: size of array; number of elements
 * @value: the value to search for
 *
 * Return: index of array where value is found. -1 if failure.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return (-1);
}