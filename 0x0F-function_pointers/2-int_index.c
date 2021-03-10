#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: number of elements in array
 * @cmp: pointer to function which compares
 * Return: index of first matching element, or -1 if no matches
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
