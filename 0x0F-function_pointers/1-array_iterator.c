#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to execute on
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
