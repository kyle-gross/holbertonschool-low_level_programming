#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: Index to begin printing from
 * @end: Index to stop printing
 *
 * Return: void
 */
void print_array(const int *array, int start, int end)
{
    int i;

	printf("Searching in array: %d", array[start]);
    for (i = start + 1; i <= end; i++)
    {
        printf(", %d", array[i]);
    }
    printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found. -1 if failure.
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int m = 0;
	int r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;

		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return (-1);
}